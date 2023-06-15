#ifndef chaste_project_PyChaste_HEADERS_HPP_
#define chaste_project_PyChaste_HEADERS_HPP_

// Includes
#include "Identifiable.hpp"
#include "PetscTools.hpp"
#include "ReplicatableVector.hpp"
#include "Timer.hpp"
#include "FileFinder.hpp"
#include "FileFinder.hpp"
#include "OutputFileHandler.hpp"
#include "ProgressReporter.hpp"
#include "RandomNumberGenerator.hpp"
#include "TimeStepper.hpp"
#include "Version.hpp"
#include "AbstractOdeSystemInformation.hpp"
#include "AbstractPythonOdeSystemInformation.hpp"
#include "AbstractOdeSystem.hpp"
#include "AbstractLinearPde.hpp"
#include "AbstractLinearParabolicPde.hpp"
#include "DeltaNotchEdgeOdeSystem.hpp"
#include "DeltaNotchInteriorOdeSystem.hpp"
#include "Alarcon2004OxygenBasedCellCycleOdeSystem.hpp"
#include "Goldbeter1991OdeSystem.hpp"
#include "TysonNovak2001OdeSystem.hpp"
#include "DeltaNotchOdeSystem.hpp"
#include "AbstractLinearEllipticPde.hpp"
#include "AbstractNonlinearEllipticPde.hpp"
#include "AbstractBoundaryCondition.hpp"
#include "ConstBoundaryCondition.hpp"
#include "PdeSimulationTime.hpp"
#include "ChastePoint.hpp"
#include "NodeAttributes.hpp"
#include "Node.hpp"
#include "Element.hpp"
#include "Edge.hpp"
#include "EdgeHelper.hpp"
#include "EdgeOperation.hpp"
#include "AbstractMesh.hpp"
#include "AbstractTetrahedralMesh.hpp"
#include "TetrahedralMesh.hpp"
#include "MutableMesh.hpp"
#include "NodesOnlyMesh.hpp"
#include "PottsElement.hpp"
#include "PottsMesh.hpp"
#include "SharedPottsMeshGenerator.hpp"
#include "VertexMesh.hpp"
#include "MutableVertexMesh.hpp"
#include "Cylindrical2dVertexMesh.hpp"
#include "Toroidal2dMesh.hpp"
#include "PeriodicNodesOnlyMesh.hpp"
#include "Cylindrical2dNodesOnlyMesh.hpp"
#include "Cylindrical2dMesh.hpp"
#include "Toroidal2dVertexMesh.hpp"
#include "SharedHoneycombMeshGenerator.hpp"
#include "SharedHoneycombVertexMeshGenerator.hpp"
#include "SharedCylindricalHoneycombVertexMeshGenerator.hpp"
#include "AbstractCellCycleModel.hpp"
#include "AbstractPhaseBasedCellCycleModel.hpp"
#include "AbstractSimpleCellCycleModel.hpp"
#include "AbstractSimplePhaseBasedCellCycleModel.hpp"
#include "AbstractSimpleGenerationalCellCycleModel.hpp"
#include "UniformCellCycleModel.hpp"
#include "SimpleOxygenBasedCellCycleModel.hpp"
#include "UniformG1GenerationalCellCycleModel.hpp"
#include "NoCellCycleModel.hpp"
#include "BiasedBernoulliTrialCellCycleModel.hpp"
#include "LabelDependentBernoulliTrialCellCycleModel.hpp"
#include "AlwaysDivideCellCycleModel.hpp"
#include "AbstractOdeBasedCellCycleModel.hpp"
#include "ContactInhibitionCellCycleModel.hpp"
#include "StochasticOxygenBasedCellCycleModel.hpp"
#include "GammaG1CellCycleModel.hpp"
#include "ExponentialG1GenerationalCellCycleModel.hpp"
#include "AbstractOdeBasedPhaseBasedCellCycleModel.hpp"
#include "TysonNovakCellCycleModel.hpp"
#include "Alarcon2004OxygenBasedCellCycleModel.hpp"
#include "FixedSequenceCellCycleModel.hpp"
#include "BernoulliTrialCellCycleModel.hpp"
#include "FixedG1GenerationalCellCycleModel.hpp"
#include "AbstractCellCycleModelOdeSolver.hpp"
#include "AbstractCellProperty.hpp"
#include "CellPropertyCollection.hpp"
#include "AbstractCellProliferativeType.hpp"
#include "StemCellProliferativeType.hpp"
#include "DefaultCellProliferativeType.hpp"
#include "TransitCellProliferativeType.hpp"
#include "DifferentiatedCellProliferativeType.hpp"
#include "AbstractCellMutationState.hpp"
#include "ApcOneHitCellMutationState.hpp"
#include "ApcTwoHitCellMutationState.hpp"
#include "BetaCateninOneHitCellMutationState.hpp"
#include "WildTypeCellMutationState.hpp"
#include "ApoptoticCellProperty.hpp"
#include "CellData.hpp"
#include "CellLabel.hpp"
#include "CellAncestor.hpp"
#include "CellId.hpp"
#include "CellEdgeData.hpp"
#include "CellPropertyRegistry.hpp"
#include "AbstractSrnModel.hpp"
#include "AbstractOdeSrnModel.hpp"
#include "NullSrnModel.hpp"
#include "CellSrnModel.hpp"
#include "DeltaNotchSrnModel.hpp"
#include "DeltaNotchEdgeSrnModel.hpp"
#include "DeltaNotchInteriorSrnModel.hpp"
#include "Goldbeter1991SrnModel.hpp"
#include "VertexBasedPopulationSrn.hpp"
#include "Cell.hpp"
#include "CellsGenerator.hpp"
#include "CellwiseSourceEllipticPde.hpp"
#include "AveragedSourceEllipticPde.hpp"
#include "VolumeDependentAveragedSourceEllipticPde.hpp"
#include "UniformSourceEllipticPde.hpp"
#include "CellwiseSourceParabolicPde.hpp"
#include "AbstractCellBasedSimulationModifier.hpp"
#include "UniformSourceParabolicPde.hpp"
#include "AveragedSourceParabolicPde.hpp"
#include "CellBasedEllipticPdeSolver.hpp"
#include "CellBasedParabolicPdeSolver.hpp"
#include "AbstractPdeModifier.hpp"
#include "AbstractBoxDomainPdeModifier.hpp"
#include "AbstractGrowingDomainPdeModifier.hpp"
#include "EllipticGrowingDomainPdeModifier.hpp"
#include "ParabolicGrowingDomainPdeModifier.hpp"
#include "EllipticBoxDomainPdeModifier.hpp"
#include "ParabolicBoxDomainPdeModifier.hpp"
#include "VoronoiDataWriter.hpp"
#include "CellLabelWriter.hpp"
#include "AbstractUpdateRule.hpp"
#include "AbstractCaUpdateRule.hpp"
#include "DiffusionCaUpdateRule.hpp"
#include "AbstractPottsUpdateRule.hpp"
#include "VolumeConstraintPottsUpdateRule.hpp"
#include "SurfaceAreaConstraintPottsUpdateRule.hpp"
#include "AdhesionPottsUpdateRule.hpp"
#include "DifferentialAdhesionPottsUpdateRule.hpp"
#include "AbstractVertexBasedDivisionRule.hpp"
#include "AbstractForce.hpp"
#include "AbstractTwoBodyInteractionForce.hpp"
#include "RandomDirectionVertexBasedDivisionRule.hpp"
#include "VonMisesVertexBasedDivisionRule.hpp"
#include "FixedVertexBasedDivisionRule.hpp"
#include "AbstractCaBasedDivisionRule.hpp"
#include "ShovingCaBasedDivisionRule.hpp"
#include "ExclusionCaBasedDivisionRule.hpp"
#include "ShortAxisVertexBasedDivisionRule.hpp"
#include "RandomCaSwitchingUpdateRule.hpp"
#include "ChemotaxisPottsUpdateRule.hpp"
#include "AbstractCaSwitchingUpdateRule.hpp"
#include "BuskeAdhesiveForce.hpp"
#include "BuskeCompressionForce.hpp"
#include "BuskeElasticForce.hpp"
#include "ChemotacticForce.hpp"
#include "GeneralisedLinearSpringForce.hpp"
#include "DifferentialAdhesionGeneralisedLinearSpringForce.hpp"
#include "NagaiHondaForce.hpp"
#include "DiffusionForce.hpp"
#include "RepulsionForce.hpp"
#include "WelikyOsterForce.hpp"
#include "FarhadifarForce.hpp"
#include "PlanarPolarisedFarhadifarForce.hpp"
#include "NagaiHondaDifferentialAdhesionForce.hpp"
#include "AbstractCellKiller.hpp"
#include "PlaneBasedCellKiller.hpp"
#include "ApoptoticCellKiller.hpp"
#include "AbstractCellPopulationBoundaryCondition.hpp"
#include "PlaneBoundaryCondition.hpp"
#include "AttractingPlaneBoundaryCondition.hpp"
#include "TargetedCellKiller.hpp"
#include "RandomCellKiller.hpp"
#include "T2SwapCellKiller.hpp"
#include "IsolatedLabelledCellKiller.hpp"
#include "SphereGeometryBoundaryCondition.hpp"
#include "AbstractCellPopulation.hpp"
#include "AbstractOffLatticeCellPopulation.hpp"
#include "AbstractCentreBasedCellPopulation.hpp"
#include "SlidingBoundaryCondition.hpp"
#include "AbstractOnLatticeCellPopulation.hpp"
#include "NodeBasedCellPopulationWithParticles.hpp"
#include "CaBasedCellPopulation.hpp"
#include "MeshBasedCellPopulation.hpp"
#include "MeshBasedCellPopulationWithGhostNodes.hpp"
#include "VertexBasedCellPopulation.hpp"
#include "PottsBasedCellPopulation.hpp"
#include "NodeBasedCellPopulation.hpp"
#include "NodeBasedCellPopulationWithBuskeUpdate.hpp"
#include "AbstractTargetAreaModifier.hpp"
#include "ConstantTargetAreaModifier.hpp"
#include "SimpleTargetAreaModifier.hpp"
#include "DivisionBiasTrackingModifier.hpp"
#include "ExtrinsicPullModifier.hpp"
#include "DeltaNotchEdgeInteriorTrackingModifier.hpp"
#include "DeltaNotchTrackingModifier.hpp"
#include "TargetAreaLinearGrowthModifier.hpp"
#include "VolumeTrackingModifier.hpp"
#include "VtkSceneModifier.hpp"
#include "AbstractCellBasedSimulation.hpp"
#include "SimulationTime.hpp"
#include "OnLatticeSimulation.hpp"
#include "OffLatticeSimulation.hpp"
#include "PythonSimulationModifier.hpp"
#include "Hello.hpp"
#include "VtkScene.hpp"
#include "AbstractPyChasteActorGenerator.hpp"
#include "CellPopulationPyChasteActorGenerator.hpp"
#include "AbstractChasteRegion.hpp"
#include "ChastePoint.hpp"
#include "ChasteCuboid.hpp"
#include "ChasteEllipsoid.hpp"
#include "CylindricalHoneycombMeshGenerator.hpp"
#include "ToroidalHoneycombMeshGenerator.hpp"
#include "ToroidalHoneycombVertexMeshGenerator.hpp"
#include "VoronoiVertexMeshGenerator.hpp"

