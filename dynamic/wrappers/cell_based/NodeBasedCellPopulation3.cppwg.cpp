#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "AbstractCellBasedSimulation.hpp"
#include "AbstractVertexBasedDivisionRule.hpp"
#include "BoundaryNodeWriter.hpp"
#include "CellAgesWriter.hpp"
#include "CellAncestorWriter.hpp"
#include "CellAppliedForceWriter.hpp"
#include "CellCycleModelProteinConcentrationsWriter.hpp"
#include "CellDataItemWriter.hpp"
#include "CellDeltaNotchWriter.hpp"
#include "CellDivisionLocationsWriter.hpp"
#include "CellIdWriter.hpp"
#include "CellLabelWriter.hpp"
#include "CellLocationIndexWriter.hpp"
#include "CellMutationStatesCountWriter.hpp"
#include "CellMutationStatesWriter.hpp"
#include "CellPopulationAdjacencyMatrixWriter.hpp"
#include "CellPopulationAreaWriter.hpp"
#include "CellPopulationElementWriter.hpp"
#include "CellProliferativePhasesCountWriter.hpp"
#include "CellProliferativePhasesWriter.hpp"
#include "CellProliferativeTypesCountWriter.hpp"
#include "CellProliferativeTypesWriter.hpp"
#include "CellRadiusWriter.hpp"
#include "CellRemovalLocationsWriter.hpp"
#include "CellRosetteRankWriter.hpp"
#include "CellVolumesWriter.hpp"
#include "HeterotypicBoundaryLengthWriter.hpp"
#include "LegacyCellProliferativeTypesWriter.hpp"
#include "NodeLocationWriter.hpp"
#include "NodeVelocityWriter.hpp"
#include "PottsMeshWriter.hpp"
#include "RadialCellDataDistributionWriter.hpp"
#include "VertexIntersectionSwapLocationsWriter.hpp"
#include "VertexT1SwapLocationsWriter.hpp"
#include "VertexT2SwapLocationsWriter.hpp"
#include "VertexT3SwapLocationsWriter.hpp"
#include "VoronoiDataWriter.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "NodeBasedCellPopulation.hpp"

#include "NodeBasedCellPopulation3.cppwg.hpp"

namespace py = pybind11;
typedef NodeBasedCellPopulation<3 > NodeBasedCellPopulation3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<3, 3> * _TetrahedralMesh_lt_3_3_gt_Ptr;
typedef unsigned int unsignedint;
typedef ::CellPtr _CellPtr;
typedef ::Node<3> * _Node_lt_3_gt_Ptr;
typedef unsigned int unsignedint;
typedef ::std::vector<std::pair<Node<3> *, Node<3> *>> & _std_vector_lt_std_pair_lt_Node_lt_3_gt_Ptr_Node_lt_3_gt_Ptr_gt__gt_Ref;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef ::CellPtr _CellPtr;
typedef unsigned int unsignedint;

class NodeBasedCellPopulation3_Overloads : public NodeBasedCellPopulation3{
    public:
    using NodeBasedCellPopulation3::NodeBasedCellPopulation;
    void SetNode(unsigned int nodeIndex, ::ChastePoint<3> & rNewLocation) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            SetNode,
            nodeIndex, 
rNewLocation);
    }
    ::TetrahedralMesh<3, 3> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_3_3_gt_Ptr,
            NodeBasedCellPopulation3,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            NodeBasedCellPopulation3,
            GetNumNodes,
            );
    }
    ::CellPtr GetCellUsingLocationIndex(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            NodeBasedCellPopulation3,
            GetCellUsingLocationIndex,
            index);
    }
    ::Node<3> * GetNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _Node_lt_3_gt_Ptr,
            NodeBasedCellPopulation3,
            GetNode,
            index);
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            NodeBasedCellPopulation3,
            RemoveDeadCells,
            );
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            Update,
            hasHadBirthsOrDeaths);
    }
    ::std::vector<std::pair<Node<3> *, Node<3> *>> & rGetNodePairs() override {
        PYBIND11_OVERRIDE(
            _std_vector_lt_std_pair_lt_Node_lt_3_gt_Ptr_Node_lt_3_gt_Ptr_gt__gt_Ref,
            NodeBasedCellPopulation3,
            rGetNodePairs,
            );
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3>> pPopulationWriter) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3>> pPopulationCountWriter) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptPopulationEventWriter(::boost::shared_ptr<AbstractCellPopulationEventWriter<3, 3>> pPopulationEventWriter) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            AcceptPopulationEventWriter,
            pPopulationEventWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<3, 3>> pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERRIDE(
            double,
            NodeBasedCellPopulation3,
            GetWidth,
            rDimension);
    }
    ::std::set<unsigned int> GetNeighbouringNodeIndices(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            NodeBasedCellPopulation3,
            GetNeighbouringNodeIndices,
            index);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            NodeBasedCellPopulation3,
            AddCell,
            pNewCell, 
