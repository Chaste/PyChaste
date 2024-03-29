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
#include "MeshBasedCellPopulationWithGhostNodes.hpp"

#include "MeshBasedCellPopulationWithGhostNodes2.cppwg.hpp"

namespace py = pybind11;
typedef MeshBasedCellPopulationWithGhostNodes<2 > MeshBasedCellPopulationWithGhostNodes2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<2, 2> * _TetrahedralMesh_lt_2_2_gt_Ptr;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef ::CellPtr _CellPtr;

class MeshBasedCellPopulationWithGhostNodes2_Overloads : public MeshBasedCellPopulationWithGhostNodes2{
    public:
    using MeshBasedCellPopulationWithGhostNodes2::MeshBasedCellPopulationWithGhostNodes;
    ::TetrahedralMesh<2, 2> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_2_2_gt_Ptr,
            MeshBasedCellPopulationWithGhostNodes2,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    ::std::set<unsigned int> GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            MeshBasedCellPopulationWithGhostNodes2,
            GetNeighbouringLocationIndices,
            pCell);
    }
    bool IsGhostNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            bool,
            MeshBasedCellPopulationWithGhostNodes2,
            IsGhostNode,
            index);
    }
    void UpdateGhostNodesAfterReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes2,
            UpdateGhostNodesAfterReMesh,
            rMap);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            MeshBasedCellPopulationWithGhostNodes2,
            AddCell,
            pNewCell, 
pParentCell);
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes2,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void WriteVtkResultsToFile(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes2,
            WriteVtkResultsToFile,
            rDirectory);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes2,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void AcceptCellWritersAcrossPopulation() override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes2,
            AcceptCellWritersAcrossPopulation,
            );
    }

};
void register_MeshBasedCellPopulationWithGhostNodes2_class(py::module &m){
py::class_<MeshBasedCellPopulationWithGhostNodes2 , MeshBasedCellPopulationWithGhostNodes2_Overloads , boost::shared_ptr<MeshBasedCellPopulationWithGhostNodes2 > , MeshBasedCellPopulation<2, 2>  >(m, "MeshBasedCellPopulationWithGhostNodes2")
        .def(py::init<::MutableMesh<2, 2> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, bool, double, double, double >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false, py::arg("ghostCellSpringStiffness") = 15., py::arg("ghostGhostSpringStiffness") = 15., py::arg("ghostSpringRestLength") = 1.)
        .def(py::init<::MutableMesh<2, 2> &, double, double, double >(), py::arg("rMesh"), py::arg("ghostCellSpringStiffness") = 15., py::arg("ghostGhostSpringStiffness") = 15., py::arg("ghostSpringRestLength") = 1.)
        .def(
            "GetTetrahedralMeshForPdeModifier", 
            (::TetrahedralMesh<2, 2> *(MeshBasedCellPopulationWithGhostNodes2::*)()) &MeshBasedCellPopulationWithGhostNodes2::GetTetrahedralMeshForPdeModifier, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int>(MeshBasedCellPopulationWithGhostNodes2::*)(::CellPtr)) &MeshBasedCellPopulationWithGhostNodes2::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell") )
        .def(
            "SetGhostNodes", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)(::std::set<unsigned int> const &)) &MeshBasedCellPopulationWithGhostNodes2::SetGhostNodes, 
            " " , py::arg("rGhostNodeIndices") )
        .def(
            "ApplyGhostForces", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)()) &MeshBasedCellPopulationWithGhostNodes2::ApplyGhostForces, 
            " "  )
        .def(
            "rGetGhostNodes", 
            (::std::vector<bool> &(MeshBasedCellPopulationWithGhostNodes2::*)()) &MeshBasedCellPopulationWithGhostNodes2::rGetGhostNodes, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "IsGhostNode", 
            (bool(MeshBasedCellPopulationWithGhostNodes2::*)(unsigned int)) &MeshBasedCellPopulationWithGhostNodes2::IsGhostNode, 
            " " , py::arg("index") )
        .def(
            "GetGhostNodeIndices", 
            (::std::set<unsigned int>(MeshBasedCellPopulationWithGhostNodes2::*)()) &MeshBasedCellPopulationWithGhostNodes2::GetGhostNodeIndices, 
            " "  )
        .def(
            "RemoveGhostNode", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)(unsigned int)) &MeshBasedCellPopulationWithGhostNodes2::RemoveGhostNode, 
            " " , py::arg("nodeIndex") )
        .def(
            "UpdateGhostNodesAfterReMesh", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)(::NodeMap &)) &MeshBasedCellPopulationWithGhostNodes2::UpdateGhostNodesAfterReMesh, 
            " " , py::arg("rMap") )
        .def(
            "CalculateForceBetweenGhostNodes", 
            (::boost::numeric::ublas::c_vector<double, 2>(MeshBasedCellPopulationWithGhostNodes2::*)(unsigned int const &, unsigned int const &)) &MeshBasedCellPopulationWithGhostNodes2::CalculateForceBetweenGhostNodes, 
            " " , py::arg("rNodeAGlobalIndex"), py::arg("rNodeBGlobalIndex") )
        .def(
            "AddCell", 
            (::CellPtr(MeshBasedCellPopulationWithGhostNodes2::*)(::CellPtr, ::CellPtr)) &MeshBasedCellPopulationWithGhostNodes2::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") )
        .def(
            "OpenWritersFiles", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)(::OutputFileHandler &)) &MeshBasedCellPopulationWithGhostNodes2::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "WriteVtkResultsToFile", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)(::std::string const &)) &MeshBasedCellPopulationWithGhostNodes2::WriteVtkResultsToFile, 
            " " , py::arg("rDirectory") )
        .def(
            "OutputCellPopulationParameters", 
            (void(MeshBasedCellPopulationWithGhostNodes2::*)(::out_stream &)) &MeshBasedCellPopulationWithGhostNodes2::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def("AddCellWriterCellAgesWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &MeshBasedCellPopulationWithGhostNodes2::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