// Instantiate Template Classes 
template class AbstractLinearPde<2,2>;
template class AbstractLinearPde<3,3>;
template class AbstractLinearParabolicPde<2,2>;
template class AbstractLinearParabolicPde<3,3>;
template class AbstractLinearEllipticPde<2,2>;
template class AbstractLinearEllipticPde<3,3>;
template class AbstractNonlinearEllipticPde<2>;
template class AbstractNonlinearEllipticPde<3>;
template class AbstractBoundaryCondition<2>;
template class AbstractBoundaryCondition<3>;
template class ConstBoundaryCondition<2>;
template class ConstBoundaryCondition<3>;
template class ChastePoint<2>;
template class ChastePoint<3>;
template class NodeAttributes<2>;
template class NodeAttributes<3>;
template class Node<2>;
template class Node<3>;
template class Element<2,2>;
template class Element<3,3>;
template class Edge<2>;
template class Edge<3>;
template class EdgeHelper<2>;
template class EdgeHelper<3>;
template class AbstractMesh<2,2>;
template class AbstractMesh<3,3>;
template class AbstractTetrahedralMesh<2,2>;
template class AbstractTetrahedralMesh<3,3>;
template class TetrahedralMesh<2,2>;
template class TetrahedralMesh<3,3>;
template class MutableMesh<2,2>;
template class MutableMesh<3,3>;
template class NodesOnlyMesh<2>;
template class NodesOnlyMesh<3>;
template class PottsElement<2>;
template class PottsElement<3>;
template class PottsMesh<2>;
template class PottsMesh<3>;
template class SharedPottsMeshGenerator<2>;
template class SharedPottsMeshGenerator<3>;
template class VertexMesh<2,2>;
template class VertexMesh<3,3>;
template class MutableVertexMesh<2,2>;
template class MutableVertexMesh<3,3>;
template class PeriodicNodesOnlyMesh<2>;
template class PeriodicNodesOnlyMesh<3>;
template class VertexBasedPopulationSrn<2>;
template class VertexBasedPopulationSrn<3>;
template class CellsGenerator<NoCellCycleModel,2>;
template class CellsGenerator<NoCellCycleModel,3>;
template class CellsGenerator<UniformCellCycleModel,2>;
template class CellsGenerator<UniformCellCycleModel,3>;
template class CellsGenerator<SimpleOxygenBasedCellCycleModel,2>;
template class CellsGenerator<SimpleOxygenBasedCellCycleModel,3>;
template class CellsGenerator<UniformG1GenerationalCellCycleModel,2>;
template class CellsGenerator<UniformG1GenerationalCellCycleModel,3>;
template class CellsGenerator<BiasedBernoulliTrialCellCycleModel,2>;
template class CellsGenerator<BiasedBernoulliTrialCellCycleModel,3>;
template class CellsGenerator<LabelDependentBernoulliTrialCellCycleModel,2>;
template class CellsGenerator<LabelDependentBernoulliTrialCellCycleModel,3>;
template class CellsGenerator<AlwaysDivideCellCycleModel,2>;
template class CellsGenerator<AlwaysDivideCellCycleModel,3>;
template class CellsGenerator<ContactInhibitionCellCycleModel,2>;
template class CellsGenerator<ContactInhibitionCellCycleModel,3>;
template class CellsGenerator<StochasticOxygenBasedCellCycleModel,2>;
template class CellsGenerator<StochasticOxygenBasedCellCycleModel,3>;
template class CellsGenerator<GammaG1CellCycleModel,2>;
template class CellsGenerator<GammaG1CellCycleModel,3>;
template class CellsGenerator<ExponentialG1GenerationalCellCycleModel,2>;
template class CellsGenerator<ExponentialG1GenerationalCellCycleModel,3>;
template class CellsGenerator<TysonNovakCellCycleModel,2>;
template class CellsGenerator<TysonNovakCellCycleModel,3>;
template class CellsGenerator<Alarcon2004OxygenBasedCellCycleModel,2>;
template class CellsGenerator<Alarcon2004OxygenBasedCellCycleModel,3>;
template class CellsGenerator<FixedSequenceCellCycleModel,2>;
template class CellsGenerator<FixedSequenceCellCycleModel,3>;
template class CellsGenerator<BernoulliTrialCellCycleModel,2>;
template class CellsGenerator<BernoulliTrialCellCycleModel,3>;
template class CellsGenerator<FixedG1GenerationalCellCycleModel,2>;
template class CellsGenerator<FixedG1GenerationalCellCycleModel,3>;
template class CellwiseSourceEllipticPde<2>;
template class CellwiseSourceEllipticPde<3>;
template class AveragedSourceEllipticPde<2>;
template class AveragedSourceEllipticPde<3>;
template class VolumeDependentAveragedSourceEllipticPde<2>;
template class VolumeDependentAveragedSourceEllipticPde<3>;
template class UniformSourceEllipticPde<2>;
template class UniformSourceEllipticPde<3>;
template class CellwiseSourceParabolicPde<2>;
template class CellwiseSourceParabolicPde<3>;
template class AbstractCellBasedSimulationModifier<2,2>;
template class AbstractCellBasedSimulationModifier<3,3>;
template class UniformSourceParabolicPde<2>;
template class UniformSourceParabolicPde<3>;
template class AveragedSourceParabolicPde<2>;
template class AveragedSourceParabolicPde<3>;
template class CellBasedEllipticPdeSolver<2>;
template class CellBasedEllipticPdeSolver<3>;
template class CellBasedParabolicPdeSolver<2>;
template class CellBasedParabolicPdeSolver<3>;
template class AbstractPdeModifier<2>;
template class AbstractPdeModifier<3>;
template class AbstractBoxDomainPdeModifier<2>;
template class AbstractBoxDomainPdeModifier<3>;
template class AbstractGrowingDomainPdeModifier<2>;
template class AbstractGrowingDomainPdeModifier<3>;
template class EllipticGrowingDomainPdeModifier<2>;
template class EllipticGrowingDomainPdeModifier<3>;
template class ParabolicGrowingDomainPdeModifier<2>;
template class ParabolicGrowingDomainPdeModifier<3>;
template class EllipticBoxDomainPdeModifier<2>;
template class EllipticBoxDomainPdeModifier<3>;
template class ParabolicBoxDomainPdeModifier<2>;
template class ParabolicBoxDomainPdeModifier<3>;
template class VoronoiDataWriter<2,2>;
template class VoronoiDataWriter<3,3>;
template class CellLabelWriter<2,2>;
template class CellLabelWriter<3,3>;
template class AbstractUpdateRule<2>;
template class AbstractUpdateRule<3>;
template class AbstractCaUpdateRule<2>;
template class AbstractCaUpdateRule<3>;
template class DiffusionCaUpdateRule<2>;
template class DiffusionCaUpdateRule<3>;
template class AbstractPottsUpdateRule<2>;
template class AbstractPottsUpdateRule<3>;
template class VolumeConstraintPottsUpdateRule<2>;
template class VolumeConstraintPottsUpdateRule<3>;
template class SurfaceAreaConstraintPottsUpdateRule<2>;
template class SurfaceAreaConstraintPottsUpdateRule<3>;
template class AdhesionPottsUpdateRule<2>;
template class AdhesionPottsUpdateRule<3>;
template class DifferentialAdhesionPottsUpdateRule<2>;
template class DifferentialAdhesionPottsUpdateRule<3>;
template class AbstractVertexBasedDivisionRule<2>;
template class AbstractVertexBasedDivisionRule<3>;
template class AbstractForce<2,2>;
template class AbstractForce<3,3>;
template class AbstractTwoBodyInteractionForce<2,2>;
template class AbstractTwoBodyInteractionForce<3,3>;
template class RandomDirectionVertexBasedDivisionRule<2>;
template class RandomDirectionVertexBasedDivisionRule<3>;
template class VonMisesVertexBasedDivisionRule<2>;
template class VonMisesVertexBasedDivisionRule<3>;
template class FixedVertexBasedDivisionRule<2>;
template class FixedVertexBasedDivisionRule<3>;
template class AbstractCaBasedDivisionRule<2>;
template class AbstractCaBasedDivisionRule<3>;
template class ShovingCaBasedDivisionRule<2>;
template class ShovingCaBasedDivisionRule<3>;
template class ExclusionCaBasedDivisionRule<2>;
template class ExclusionCaBasedDivisionRule<3>;
template class ShortAxisVertexBasedDivisionRule<2>;
template class ShortAxisVertexBasedDivisionRule<3>;
template class RandomCaSwitchingUpdateRule<2>;
template class RandomCaSwitchingUpdateRule<3>;
template class ChemotaxisPottsUpdateRule<2>;
template class ChemotaxisPottsUpdateRule<3>;
template class AbstractCaSwitchingUpdateRule<2>;
template class AbstractCaSwitchingUpdateRule<3>;
template class BuskeAdhesiveForce<2>;
template class BuskeAdhesiveForce<3>;
template class BuskeCompressionForce<2>;
template class BuskeCompressionForce<3>;
template class BuskeElasticForce<2>;
template class BuskeElasticForce<3>;
template class ChemotacticForce<2>;
template class ChemotacticForce<3>;
template class GeneralisedLinearSpringForce<2,2>;
template class GeneralisedLinearSpringForce<3,3>;
template class DifferentialAdhesionGeneralisedLinearSpringForce<2,2>;
template class DifferentialAdhesionGeneralisedLinearSpringForce<3,3>;
template class NagaiHondaForce<2>;
template class NagaiHondaForce<3>;
template class DiffusionForce<2>;
template class DiffusionForce<3>;
template class RepulsionForce<2>;
template class RepulsionForce<3>;
template class WelikyOsterForce<2>;
template class WelikyOsterForce<3>;
template class FarhadifarForce<2>;
template class FarhadifarForce<3>;
template class PlanarPolarisedFarhadifarForce<2>;
template class PlanarPolarisedFarhadifarForce<3>;
template class NagaiHondaDifferentialAdhesionForce<2>;
template class NagaiHondaDifferentialAdhesionForce<3>;
template class AbstractCellKiller<2>;
template class AbstractCellKiller<3>;
template class PlaneBasedCellKiller<2>;
template class PlaneBasedCellKiller<3>;
template class ApoptoticCellKiller<2>;
template class ApoptoticCellKiller<3>;
template class AbstractCellPopulationBoundaryCondition<2,2>;
template class AbstractCellPopulationBoundaryCondition<3,3>;
template class PlaneBoundaryCondition<2,2>;
template class PlaneBoundaryCondition<3,3>;
template class AttractingPlaneBoundaryCondition<2,2>;
template class AttractingPlaneBoundaryCondition<3,3>;
template class TargetedCellKiller<2>;
template class TargetedCellKiller<3>;
template class RandomCellKiller<2>;
template class RandomCellKiller<3>;
template class T2SwapCellKiller<2>;
template class T2SwapCellKiller<3>;
template class IsolatedLabelledCellKiller<2>;
template class IsolatedLabelledCellKiller<3>;
template class SphereGeometryBoundaryCondition<2>;
template class SphereGeometryBoundaryCondition<3>;
template class AbstractCellPopulation<2,2>;
template class AbstractCellPopulation<3,3>;
template class AbstractOffLatticeCellPopulation<2,2>;
template class AbstractOffLatticeCellPopulation<3,3>;
template class AbstractCentreBasedCellPopulation<2,2>;
template class AbstractCentreBasedCellPopulation<3,3>;
template class SlidingBoundaryCondition<2>;
template class SlidingBoundaryCondition<3>;
template class AbstractOnLatticeCellPopulation<2>;
template class AbstractOnLatticeCellPopulation<3>;
template class NodeBasedCellPopulationWithParticles<2>;
template class NodeBasedCellPopulationWithParticles<3>;
template class CaBasedCellPopulation<2>;
template class CaBasedCellPopulation<3>;
template class MeshBasedCellPopulation<2,2>;
template class MeshBasedCellPopulation<3,3>;
template class MeshBasedCellPopulationWithGhostNodes<2>;
template class MeshBasedCellPopulationWithGhostNodes<3>;
template class VertexBasedCellPopulation<2>;
template class VertexBasedCellPopulation<3>;
template class PottsBasedCellPopulation<2>;
template class PottsBasedCellPopulation<3>;
template class NodeBasedCellPopulation<2>;
template class NodeBasedCellPopulation<3>;
template class NodeBasedCellPopulationWithBuskeUpdate<2>;
template class NodeBasedCellPopulationWithBuskeUpdate<3>;
template class AbstractTargetAreaModifier<2>;
template class AbstractTargetAreaModifier<3>;
template class ConstantTargetAreaModifier<2>;
template class ConstantTargetAreaModifier<3>;
template class SimpleTargetAreaModifier<2>;
template class SimpleTargetAreaModifier<3>;
template class DivisionBiasTrackingModifier<2>;
template class DivisionBiasTrackingModifier<3>;
template class ExtrinsicPullModifier<2>;
template class ExtrinsicPullModifier<3>;
template class DeltaNotchEdgeInteriorTrackingModifier<2>;
template class DeltaNotchEdgeInteriorTrackingModifier<3>;
template class DeltaNotchTrackingModifier<2>;
template class DeltaNotchTrackingModifier<3>;
template class TargetAreaLinearGrowthModifier<2>;
template class TargetAreaLinearGrowthModifier<3>;
template class VolumeTrackingModifier<2>;
template class VolumeTrackingModifier<3>;
template class VtkSceneModifier<2>;
template class VtkSceneModifier<3>;
template class AbstractCellBasedSimulation<2,2>;
template class AbstractCellBasedSimulation<3,3>;
template class OnLatticeSimulation<2>;
template class OnLatticeSimulation<3>;
template class OffLatticeSimulation<2,2>;
template class OffLatticeSimulation<3,3>;
template class PythonSimulationModifier<2>;
template class PythonSimulationModifier<3>;
template class VtkScene<2>;
template class VtkScene<3>;
template class AbstractPyChasteActorGenerator<2>;
template class AbstractPyChasteActorGenerator<3>;
template class CellPopulationPyChasteActorGenerator<2>;
template class CellPopulationPyChasteActorGenerator<3>;
template class AbstractChasteRegion<2>;
template class AbstractChasteRegion<3>;
template class ChastePoint<2>;
template class ChastePoint<3>;
template class ChasteCuboid<2>;
template class ChasteCuboid<3>;
template class ChasteEllipsoid<2>;
template class ChasteEllipsoid<3>;