pParentCell);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            double,
            NodeBasedCellPopulation3,
            GetVolumeOfCell,
            pCell);
    }
    void UpdateCellProcessLocation() override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            UpdateCellProcessLocation,
            );
    }
    void UpdateParticlesAfterReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            UpdateParticlesAfterReMesh,
            rMap);
    }
    void Validate() override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulation3,
            Validate,
            );
    }

};
void register_NodeBasedCellPopulation3_class(py::module &m){
    py::class_<NodeBasedCellPopulation3,
               NodeBasedCellPopulation3_Overloads,
               boost::shared_ptr<NodeBasedCellPopulation3>,
               AbstractCentreBasedCellPopulation<3, 3>>(m, "NodeBasedCellPopulation3")
        .def(py::init<::NodesOnlyMesh<3> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, bool, bool>(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false, py::arg("validate") = true)
        .def(py::init<::NodesOnlyMesh<3> &>(), py::arg("rMesh"))
        .def(
            "SetNode",
            (void(NodeBasedCellPopulation3::*)(unsigned int, ::ChastePoint<3> &)) & NodeBasedCellPopulation3::SetNode,
            " ", py::arg("nodeIndex"), py::arg("rNewLocation"))
        .def(
            "GetNumNodes",
            (unsigned int (NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::GetNumNodes,
            " ")
        .def(
            "GetCellUsingLocationIndex",
            (::CellPtr(NodeBasedCellPopulation3::*)(unsigned int)) & NodeBasedCellPopulation3::GetCellUsingLocationIndex,
            " ", py::arg("index"))
        .def(
            "GetNode",
            (::Node<3> * (NodeBasedCellPopulation3::*)(unsigned int)) & NodeBasedCellPopulation3::GetNode,
            " ", py::arg("index"), py::return_value_policy::reference)
        .def(
            "RemoveDeadCells",
            (unsigned int (NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::RemoveDeadCells,
            " ")
        .def(
            "Clear",
            (void(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::Clear,
            " ")
        .def(
            "Update",
            (void(NodeBasedCellPopulation3::*)(bool)) & NodeBasedCellPopulation3::Update,
            " ", py::arg("hasHadBirthsOrDeaths") = true)
        .def(
            "OutputCellPopulationParameters",
            (void(NodeBasedCellPopulation3::*)(::out_stream &)) & NodeBasedCellPopulation3::OutputCellPopulationParameters,
            " ", py::arg("rParamsFile"))
        .def(
            "AcceptPopulationWriter",
            (void(NodeBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3>>)) & NodeBasedCellPopulation3::AcceptPopulationWriter,
            " ", py::arg("pPopulationWriter"))
        .def(
            "AcceptPopulationCountWriter",
            (void(NodeBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3>>)) & NodeBasedCellPopulation3::AcceptPopulationCountWriter,
            " ", py::arg("pPopulationCountWriter"))
        .def(
            "AcceptPopulationEventWriter",
            (void(NodeBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationEventWriter<3, 3>>)) & NodeBasedCellPopulation3::AcceptPopulationEventWriter,
            " ", py::arg("pPopulationEventWriter"))
        .def(
            "AcceptCellWriter",
            (void(NodeBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellWriter<3, 3>>, ::CellPtr)) & NodeBasedCellPopulation3::AcceptCellWriter,
            " ", py::arg("pCellWriter"), py::arg("pCell"))
        .def(
            "GetMechanicsCutOffLength",
            (double(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::GetMechanicsCutOffLength,
            " ")
        .def(
            "GetUseVariableRadii",
            (bool(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::GetUseVariableRadii,
            " ")
        .def(
            "SetUseVariableRadii",
            (void(NodeBasedCellPopulation3::*)(bool)) & NodeBasedCellPopulation3::SetUseVariableRadii,
            " ", py::arg("useVariableRadii") = true)
        .def(
            "SetLoadBalanceMesh",
            (void(NodeBasedCellPopulation3::*)(bool)) & NodeBasedCellPopulation3::SetLoadBalanceMesh,
            " ", py::arg("loadBalanceMesh"))
        .def(
            "SetLoadBalanceFrequency",
            (void(NodeBasedCellPopulation3::*)(unsigned int)) & NodeBasedCellPopulation3::SetLoadBalanceFrequency,
            " ", py::arg("loadBalanceFrequency"))
        .def(
            "GetWidth",
            (double(NodeBasedCellPopulation3::*)(unsigned int const &)) & NodeBasedCellPopulation3::GetWidth,
            " ", py::arg("rDimension"))
        .def(
            "GetSizeOfCellPopulation",
            (::boost::numeric::ublas::c_vector<double, 3>(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::GetSizeOfCellPopulation,
            " ")
        .def(
            "GetNodesWithinNeighbourhoodRadius",
            (::std::set<unsigned int>(NodeBasedCellPopulation3::*)(unsigned int, double)) & NodeBasedCellPopulation3::GetNodesWithinNeighbourhoodRadius,
            " ", py::arg("index"), py::arg("neighbourhoodRadius"))
        .def(
            "GetNeighbouringNodeIndices",
            (::std::set<unsigned int>(NodeBasedCellPopulation3::*)(unsigned int)) & NodeBasedCellPopulation3::GetNeighbouringNodeIndices,
            " ", py::arg("index"))
        .def(
            "AddCell",
            (::CellPtr(NodeBasedCellPopulation3::*)(::CellPtr, ::CellPtr)) & NodeBasedCellPopulation3::AddCell,
            " ", py::arg("pNewCell"), py::arg("pParentCell"))
        .def(
            "GetVolumeOfCell",
            (double(NodeBasedCellPopulation3::*)(::CellPtr)) & NodeBasedCellPopulation3::GetVolumeOfCell,
            " ", py::arg("pCell"))
        .def(
            "SendCellsToNeighbourProcesses",
            (void(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::SendCellsToNeighbourProcesses,
            " ")
        .def(
            "NonBlockingSendCellsToNeighbourProcesses",
            (void(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::NonBlockingSendCellsToNeighbourProcesses,
            " ")
        .def(
            "GetReceivedCells",
            (void(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::GetReceivedCells,
            " ")
        .def(
            "GetCellNodePair",
            (::std::pair<boost::shared_ptr<Cell>, Node<3> *>(NodeBasedCellPopulation3::*)(unsigned int)) & NodeBasedCellPopulation3::GetCellNodePair,
            " ", py::arg("nodeIndex"))
        .def(
            "AddReceivedCells",
            (void(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::AddReceivedCells,
            " ")
        .def(
            "UpdateCellProcessLocation",
            (void(NodeBasedCellPopulation3::*)()) & NodeBasedCellPopulation3::UpdateCellProcessLocation,
            " ")
        .def("AddCellWriterCellAgesWriter", &NodeBasedCellPopulation3::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &NodeBasedCellPopulation3::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &NodeBasedCellPopulation3::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &NodeBasedCellPopulation3::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &NodeBasedCellPopulation3::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &NodeBasedCellPopulation3::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &NodeBasedCellPopulation3::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &NodeBasedCellPopulation3::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &NodeBasedCellPopulation3::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &NodeBasedCellPopulation3::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &NodeBasedCellPopulation3::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &NodeBasedCellPopulation3::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &NodeBasedCellPopulation3::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &NodeBasedCellPopulation3::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &NodeBasedCellPopulation3::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &NodeBasedCellPopulation3::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &NodeBasedCellPopulation3::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &NodeBasedCellPopulation3::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &NodeBasedCellPopulation3::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &NodeBasedCellPopulation3::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &NodeBasedCellPopulation3::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &NodeBasedCellPopulation3::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &NodeBasedCellPopulation3::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &NodeBasedCellPopulation3::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &NodeBasedCellPopulation3::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &NodeBasedCellPopulation3::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &NodeBasedCellPopulation3::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &NodeBasedCellPopulation3::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &NodeBasedCellPopulation3::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &NodeBasedCellPopulation3::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &NodeBasedCellPopulation3::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &NodeBasedCellPopulation3::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &NodeBasedCellPopulation3::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &NodeBasedCellPopulation3::AddPopulationWriter<VoronoiDataWriter>);
}
