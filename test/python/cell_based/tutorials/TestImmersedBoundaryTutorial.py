"""Copyright (c) 2005-2024, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
"""

#ifndef
#define TRIGGER_WIKI

## ## Introduction
## This tutorial is a demonstration of the immersed boundary method, a technique
## for simulating fluid-structure interactions. We can use the immersed boundary
## method to simulate a cell as a structure with its outer **boundary immersed**
## in a fluid. There is a two-way coupling between the fluid and the structure:
## the flow of the fluid exerts a force on the structure, and the structure
## influences the flow of the fluid.
##
## In this tutorial, we demonstrate:
## 1. Building single-cell immersed boundary capable simulations.
## 2. Building multi-cellular simulations.
## 3. Adding and manipulating fluid sources.
##
## ## Imports

import unittest

import chaste

chaste.init()  # setup MPI

from chaste.cell_based import (
    AbstractCellBasedTestSuite,
    CellsGeneratorUniformCellCycleModel_2,
    DifferentiatedCellProliferativeType,
    ForwardEulerNumericalMethod2_2,
    FluidSource2,
    ImmersedBoundaryCellPopulation2,
    ImmersedBoundaryLinearInteractionForce2,
    ImmersedBoundaryLinearMembraneForce2,
    ImmersedBoundarySimulationModifier2,
    OffLatticeSimulation2_2,
    SimulationTime,
    TearDownNotebookTest,
)
from chaste.mesh import ImmersedBoundaryPalisadeMeshGenerator
import chaste.visualization


