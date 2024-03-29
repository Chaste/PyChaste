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

#include "MeshBasedCellPopulationWithGhostNodes3.cppwg.hpp"

namespace py = pybind11;
typedef MeshBasedCellPopulationWithGhostNodes<3 > MeshBasedCellPopulationWithGhostNodes3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<3, 3> * _TetrahedralMesh_lt_3_3_gt_Ptr;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef ::CellPtr _CellPtr;

class MeshBasedCellPopulationWithGhostNodes3_Overloads : public MeshBasedCellPopulationWithGhostNodes3{
    public:
    using MeshBasedCellPopulationWithGhostNodes3::MeshBasedCellPopulationWithGhostNodes;
    ::TetrahedralMesh<3, 3> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_3_3_gt_Ptr,
            MeshBasedCellPopulationWithGhostNodes3,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    ::std::set<unsigned int> GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            MeshBasedCellPopulationWithGhostNodes3,
            GetNeighbouringLocationIndices,
            pCell);
    }
    bool IsGhostNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            bool,
            MeshBasedCellPopulationWithGhostNodes3,
            IsGhostNode,
            index);
    }
    void UpdateGhostNodesAfterReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes3,
            UpdateGhostNodesAfterReMesh,
            rMap);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            MeshBasedCellPopulationWithGhostNodes3,
            AddCell,
            pNewCell, 
pParentCell);
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes3,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void WriteVtkResultsToFile(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes3,
            WriteVtkResultsToFile,
            rDirectory);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes3,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void AcceptCellWritersAcrossPopulation() override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulationWithGhostNodes3,
            AcceptCellWritersAcrossPopulation,
            );
    }

};
void register_MeshBasedCellPopulationWithGhostNodes3_class(py::module &m){
py::class_<MeshBasedCellPopulationWithGhostNodes3 , MeshBasedCellPopulationWithGhostNodes3_Overloads , boost::shared_ptr<MeshBasedCellPopulationWithGhostNodes3 > , MeshBasedCellPopulation<3, 3>  >(m, "MeshBasedCellPopulationWithGhostNodes3")
        .def(py::init<::MutableMesh<3, 3> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, bool, double, double, double >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false, py::arg("ghostCellSpringStiffness") = 15., py::arg("ghostGhostSpringStiffness") = 15., py::arg("ghostSpringRestLength") = 1.)
        .def(py::init<::MutableMesh<3, 3> &, double, double, double >(), py::arg("rMesh"), py::arg("ghostCellSpringStiffness") = 15., py::arg("ghostGhostSpringStiffness") = 15., py::arg("ghostSpringRestLength") = 1.)
        .def(
            "GetTetrahedralMeshForPdeModifier", 
            (::TetrahedralMesh<3, 3> *(MeshBasedCellPopulationWithGhostNodes3::*)()) &MeshBasedCellPopulationWithGhostNodes3::GetTetrahedralMeshForPdeModifier, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int>(MeshBasedCellPopulationWithGhostNodes3::*)(::CellPtr)) &MeshBasedCellPopulationWithGhostNodes3::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell") )
        .def(
            "SetGhostNodes", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)(::std::set<unsigned int> const &)) &MeshBasedCellPopulationWithGhostNodes3::SetGhostNodes, 
            " " , py::arg("rGhostNodeIndices") )
        .def(
            "ApplyGhostForces", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)()) &MeshBasedCellPopulationWithGhostNodes3::ApplyGhostForces, 
            " "  )
        .def(
            "rGetGhostNodes", 
            (::std::vector<bool> &(MeshBasedCellPopulationWithGhostNodes3::*)()) &MeshBasedCellPopulationWithGhostNodes3::rGetGhostNodes, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "IsGhostNode", 
            (bool(MeshBasedCellPopulationWithGhostNodes3::*)(unsigned int)) &MeshBasedCellPopulationWithGhostNodes3::IsGhostNode, 
            " " , py::arg("index") )
        .def(
            "GetGhostNodeIndices", 
            (::std::set<unsigned int>(MeshBasedCellPopulationWithGhostNodes3::*)()) &MeshBasedCellPopulationWithGhostNodes3::GetGhostNodeIndices, 
            " "  )
        .def(
            "RemoveGhostNode", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)(unsigned int)) &MeshBasedCellPopulationWithGhostNodes3::RemoveGhostNode, 
            " " , py::arg("nodeIndex") )
        .def(
            "UpdateGhostNodesAfterReMesh", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)(::NodeMap &)) &MeshBasedCellPopulationWithGhostNodes3::UpdateGhostNodesAfterReMesh, 
            " " , py::arg("rMap") )
        .def(
            "CalculateForceBetweenGhostNodes", 
            (::boost::numeric::ublas::c_vector<double, 3>(MeshBasedCellPopulationWithGhostNodes3::*)(unsigned int const &, unsigned int const &)) &MeshBasedCellPopulationWithGhostNodes3::CalculateForceBetweenGhostNodes, 
            " " , py::arg("rNodeAGlobalIndex"), py::arg("rNodeBGlobalIndex") )
        .def(
            "AddCell", 
            (::CellPtr(MeshBasedCellPopulationWithGhostNodes3::*)(::CellPtr, ::CellPtr)) &MeshBasedCellPopulationWithGhostNodes3::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") )
        .def(
            "OpenWritersFiles", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)(::OutputFileHandler &)) &MeshBasedCellPopulationWithGhostNodes3::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "WriteVtkResultsToFile", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)(::std::string const &)) &MeshBasedCellPopulationWithGhostNodes3::WriteVtkResultsToFile, 
            " " , py::arg("rDirectory") )
        .def(
            "OutputCellPopulationParameters", 
            (void(MeshBasedCellPopulationWithGhostNodes3::*)(::out_stream &)) &MeshBasedCellPopulationWithGhostNodes3::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def("AddCellWriterCellAgesWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &MeshBasedCellPopulationWithGhostNodes3::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
