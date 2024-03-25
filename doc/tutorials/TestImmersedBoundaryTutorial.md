
---
title : "Test Immersed Boundary Tutorial"
summary: ""
draft: false
images: []
toc: true
layout: "single"
---

This tutorial is automatically generated from [TestImmersedBoundaryTutorial](https://github.com/Chaste/PyChaste/blob/develop/test/python/cell_based/tutorials/TestImmersedBoundaryTutorial.py) at revision [d74e09e9](https://github.com/Chaste/PyChaste/commit/d74e09e98ea2ab270cb232748ef3531258079d75).
Note that the code is given in full at the bottom of the page.


## Introduction
This tutorial is a demonstration of the immersed boundary method, a technique
for simulating fluid-structure interactions. We can use the immersed boundary
method to simulate a cell as a structure with its outer **boundary immersed**
in a fluid. There is a two-way coupling between the fluid and the structure:
the flow of the fluid exerts a force on the structure, and the structure
influences the flow of the fluid.

In this tutorial, we demonstrate how to:
1. Building single cell immersed boundary capable simulations.
2. Multi-cellular simulations.
3. Adding and manipulating fluid sources.

## Imports

```python
import unittest

import chaste
chaste.init() # setup MPI

from chaste.cell_based import (
    AbstractCellBasedTestSuite,
    CellsGeneratorUniformCellCycleModel_2,
    DifferentiatedCellProliferativeType,
    ForwardEulerNumericalMethod2_2,
    ImmersedBoundaryCellPopulation2,
    ImmersedBoundaryLinearMembraneForce2,
    ImmersedBoundarySimulationModifier2,
    OffLatticeSimulation2_2,
    SimulationTime,
    TearDownNotebookTest,
)
from chaste.mesh import ImmersedBoundaryPalisadeMeshGenerator
import chaste.visualization

class TestImmersedBoundaryTutorial(AbstractCellBasedTestSuite):

```
### Simple Immersed Boundary Simulations
We begin by exploring simulations containing a single cell. This will
familiarise you with how to generate immersed boundary cells, the steps
involved in setting up an immersed boundary simulation, and the options
available for controlling how the cells are generated and behave.

Immersed boundary simulations operate over a square domain, with `x` and `y`
coordinates lying in the range `0` to `1`. The domain wraps on both axes -
this means that if a cell moves off the right hand edge of the domain,
the segment will appear on the left hand side. This is not purely visual;
forces are also transmitted across these boundaries.

 **Tip** Make sure all your coordinates are between `0` and `1`.

```python
    def test_single_cell_immersed_boundary(self):
```
#### The First Cell

```python
        #Set the start time for the simulation
        SimulationTime.Instance().SetStartTime(0.0)

```
 **Tip** Lines of code beginning with `#` are comments in Python
 
Next, we define the necessary geometry.

```python
        # Generate a mesh containing a single cell
        gen = ImmersedBoundaryPalisadeMeshGenerator(1, 128, 0.1, 2.0, 0.0, False)
        mesh = gen.GetMesh()

```
The first line of code defines an `ImmersedBoundaryPalisadeMeshGenerator`
called `gen`. The 3rd and 4th parameters control the exponent of the
superellipse(`0.1`) and the aspect ratio of the cell(`2.0`). You can
experiment with modifying these to change the initial shape of the cell.

The second line of code instructs the mesh generator to generate a mesh.
Checking the type of mesh with `type(mesh)` will show it as
`ImmersedBoundaryMesh2_2`. The `2_2` suffix denotes that we are using
a 2-dimensional space, and 2-dimensional elements to define the mesh.

We now set the fluid grid resolution. The following code specifies
that we are using a 64x64 grid to simulate our fluid over.

```python
        #Set the fluid grid resolution
        mesh.SetNumGridPtsXAndY(64)

```
Next, we set up the cell population

```python
        # Generate the cells
        cell_type = DifferentiatedCellProliferativeType()
        cell_generator = CellsGeneratorUniformCellCycleModel_2()
        cells = cell_generator.GenerateBasicRandom(mesh.GetNumElements(), cell_type)

        # Set up the cell population
        cell_population = ImmersedBoundaryCellPopulation2(mesh, cells)

```
We specify a cell type and cell cycle model. These can be
interchanged to modify the life cycle of the cells. The
`CellsGenerator` then constructs the necessary information for each
of the elements in the mesh. Finally, we construct an
`ImmersedBoundaryCellPopulation`. We then specify whether the
population has active fluid sources or not. For now, we are not
using any fluid sources, so we set this to false

```python
        # Specify whether the population has active fluid sources
        cell_population.SetIfPopulationHasActiveSources(False)

```
Here, we use an `OffLatticeSimulation` simulator to control the
simulation. Although the fluid is simulated on a lattice (grid),
the nodes/cells are not bound to a lattice.

```python
        # Create a simulator to manage our simulation
        simulator = OffLatticeSimulation2_2(cell_population)
        numerical_method = ForwardEulerNumericalMethod2_2()
        numerical_method.SetUseUpdateNodeLocation(True)
        simulator.SetNumericalMethod(numerical_method)

```
As we have an off-lattice simulation, we need a way to model the
fluid. This is handled by the `ImmersedBoundarySimulationModifier`.
Modifiers in chaste are classes that can be attached to simulations
to perform some additional custom functionality each timestep.
In this case, the modifier is responsible for solving the
Navier-Stokes equations and propagating forces between the nodes and
the fluid.

```python
        # Add an immersed boundary simulation modifier.
        # The modifier is responsible for managing the fluid simulation
        # and propagating forces between the fluid & cell.
        main_modifier = ImmersedBoundarySimulationModifier2()
        simulator.AddSimulationModifier(main_modifier)

```
We must also provide the modifier with a force model to govern
interactions between the nodes forming the boundary of the cells.
Note that these forces only act between nodes in the same cell,
they do not control interactions between cells.

```python
        # Add a force law to model the behaviour of the cell membrane
        boundary_force = ImmersedBoundaryLinearMembraneForce2()
        boundary_force.SetElementSpringConst(1.0 * 1e7)
        main_modifier.AddImmersedBoundaryForce(boundary_force)

```
The spring constant(`1.0 * 1e7`) defines how stiff the cell boundary
is. You can experiment with adjusting the spring constant to change
the force behaviour between nodes of the cell boundary.
The `ImmersedBoundaryLinearMembraneForce` models forces between
membrane nodes using linear springs i.e, the force applied is
proportional to the deviation of the distance between nodes
from a rest length.

Finally, we set up the simulation properties and run it.

```python
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

if __name__ == '__main__':
    unittest.main(verbosity=2)

```


## Full code 


**File name:** `TestImmersedBoundaryTutorial.py` 

```python
import unittest

import chaste
chaste.init() # setup MPI

from chaste.cell_based import (
    AbstractCellBasedTestSuite,
    CellsGeneratorUniformCellCycleModel_2,
    DifferentiatedCellProliferativeType,
    ForwardEulerNumericalMethod2_2,
    ImmersedBoundaryCellPopulation2,
    ImmersedBoundaryLinearMembraneForce2,
    ImmersedBoundarySimulationModifier2,
    OffLatticeSimulation2_2,
    SimulationTime,
    TearDownNotebookTest,
)
from chaste.mesh import ImmersedBoundaryPalisadeMeshGenerator
import chaste.visualization

class TestImmersedBoundaryTutorial(AbstractCellBasedTestSuite):

    def test_single_cell_immersed_boundary(self):
        #Set the start time for the simulation
        SimulationTime.Instance().SetStartTime(0.0)

        # Generate a mesh containing a single cell
        gen = ImmersedBoundaryPalisadeMeshGenerator(1, 128, 0.1, 2.0, 0.0, False)
        mesh = gen.GetMesh()

        #Set the fluid grid resolution
        mesh.SetNumGridPtsXAndY(64)

        # Generate the cells
        cell_type = DifferentiatedCellProliferativeType()
        cell_generator = CellsGeneratorUniformCellCycleModel_2()
        cells = cell_generator.GenerateBasicRandom(mesh.GetNumElements(), cell_type)

        # Set up the cell population
        cell_population = ImmersedBoundaryCellPopulation2(mesh, cells)

        # Specify whether the population has active fluid sources
        cell_population.SetIfPopulationHasActiveSources(False)

        # Create a simulator to manage our simulation
        simulator = OffLatticeSimulation2_2(cell_population)
        numerical_method = ForwardEulerNumericalMethod2_2()
        numerical_method.SetUseUpdateNodeLocation(True)
        simulator.SetNumericalMethod(numerical_method)

        # Add an immersed boundary simulation modifier.
        # The modifier is responsible for managing the fluid simulation
        # and propagating forces between the fluid & cell.
        main_modifier = ImmersedBoundarySimulationModifier2()
        simulator.AddSimulationModifier(main_modifier)

        # Add a force law to model the behaviour of the cell membrane
        boundary_force = ImmersedBoundaryLinearMembraneForce2()
        boundary_force.SetElementSpringConst(1.0 * 1e7)
        main_modifier.AddImmersedBoundaryForce(boundary_force)

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

if __name__ == '__main__':
    unittest.main(verbosity=2)

```