class TestImmersedBoundaryTutorial(AbstractCellBasedTestSuite):

    ## ### Simple Immersed Boundary Simulations
    ## We begin by exploring simulations containing a single cell. This will
    ## familiarise you with how to generate immersed boundary cells, the steps
    ## involved in setting up an immersed boundary simulation, and the options
    ## available for controlling how the cells are generated and behave.
    ##
    ## Immersed boundary simulations operate over a square domain, with `x` and `y`
    ## coordinates lying in the range `0` to `1`. The domain wraps on both axes -
    ## this means that if a cell moves off the right hand edge of the domain,
    ## the segment will appear on the left hand side. This is not purely visual;
    ## forces are also transmitted across these boundaries.
    ##
    ## **Tip** Make sure all your coordinates are between `0` and `1`.

    def test_simple_immersed_boundary_simulation(self):
        # Set the start time for the simulation
        SimulationTime.Instance().SetStartTime(0.0)

        ## **Tip** Lines of code beginning with `#` are comments in Python
        ##
        ## Next, we define the necessary geometry.

        # Generate a mesh containing a single cell
        gen = ImmersedBoundaryPalisadeMeshGenerator(1, 128, 0.1, 2.0, 0.0, False)
        mesh = gen.GetMesh()

        ## The first line of code defines an `ImmersedBoundaryPalisadeMeshGenerator`
        ## called `gen`. The 3rd and 4th parameters control the exponent of the
        ## superellipse(`0.1`) and the aspect ratio of the cell(`2.0`). You can
        ## experiment with modifying these to change the initial shape of the cell.
        ##
        ## The second line of code instructs the mesh generator to generate a mesh.
        ## Checking the type of mesh with `type(mesh)` will show it as
        ## `ImmersedBoundaryMesh2_2`. The `2_2` suffix denotes that we are using
        ## a 2-dimensional space, and 2-dimensional elements to define the mesh.
        ##
        ## We now set the fluid grid resolution. The following code specifies
        ## that we are using a 64x64 grid to simulate our fluid over.

        # Set the fluid grid resolution
        mesh.SetNumGridPtsXAndY(64)

        ## Next, we set up the cell population

        # Generate the cells
        cell_type = DifferentiatedCellProliferativeType()
        cell_generator = CellsGeneratorUniformCellCycleModel_2()
        cells = cell_generator.GenerateBasicRandom(mesh.GetNumElements(), cell_type)

        # Set up the cell population
        cell_population = ImmersedBoundaryCellPopulation2(mesh, cells)

        ## We specify a cell type and cell cycle model. These can be
        ## interchanged to modify the life cycle of the cells. The
        ## `CellsGenerator` then constructs the necessary information for each
        ## of the elements in the mesh. Finally, we construct an
        ## `ImmersedBoundaryCellPopulation`. We then specify whether the
        ## population has active fluid sources or not. For now, we are not
        ## using any fluid sources, so we set this to false

        # Specify whether the population has active fluid sources
        cell_population.SetIfPopulationHasActiveSources(False)

        ## Here, we use an `OffLatticeSimulation` simulator to control the
        ## simulation. Although the fluid is simulated on a lattice (grid),
        ## the nodes/cells are not bound to a lattice.

        # Create a simulator to manage our simulation
        simulator = OffLatticeSimulation2_2(cell_population)
        numerical_method = ForwardEulerNumericalMethod2_2()
        numerical_method.SetUseUpdateNodeLocation(True)
        simulator.SetNumericalMethod(numerical_method)

        ## As we have an off-lattice simulation, we need a way to model the
        ## fluid. This is handled by the `ImmersedBoundarySimulationModifier`.
        ## Modifiers in chaste are classes that can be attached to simulations
        ## to perform some additional custom functionality each timestep.
        ## In this case, the modifier is responsible for solving the
        ## Navier-Stokes equations and propagating forces between the nodes and
        ## the fluid.

        # Add an immersed boundary simulation modifier.
        # The modifier is responsible for managing the fluid simulation
        # and propagating forces between the fluid & cell.
        main_modifier = ImmersedBoundarySimulationModifier2()
        simulator.AddSimulationModifier(main_modifier)

        ## We must also provide the modifier with a force model to govern
        ## interactions between the nodes forming the boundary of the cells.
        ## Note that these forces only act between nodes in the same cell,
        ## they do not control interactions between cells.

        # Add a force law to model the behaviour of the cell membrane
        boundary_force = ImmersedBoundaryLinearMembraneForce2()
        boundary_force.SetElementSpringConst(1.0 * 1e7)
        main_modifier.AddImmersedBoundaryForce(boundary_force)

        ## The spring constant(`1.0 * 1e7`) defines how stiff the cell boundary
        ## is. You can experiment with adjusting the spring constant to change
        ## the force behaviour between nodes of the cell boundary.
        ## The `ImmersedBoundaryLinearMembraneForce` models forces between
        ## membrane nodes using linear springs i.e, the force applied is
        ## proportional to the deviation of the distance between nodes
        ## from a rest length.

        ## Finally, we set up the simulation properties and run it.

        # Set simulation properties
        dt = 0.05
        simulator.SetOutputDirectory("Python/TestImmersedBoundary")
        simulator.SetDt(dt)
        simulator.SetSamplingTimestepMultiple(4)
        simulator.SetEndTime(1000 * dt)

        # Perform the simulation
        simulator.Solve()

        SimulationTime.Instance().Destroy()
        TearDownNotebookTest()

    ## ### Adding More Cells

    def test_multicell_immersed_boundary_simulation(self):
        ## #### Multiple Cells
        ## We can use the mesh generator to generate multiple cells. The first
        ## parameter of the mesh generator constructor controls the number of
        ## cells. Try increasing the number of cells by adjusting the parameter
        ## value. A sensible range for this tutorial is 4-10 cells.

        # Create a mesh generator
        gen = ImmersedBoundaryPalisadeMeshGenerator(1, 128, 0.1, 2.0, 0.0, False)

        ## #### Laminas
        ## In addition to the cells we have seen so far, we can introduce
        ## laminas to the simulation. Laminas are surfaces with reduced
        ## dimensionality. For 3D elements, a lamina is a 2D surface. For the
        ## 2D elements we are working with, laminas are lines. Changing the last
        ## parameter of the mesh generator constructor from `False` to `True`
        ## will generate a basal lamina spanning the palisade cells.
        ## Laminas can also interact with the fluid field, and can be made
        ## 'leaky' to allow some flow across their boundary. This can be used
        ## to model a permeable boundary.
        ##
        ## #### Cell Variations
        ## Apart from using the 3rd and 4th constructor parameters to modify
        ## the cell shapes, we can also introduce variation between cells by
        ## modifying the 5th parameter.

        # Generate the mesh
        mesh = gen.GetMesh()

        # Set the fluid grid resolution
        mesh.SetNumGridPtsXAndY(64)

        # Generate the cells
        cell_type = DifferentiatedCellProliferativeType()
        cell_generator = CellsGeneratorUniformCellCycleModel_2()
        cells = cell_generator.GenerateBasicRandom(mesh.GetNumElements(), cell_type)

        # Set up the cell population
        cell_population = ImmersedBoundaryCellPopulation2(mesh, cells)

        # Specify whether the population has active fluid sources
        cell_population.SetIfPopulationHasActiveSources(False)

        # Set the start time for the simulation
        SimulationTime.Instance().SetStartTime(0.0)

        # Create a simulator to manage our simulation
        simulator = OffLatticeSimulation2_2(cell_population)
        numerical_method = ForwardEulerNumericalMethod2_2()
        numerical_method.SetUseUpdateNodeLocation(True)
        simulator.SetNumericalMethod(numerical_method)

        # Add an immersed boundary simulation modifier.
        main_modifier = ImmersedBoundarySimulationModifier2()
        simulator.AddSimulationModifier(main_modifier)

        # Add a force law to model the behaviour of the cell membrane
        boundary_force = ImmersedBoundaryLinearMembraneForce2()
        boundary_force.SetElementSpringConst(1.0 * 1e7)
        main_modifier.AddImmersedBoundaryForce(boundary_force)

        ## #### Intercellular Interactions
        ## So far, we have encountered forces that act to maintain the shape
        ## of the cell membrane. We can also introduce forces that apply
        ## between cells using `ImmersedBoundaryLinearInteractionForce`. I
        ## Instead of the `SetElementSpringConst` method, it has a
        ## `SetSpringConst` method which we should use. The rest length can
        ## also be modified using the `SetRestLength` method.

        # Add a new intercellular force law
        interaction_force = ImmersedBoundaryLinearInteractionForce2()
        interaction_force.SetSpringConst(1.0 * 1e6)
        main_modifier.AddImmersedBoundaryForce(interaction_force)

        # Set simulation properties
        dt = 0.05
        simulator.SetOutputDirectory("Python/TestImmersedBoundary")
        simulator.SetDt(dt)
        simulator.SetSamplingTimestepMultiple(4)
        simulator.SetEndTime(1000 * dt)

        # Perform the simulation
        simulator.Solve()

        SimulationTime.Instance().Destroy()
        TearDownNotebookTest()

    ## ### Adding Fluid Sources
    ## Now that we are familiar with how to generate the cells, we will
    ## introduce fluid sources.

    def test_fluid_source_immersed_boundary_simulation(self):

        ## #### Adding a Fluid Source
        ## We begin by constructing a fluid source object.

        source = FluidSource2(0, 0.5, 0.7)

        ## This constructs a `FluidSource` object in 2 dimensions. The first
        ## parameter gives the index of the fluid source. Each source you
        ## create must have a unique index. The next parameters are the
        ## `x` and `y` coordinates of the source. Fluid sources in chaste are
        ## point-like, that is to say they do not have any area/volume.
        ##
        ## Having created the fluid source, we set its strength:

        source.SetStrength(0.012)

        ## Now, we must associate the source with an element in the simulation
        ## so that the simulation is aware of the source.

        # Create the mesh
        gen = ImmersedBoundaryPalisadeMeshGenerator(5, 128, 0.1, 2.0, 0.0, False)
        mesh = gen.GetMesh()
        mesh.SetNumGridPtsXAndY(64)

        # Associate the fluid source with an element in the mesh
        mesh.GetElement(0).SetFluidSource(source)

        ## Finally, we must tell the cell population that fluid sources are present.

        # Set up the cell population
        cell_type = DifferentiatedCellProliferativeType()
        cell_generator = CellsGeneratorUniformCellCycleModel_2()
        cells = cell_generator.GenerateBasicRandom(mesh.GetNumElements(), cell_type)
        cell_population = ImmersedBoundaryCellPopulation2(mesh, cells)

        # Specify that fluid sources are present
        cell_population.SetIfPopulationHasActiveSources(True)

        ## #### Varying the Source Location
        ## You can experiment with the source location. Try moving it closer to
        ## and further away from the cells.
        ##
        ## #### Varying the Source Strength
        ## Try modifying the source strength to see what impact this has on
        ## the cell shapes.

        # Create a simulator
        SimulationTime.Instance().SetStartTime(0.0)
        simulator = OffLatticeSimulation2_2(cell_population)
        numerical_method = ForwardEulerNumericalMethod2_2()
        numerical_method.SetUseUpdateNodeLocation(True)
        simulator.SetNumericalMethod(numerical_method)

        # Add an immersed boundary simulation modifier
        main_modifier = ImmersedBoundarySimulationModifier2()
        simulator.AddSimulationModifier(main_modifier)

        ## #### Fluid-Cell Interaction
        ## Have a go at modifying the spring constant of the
        ## `ImmersedBoundaryLinearMembraneForce` to see how this changes the
        ## effect of the fluid source on the cells.

        boundary_force = ImmersedBoundaryLinearMembraneForce2()
        boundary_force.SetElementSpringConst(1.0 * 1e7)
        main_modifier.AddImmersedBoundaryForce(boundary_force)

        interaction_force = ImmersedBoundaryLinearInteractionForce2()
        interaction_force.SetSpringConst(1.0 * 1e6)
        main_modifier.AddImmersedBoundaryForce(interaction_force)

        ## #### Adding More Sources
        ## Try adding second fluid source. You will need to use a unique index,
        ## and attach it to a different element as each element can only manage
        ## a single fluid source.

        # Set simulation properties
        dt = 0.05
        simulator.SetOutputDirectory("Python/TestImmersedBoundary")
        simulator.SetDt(dt)
        simulator.SetSamplingTimestepMultiple(4)
        simulator.SetEndTime(1000 * dt)

        # Perform the simulation
        simulator.Solve()

        SimulationTime.Instance().Destroy()
        TearDownNotebookTest()

        ## #### Further Exercises
        ## * Try integrating a different cell cycle model to introduce cell
        ##   division. See how the presence of a fluid source impacts the
        ##   structure that is formed.
        ## * Use one of the cell writers to collect some statistics


if __name__ == "__main__":
    unittest.main(verbosity=2)

#endif END_WIKI