// Typedef for nicer naming
namespace cppwg{ 
typedef AbstractLinearPde<2,2> AbstractLinearPde2_2;
typedef AbstractLinearPde<3,3> AbstractLinearPde3_3;
typedef AbstractLinearParabolicPde<2,2> AbstractLinearParabolicPde2_2;
typedef AbstractLinearParabolicPde<3,3> AbstractLinearParabolicPde3_3;
typedef AbstractLinearEllipticPde<2,2> AbstractLinearEllipticPde2_2;
typedef AbstractLinearEllipticPde<3,3> AbstractLinearEllipticPde3_3;
typedef AbstractNonlinearEllipticPde<2> AbstractNonlinearEllipticPde2;
typedef AbstractNonlinearEllipticPde<3> AbstractNonlinearEllipticPde3;
typedef AbstractBoundaryCondition<2> AbstractBoundaryCondition2;
typedef AbstractBoundaryCondition<3> AbstractBoundaryCondition3;
typedef ConstBoundaryCondition<2> ConstBoundaryCondition2;
typedef ConstBoundaryCondition<3> ConstBoundaryCondition3;
typedef ChastePoint<2> ChastePoint2;
typedef ChastePoint<3> ChastePoint3;
typedef NodeAttributes<2> NodeAttributes2;
typedef NodeAttributes<3> NodeAttributes3;
typedef Node<2> Node2;
typedef Node<3> Node3;
typedef Element<2,2> Element2_2;
typedef Element<3,3> Element3_3;
typedef Edge<2> Edge2;
typedef Edge<3> Edge3;
typedef EdgeHelper<2> EdgeHelper2;
typedef EdgeHelper<3> EdgeHelper3;
typedef AbstractMesh<2,2> AbstractMesh2_2;
typedef AbstractMesh<3,3> AbstractMesh3_3;
typedef AbstractTetrahedralMesh<2,2> AbstractTetrahedralMesh2_2;
typedef AbstractTetrahedralMesh<3,3> AbstractTetrahedralMesh3_3;
typedef TetrahedralMesh<2,2> TetrahedralMesh2_2;
typedef TetrahedralMesh<3,3> TetrahedralMesh3_3;
typedef MutableMesh<2,2> MutableMesh2_2;
typedef MutableMesh<3,3> MutableMesh3_3;
typedef NodesOnlyMesh<2> NodesOnlyMesh2;
typedef NodesOnlyMesh<3> NodesOnlyMesh3;
typedef PottsElement<2> PottsElement2;
typedef PottsElement<3> PottsElement3;
typedef PottsMesh<2> PottsMesh2;
typedef PottsMesh<3> PottsMesh3;
typedef SharedPottsMeshGenerator<2> PottsMeshGenerator2;
typedef SharedPottsMeshGenerator<3> PottsMeshGenerator3;
typedef VertexMesh<2,2> VertexMesh2_2;
typedef VertexMesh<3,3> VertexMesh3_3;
typedef MutableVertexMesh<2,2> MutableVertexMesh2_2;
typedef MutableVertexMesh<3,3> MutableVertexMesh3_3;
typedef PeriodicNodesOnlyMesh<2> PeriodicNodesOnlyMesh2;
typedef PeriodicNodesOnlyMesh<3> PeriodicNodesOnlyMesh3;
typedef VertexBasedPopulationSrn<2> VertexBasedPopulationSrn2;
typedef VertexBasedPopulationSrn<3> VertexBasedPopulationSrn3;
typedef CellsGenerator<NoCellCycleModel,2> CellsGeneratorNoCellCycleModel_2;
typedef CellsGenerator<NoCellCycleModel,3> CellsGeneratorNoCellCycleModel_3;
typedef CellsGenerator<UniformCellCycleModel,2> CellsGeneratorUniformCellCycleModel_2;
typedef CellsGenerator<UniformCellCycleModel,3> CellsGeneratorUniformCellCycleModel_3;
typedef CellsGenerator<SimpleOxygenBasedCellCycleModel,2> CellsGeneratorSimpleOxygenBasedCellCycleModel_2;
typedef CellsGenerator<SimpleOxygenBasedCellCycleModel,3> CellsGeneratorSimpleOxygenBasedCellCycleModel_3;
typedef CellsGenerator<UniformG1GenerationalCellCycleModel,2> CellsGeneratorUniformG1GenerationalCellCycleModel_2;
typedef CellsGenerator<UniformG1GenerationalCellCycleModel,3> CellsGeneratorUniformG1GenerationalCellCycleModel_3;
typedef CellsGenerator<BiasedBernoulliTrialCellCycleModel,2> CellsGeneratorBiasedBernoulliTrialCellCycleModel_2;
typedef CellsGenerator<BiasedBernoulliTrialCellCycleModel,3> CellsGeneratorBiasedBernoulliTrialCellCycleModel_3;
typedef CellsGenerator<LabelDependentBernoulliTrialCellCycleModel,2> CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_2;
typedef CellsGenerator<LabelDependentBernoulliTrialCellCycleModel,3> CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3;
typedef CellsGenerator<AlwaysDivideCellCycleModel,2> CellsGeneratorAlwaysDivideCellCycleModel_2;
typedef CellsGenerator<AlwaysDivideCellCycleModel,3> CellsGeneratorAlwaysDivideCellCycleModel_3;
typedef CellsGenerator<ContactInhibitionCellCycleModel,2> CellsGeneratorContactInhibitionCellCycleModel_2;
typedef CellsGenerator<ContactInhibitionCellCycleModel,3> CellsGeneratorContactInhibitionCellCycleModel_3;
typedef CellsGenerator<StochasticOxygenBasedCellCycleModel,2> CellsGeneratorStochasticOxygenBasedCellCycleModel_2;
typedef CellsGenerator<StochasticOxygenBasedCellCycleModel,3> CellsGeneratorStochasticOxygenBasedCellCycleModel_3;
typedef CellsGenerator<GammaG1CellCycleModel,2> CellsGeneratorGammaG1CellCycleModel_2;
typedef CellsGenerator<GammaG1CellCycleModel,3> CellsGeneratorGammaG1CellCycleModel_3;
typedef CellsGenerator<ExponentialG1GenerationalCellCycleModel,2> CellsGeneratorExponentialG1GenerationalCellCycleModel_2;
typedef CellsGenerator<ExponentialG1GenerationalCellCycleModel,3> CellsGeneratorExponentialG1GenerationalCellCycleModel_3;
typedef CellsGenerator<TysonNovakCellCycleModel,2> CellsGeneratorTysonNovakCellCycleModel_2;
typedef CellsGenerator<TysonNovakCellCycleModel,3> CellsGeneratorTysonNovakCellCycleModel_3;
typedef CellsGenerator<Alarcon2004OxygenBasedCellCycleModel,2> CellsGeneratorAlarcon2004OxygenBasedCellCycleModel_2;
typedef CellsGenerator<Alarcon2004OxygenBasedCellCycleModel,3> CellsGeneratorAlarcon2004OxygenBasedCellCycleModel_3;
typedef CellsGenerator<FixedSequenceCellCycleModel,2> CellsGeneratorFixedSequenceCellCycleModel_2;
typedef CellsGenerator<FixedSequenceCellCycleModel,3> CellsGeneratorFixedSequenceCellCycleModel_3;
typedef CellsGenerator<BernoulliTrialCellCycleModel,2> CellsGeneratorBernoulliTrialCellCycleModel_2;
typedef CellsGenerator<BernoulliTrialCellCycleModel,3> CellsGeneratorBernoulliTrialCellCycleModel_3;
typedef CellsGenerator<FixedG1GenerationalCellCycleModel,2> CellsGeneratorFixedG1GenerationalCellCycleModel_2;
typedef CellsGenerator<FixedG1GenerationalCellCycleModel,3> CellsGeneratorFixedG1GenerationalCellCycleModel_3;
typedef CellwiseSourceEllipticPde<2> CellwiseSourceEllipticPde2;
typedef CellwiseSourceEllipticPde<3> CellwiseSourceEllipticPde3;
typedef AveragedSourceEllipticPde<2> AveragedSourceEllipticPde2;
typedef AveragedSourceEllipticPde<3> AveragedSourceEllipticPde3;
typedef VolumeDependentAveragedSourceEllipticPde<2> VolumeDependentAveragedSourceEllipticPde2;
typedef VolumeDependentAveragedSourceEllipticPde<3> VolumeDependentAveragedSourceEllipticPde3;
typedef UniformSourceEllipticPde<2> UniformSourceEllipticPde2;
typedef UniformSourceEllipticPde<3> UniformSourceEllipticPde3;
typedef CellwiseSourceParabolicPde<2> CellwiseSourceParabolicPde2;
typedef CellwiseSourceParabolicPde<3> CellwiseSourceParabolicPde3;
typedef AbstractCellBasedSimulationModifier<2,2> AbstractCellBasedSimulationModifier2_2;
typedef AbstractCellBasedSimulationModifier<3,3> AbstractCellBasedSimulationModifier3_3;
typedef UniformSourceParabolicPde<2> UniformSourceParabolicPde2;
typedef UniformSourceParabolicPde<3> UniformSourceParabolicPde3;
typedef AveragedSourceParabolicPde<2> AveragedSourceParabolicPde2;
typedef AveragedSourceParabolicPde<3> AveragedSourceParabolicPde3;
typedef CellBasedEllipticPdeSolver<2> CellBasedEllipticPdeSolver2;
typedef CellBasedEllipticPdeSolver<3> CellBasedEllipticPdeSolver3;
typedef CellBasedParabolicPdeSolver<2> CellBasedParabolicPdeSolver2;
typedef CellBasedParabolicPdeSolver<3> CellBasedParabolicPdeSolver3;
typedef AbstractPdeModifier<2> AbstractPdeModifier2;
typedef AbstractPdeModifier<3> AbstractPdeModifier3;
typedef AbstractBoxDomainPdeModifier<2> AbstractBoxDomainPdeModifier2;
typedef AbstractBoxDomainPdeModifier<3> AbstractBoxDomainPdeModifier3;
typedef AbstractGrowingDomainPdeModifier<2> AbstractGrowingDomainPdeModifier2;
typedef AbstractGrowingDomainPdeModifier<3> AbstractGrowingDomainPdeModifier3;
typedef EllipticGrowingDomainPdeModifier<2> EllipticGrowingDomainPdeModifier2;
typedef EllipticGrowingDomainPdeModifier<3> EllipticGrowingDomainPdeModifier3;
typedef ParabolicGrowingDomainPdeModifier<2> ParabolicGrowingDomainPdeModifier2;
typedef ParabolicGrowingDomainPdeModifier<3> ParabolicGrowingDomainPdeModifier3;
typedef EllipticBoxDomainPdeModifier<2> EllipticBoxDomainPdeModifier2;
typedef EllipticBoxDomainPdeModifier<3> EllipticBoxDomainPdeModifier3;
typedef ParabolicBoxDomainPdeModifier<2> ParabolicBoxDomainPdeModifier2;
typedef ParabolicBoxDomainPdeModifier<3> ParabolicBoxDomainPdeModifier3;
typedef VoronoiDataWriter<2,2> VoronoiDataWriter2_2;
typedef VoronoiDataWriter<3,3> VoronoiDataWriter3_3;
typedef CellLabelWriter<2,2> CellLabelWriter2_2;
typedef CellLabelWriter<3,3> CellLabelWriter3_3;
typedef AbstractUpdateRule<2> AbstractUpdateRule2;
typedef AbstractUpdateRule<3> AbstractUpdateRule3;
typedef AbstractCaUpdateRule<2> AbstractCaUpdateRule2;
typedef AbstractCaUpdateRule<3> AbstractCaUpdateRule3;
typedef DiffusionCaUpdateRule<2> DiffusionCaUpdateRule2;
typedef DiffusionCaUpdateRule<3> DiffusionCaUpdateRule3;
typedef AbstractPottsUpdateRule<2> AbstractPottsUpdateRule2;
typedef AbstractPottsUpdateRule<3> AbstractPottsUpdateRule3;
typedef VolumeConstraintPottsUpdateRule<2> VolumeConstraintPottsUpdateRule2;
typedef VolumeConstraintPottsUpdateRule<3> VolumeConstraintPottsUpdateRule3;
typedef SurfaceAreaConstraintPottsUpdateRule<2> SurfaceAreaConstraintPottsUpdateRule2;
typedef SurfaceAreaConstraintPottsUpdateRule<3> SurfaceAreaConstraintPottsUpdateRule3;
typedef AdhesionPottsUpdateRule<2> AdhesionPottsUpdateRule2;
typedef AdhesionPottsUpdateRule<3> AdhesionPottsUpdateRule3;
typedef DifferentialAdhesionPottsUpdateRule<2> DifferentialAdhesionPottsUpdateRule2;
typedef DifferentialAdhesionPottsUpdateRule<3> DifferentialAdhesionPottsUpdateRule3;
typedef AbstractVertexBasedDivisionRule<2> AbstractVertexBasedDivisionRule2;
typedef AbstractVertexBasedDivisionRule<3> AbstractVertexBasedDivisionRule3;
typedef AbstractForce<2,2> AbstractForce2_2;
typedef AbstractForce<3,3> AbstractForce3_3;
typedef AbstractTwoBodyInteractionForce<2,2> AbstractTwoBodyInteractionForce2_2;
typedef AbstractTwoBodyInteractionForce<3,3> AbstractTwoBodyInteractionForce3_3;
typedef RandomDirectionVertexBasedDivisionRule<2> RandomDirectionVertexBasedDivisionRule2;
typedef RandomDirectionVertexBasedDivisionRule<3> RandomDirectionVertexBasedDivisionRule3;
typedef VonMisesVertexBasedDivisionRule<2> VonMisesVertexBasedDivisionRule2;
typedef VonMisesVertexBasedDivisionRule<3> VonMisesVertexBasedDivisionRule3;
typedef FixedVertexBasedDivisionRule<2> FixedVertexBasedDivisionRule2;
typedef FixedVertexBasedDivisionRule<3> FixedVertexBasedDivisionRule3;
typedef AbstractCaBasedDivisionRule<2> AbstractCaBasedDivisionRule2;
typedef AbstractCaBasedDivisionRule<3> AbstractCaBasedDivisionRule3;
typedef ShovingCaBasedDivisionRule<2> ShovingCaBasedDivisionRule2;
typedef ShovingCaBasedDivisionRule<3> ShovingCaBasedDivisionRule3;
typedef ExclusionCaBasedDivisionRule<2> ExclusionCaBasedDivisionRule2;
typedef ExclusionCaBasedDivisionRule<3> ExclusionCaBasedDivisionRule3;
typedef ShortAxisVertexBasedDivisionRule<2> ShortAxisVertexBasedDivisionRule2;
typedef ShortAxisVertexBasedDivisionRule<3> ShortAxisVertexBasedDivisionRule3;
typedef RandomCaSwitchingUpdateRule<2> RandomCaSwitchingUpdateRule2;
typedef RandomCaSwitchingUpdateRule<3> RandomCaSwitchingUpdateRule3;
typedef ChemotaxisPottsUpdateRule<2> ChemotaxisPottsUpdateRule2;
typedef ChemotaxisPottsUpdateRule<3> ChemotaxisPottsUpdateRule3;
typedef AbstractCaSwitchingUpdateRule<2> AbstractCaSwitchingUpdateRule2;
typedef AbstractCaSwitchingUpdateRule<3> AbstractCaSwitchingUpdateRule3;
typedef BuskeAdhesiveForce<2> BuskeAdhesiveForce2;
typedef BuskeAdhesiveForce<3> BuskeAdhesiveForce3;
typedef BuskeCompressionForce<2> BuskeCompressionForce2;
typedef BuskeCompressionForce<3> BuskeCompressionForce3;
typedef BuskeElasticForce<2> BuskeElasticForce2;
typedef BuskeElasticForce<3> BuskeElasticForce3;
typedef ChemotacticForce<2> ChemotacticForce2;
typedef ChemotacticForce<3> ChemotacticForce3;
typedef GeneralisedLinearSpringForce<2,2> GeneralisedLinearSpringForce2_2;
typedef GeneralisedLinearSpringForce<3,3> GeneralisedLinearSpringForce3_3;
typedef DifferentialAdhesionGeneralisedLinearSpringForce<2,2> DifferentialAdhesionGeneralisedLinearSpringForce2_2;
typedef DifferentialAdhesionGeneralisedLinearSpringForce<3,3> DifferentialAdhesionGeneralisedLinearSpringForce3_3;
typedef NagaiHondaForce<2> NagaiHondaForce2;
typedef NagaiHondaForce<3> NagaiHondaForce3;
typedef DiffusionForce<2> DiffusionForce2;
typedef DiffusionForce<3> DiffusionForce3;
typedef RepulsionForce<2> RepulsionForce2;
typedef RepulsionForce<3> RepulsionForce3;
typedef WelikyOsterForce<2> WelikyOsterForce2;
typedef WelikyOsterForce<3> WelikyOsterForce3;
typedef FarhadifarForce<2> FarhadifarForce2;
typedef FarhadifarForce<3> FarhadifarForce3;
typedef PlanarPolarisedFarhadifarForce<2> PlanarPolarisedFarhadifarForce2;
typedef PlanarPolarisedFarhadifarForce<3> PlanarPolarisedFarhadifarForce3;
typedef NagaiHondaDifferentialAdhesionForce<2> NagaiHondaDifferentialAdhesionForce2;
typedef NagaiHondaDifferentialAdhesionForce<3> NagaiHondaDifferentialAdhesionForce3;
typedef AbstractCellKiller<2> AbstractCellKiller2;
typedef AbstractCellKiller<3> AbstractCellKiller3;
typedef PlaneBasedCellKiller<2> PlaneBasedCellKiller2;
typedef PlaneBasedCellKiller<3> PlaneBasedCellKiller3;
typedef ApoptoticCellKiller<2> ApoptoticCellKiller2;
typedef ApoptoticCellKiller<3> ApoptoticCellKiller3;
typedef AbstractCellPopulationBoundaryCondition<2,2> AbstractCellPopulationBoundaryCondition2_2;
typedef AbstractCellPopulationBoundaryCondition<3,3> AbstractCellPopulationBoundaryCondition3_3;
typedef PlaneBoundaryCondition<2,2> PlaneBoundaryCondition2_2;
typedef PlaneBoundaryCondition<3,3> PlaneBoundaryCondition3_3;
typedef AttractingPlaneBoundaryCondition<2,2> AttractingPlaneBoundaryCondition2_2;
typedef AttractingPlaneBoundaryCondition<3,3> AttractingPlaneBoundaryCondition3_3;
typedef TargetedCellKiller<2> TargetedCellKiller2;
typedef TargetedCellKiller<3> TargetedCellKiller3;
typedef RandomCellKiller<2> RandomCellKiller2;
typedef RandomCellKiller<3> RandomCellKiller3;
typedef T2SwapCellKiller<2> T2SwapCellKiller2;
typedef T2SwapCellKiller<3> T2SwapCellKiller3;
typedef IsolatedLabelledCellKiller<2> IsolatedLabelledCellKiller2;
typedef IsolatedLabelledCellKiller<3> IsolatedLabelledCellKiller3;
typedef SphereGeometryBoundaryCondition<2> SphereGeometryBoundaryCondition2;
typedef SphereGeometryBoundaryCondition<3> SphereGeometryBoundaryCondition3;
typedef AbstractCellPopulation<2,2> AbstractCellPopulation2_2;
typedef AbstractCellPopulation<3,3> AbstractCellPopulation3_3;
typedef AbstractOffLatticeCellPopulation<2,2> AbstractOffLatticeCellPopulation2_2;
typedef AbstractOffLatticeCellPopulation<3,3> AbstractOffLatticeCellPopulation3_3;
typedef AbstractCentreBasedCellPopulation<2,2> AbstractCentreBasedCellPopulation2_2;
typedef AbstractCentreBasedCellPopulation<3,3> AbstractCentreBasedCellPopulation3_3;
typedef SlidingBoundaryCondition<2> SlidingBoundaryCondition2;
typedef SlidingBoundaryCondition<3> SlidingBoundaryCondition3;
typedef AbstractOnLatticeCellPopulation<2> AbstractOnLatticeCellPopulation2;
typedef AbstractOnLatticeCellPopulation<3> AbstractOnLatticeCellPopulation3;
typedef NodeBasedCellPopulationWithParticles<2> NodeBasedCellPopulationWithParticles2;
typedef NodeBasedCellPopulationWithParticles<3> NodeBasedCellPopulationWithParticles3;
typedef CaBasedCellPopulation<2> CaBasedCellPopulation2;
typedef CaBasedCellPopulation<3> CaBasedCellPopulation3;
typedef MeshBasedCellPopulation<2,2> MeshBasedCellPopulation2_2;
typedef MeshBasedCellPopulation<3,3> MeshBasedCellPopulation3_3;
typedef MeshBasedCellPopulationWithGhostNodes<2> MeshBasedCellPopulationWithGhostNodes2;
typedef MeshBasedCellPopulationWithGhostNodes<3> MeshBasedCellPopulationWithGhostNodes3;
typedef VertexBasedCellPopulation<2> VertexBasedCellPopulation2;
typedef VertexBasedCellPopulation<3> VertexBasedCellPopulation3;
typedef PottsBasedCellPopulation<2> PottsBasedCellPopulation2;
typedef PottsBasedCellPopulation<3> PottsBasedCellPopulation3;
typedef NodeBasedCellPopulation<2> NodeBasedCellPopulation2;
typedef NodeBasedCellPopulation<3> NodeBasedCellPopulation3;
typedef NodeBasedCellPopulationWithBuskeUpdate<2> NodeBasedCellPopulationWithBuskeUpdate2;
typedef NodeBasedCellPopulationWithBuskeUpdate<3> NodeBasedCellPopulationWithBuskeUpdate3;
typedef AbstractTargetAreaModifier<2> AbstractTargetAreaModifier2;
typedef AbstractTargetAreaModifier<3> AbstractTargetAreaModifier3;
typedef ConstantTargetAreaModifier<2> ConstantTargetAreaModifier2;
typedef ConstantTargetAreaModifier<3> ConstantTargetAreaModifier3;
typedef SimpleTargetAreaModifier<2> SimpleTargetAreaModifier2;
typedef SimpleTargetAreaModifier<3> SimpleTargetAreaModifier3;
typedef DivisionBiasTrackingModifier<2> DivisionBiasTrackingModifier2;
typedef DivisionBiasTrackingModifier<3> DivisionBiasTrackingModifier3;
typedef ExtrinsicPullModifier<2> ExtrinsicPullModifier2;
typedef ExtrinsicPullModifier<3> ExtrinsicPullModifier3;
typedef DeltaNotchEdgeInteriorTrackingModifier<2> DeltaNotchEdgeInteriorTrackingModifier2;
typedef DeltaNotchEdgeInteriorTrackingModifier<3> DeltaNotchEdgeInteriorTrackingModifier3;
typedef DeltaNotchTrackingModifier<2> DeltaNotchTrackingModifier2;
typedef DeltaNotchTrackingModifier<3> DeltaNotchTrackingModifier3;
typedef TargetAreaLinearGrowthModifier<2> TargetAreaLinearGrowthModifier2;
typedef TargetAreaLinearGrowthModifier<3> TargetAreaLinearGrowthModifier3;
typedef VolumeTrackingModifier<2> VolumeTrackingModifier2;
typedef VolumeTrackingModifier<3> VolumeTrackingModifier3;
typedef VtkSceneModifier<2> VtkSceneModifier2;
typedef VtkSceneModifier<3> VtkSceneModifier3;
typedef AbstractCellBasedSimulation<2,2> AbstractCellBasedSimulation2_2;
typedef AbstractCellBasedSimulation<3,3> AbstractCellBasedSimulation3_3;
typedef OnLatticeSimulation<2> OnLatticeSimulation2;
typedef OnLatticeSimulation<3> OnLatticeSimulation3;
typedef OffLatticeSimulation<2,2> OffLatticeSimulation2_2;
typedef OffLatticeSimulation<3,3> OffLatticeSimulation3_3;
typedef PythonSimulationModifier<2> PythonSimulationModifier2;
typedef PythonSimulationModifier<3> PythonSimulationModifier3;
typedef VtkScene<2> VtkScene2;
typedef VtkScene<3> VtkScene3;
typedef AbstractPyChasteActorGenerator<2> AbstractPyChasteActorGenerator2;
typedef AbstractPyChasteActorGenerator<3> AbstractPyChasteActorGenerator3;
typedef CellPopulationPyChasteActorGenerator<2> CellPopulationPyChasteActorGenerator2;
typedef CellPopulationPyChasteActorGenerator<3> CellPopulationPyChasteActorGenerator3;
typedef AbstractChasteRegion<2> AbstractChasteRegion2;
typedef AbstractChasteRegion<3> AbstractChasteRegion3;
typedef ChastePoint<2> ChastePoint2;
typedef ChastePoint<3> ChastePoint3;
typedef ChasteCuboid<2> ChasteCuboid2;
typedef ChasteCuboid<3> ChasteCuboid3;
typedef ChasteEllipsoid<2> ChasteEllipsoid2;
typedef ChasteEllipsoid<3> ChasteEllipsoid3;
}

#endif // chaste_project_PyChaste_HEADERS_HPP_
