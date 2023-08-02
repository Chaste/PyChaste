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
#include "MeshBasedCellPopulation.hpp"

#include "MeshBasedCellPopulation3_3.cppwg.hpp"

namespace py = pybind11;
typedef MeshBasedCellPopulation<3,3 > MeshBasedCellPopulation3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<3, 3> * _TetrahedralMesh_lt_3_3_gt_Ptr;
typedef unsigned int unsignedint;
typedef unsigned int unsignedint;
typedef ::CellPtr _CellPtr;
typedef ::Node<3> * _Node_lt_3_gt_Ptr;
typedef unsigned int unsignedint;
typedef ::std::vector<std::pair<Node<3> *, Node<3> *>, std::allocator<std::pair<Node<3> *, Node<3> *> > > & _std_vector_lt_std_pair_lt_Node_lt_3_gt_Ptr_Node_lt_3_gt_Ptr_gt__std_allocator_lt_std_pair_lt_Node_lt_3_gt_Ptr_Node_lt_3_gt_Ptr_gt__gt__gt_Ref;
typedef ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > _std_set_lt_unsignedint_std_less_lt_unsignedint_gt__std_allocator_lt_unsignedint_gt__gt_;

class MeshBasedCellPopulation3_3_Overloads : public MeshBasedCellPopulation3_3{
    public:
    using MeshBasedCellPopulation3_3::MeshBasedCellPopulation;
    ::TetrahedralMesh<3, 3> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_3_3_gt_Ptr,
            MeshBasedCellPopulation3_3,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    unsigned int AddNode(::Node<3> * pNewNode) override {
        PYBIND11_OVERRIDE(
            unsignedint,
            MeshBasedCellPopulation3_3,
            AddNode,
            pNewNode);
    }
    void SetNode(unsigned int nodeIndex, ::ChastePoint<3> & rNewLocation) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            SetNode,
            nodeIndex, 
rNewLocation);
    }
    double GetDampingConstant(unsigned int nodeIndex) override {
        PYBIND11_OVERRIDE(
            double,
            MeshBasedCellPopulation3_3,
            GetDampingConstant,
            nodeIndex);
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            MeshBasedCellPopulation3_3,
            RemoveDeadCells,
            );
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            MeshBasedCellPopulation3_3,
            AddCell,
            pNewCell, 
pParentCell);
    }
    void WriteResultsToFiles(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            WriteResultsToFiles,
            rDirectory);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3> > pPopulationWriter) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3> > pPopulationCountWriter) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<3, 3> > pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            Update,
            hasHadBirthsOrDeaths);
    }
    ::Node<3> * GetNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _Node_lt_3_gt_Ptr,
            MeshBasedCellPopulation3_3,
            GetNode,
            index);
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            MeshBasedCellPopulation3_3,
            GetNumNodes,
            );
    }
    void WriteVtkResultsToFile(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            WriteVtkResultsToFile,
            rDirectory);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            double,
            MeshBasedCellPopulation3_3,
            GetVolumeOfCell,
            pCell);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERRIDE(
            double,
            MeshBasedCellPopulation3_3,
            GetWidth,
            rDimension);
    }
    void WriteDataToVisualizerSetupFile(::out_stream & pVizSetupFile) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            WriteDataToVisualizerSetupFile,
            pVizSetupFile);
    }
    ::std::vector<std::pair<Node<3> *, Node<3> *>, std::allocator<std::pair<Node<3> *, Node<3> *> > > & rGetNodePairs() override {
        PYBIND11_OVERRIDE(
            _std_vector_lt_std_pair_lt_Node_lt_3_gt_Ptr_Node_lt_3_gt_Ptr_gt__std_allocator_lt_std_pair_lt_Node_lt_3_gt_Ptr_Node_lt_3_gt_Ptr_gt__gt__gt_Ref,
            MeshBasedCellPopulation3_3,
            rGetNodePairs,
            );
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > GetNeighbouringNodeIndices(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_std_less_lt_unsignedint_gt__std_allocator_lt_unsignedint_gt__gt_,
            MeshBasedCellPopulation3_3,
            GetNeighbouringNodeIndices,
            index);
    }
    void UpdateGhostNodesAfterReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            UpdateGhostNodesAfterReMesh,
            rMap);
    }
    void Validate() override {
        PYBIND11_OVERRIDE(
            void,
            MeshBasedCellPopulation3_3,
            Validate,
            );
    }

};
void register_MeshBasedCellPopulation3_3_class(py::module &m){
py::class_<MeshBasedCellPopulation3_3 , MeshBasedCellPopulation3_3_Overloads , boost::shared_ptr<MeshBasedCellPopulation3_3 >  , AbstractCentreBasedCellPopulation<3, 3>  >(m, "MeshBasedCellPopulation3_3")
        .def(py::init<::MutableMesh<3, 3> &, ::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, ::std::vector<unsigned int, std::allocator<unsigned int> > const, bool, bool >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false, py::arg("validate") = true)
        .def(py::init<::MutableMesh<3, 3> & >(), py::arg("rMesh"))
        .def(
            "UseAreaBasedDampingConstant", 
            (bool(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::UseAreaBasedDampingConstant, 
            " "  )
        .def(
            "AddNode", 
            (unsigned int(MeshBasedCellPopulation3_3::*)(::Node<3> *)) &MeshBasedCellPopulation3_3::AddNode, 
            " " , py::arg("pNewNode") )
        .def(
            "SetNode", 
            (void(MeshBasedCellPopulation3_3::*)(unsigned int, ::ChastePoint<3> &)) &MeshBasedCellPopulation3_3::SetNode, 
            " " , py::arg("nodeIndex"), py::arg("rNewLocation") )
        .def(
            "GetDampingConstant", 
            (double(MeshBasedCellPopulation3_3::*)(unsigned int)) &MeshBasedCellPopulation3_3::GetDampingConstant, 
            " " , py::arg("nodeIndex") )
        .def(
            "SetAreaBasedDampingConstant", 
            (void(MeshBasedCellPopulation3_3::*)(bool)) &MeshBasedCellPopulation3_3::SetAreaBasedDampingConstant, 
            " " , py::arg("useAreaBasedDampingConstant") )
        .def(
            "OpenWritersFiles", 
            (void(MeshBasedCellPopulation3_3::*)(::OutputFileHandler &)) &MeshBasedCellPopulation3_3::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "RemoveDeadCells", 
            (unsigned int(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::RemoveDeadCells, 
            " "  )
        .def(
            "AddCell", 
            (::CellPtr(MeshBasedCellPopulation3_3::*)(::CellPtr, ::CellPtr)) &MeshBasedCellPopulation3_3::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") )
        .def(
            "WriteResultsToFiles", 
            (void(MeshBasedCellPopulation3_3::*)(::std::string const &)) &MeshBasedCellPopulation3_3::WriteResultsToFiles, 
            " " , py::arg("rDirectory") )
        .def(
            "AcceptPopulationWriter", 
            (void(MeshBasedCellPopulation3_3::*)(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3> >)) &MeshBasedCellPopulation3_3::AcceptPopulationWriter, 
            " " , py::arg("pPopulationWriter") )
        .def(
            "AcceptPopulationCountWriter", 
            (void(MeshBasedCellPopulation3_3::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3> >)) &MeshBasedCellPopulation3_3::AcceptPopulationCountWriter, 
            " " , py::arg("pPopulationCountWriter") )
        .def(
            "AcceptCellWriter", 
            (void(MeshBasedCellPopulation3_3::*)(::boost::shared_ptr<AbstractCellWriter<3, 3> >, ::CellPtr)) &MeshBasedCellPopulation3_3::AcceptCellWriter, 
            " " , py::arg("pCellWriter"), py::arg("pCell") )
        .def(
            "Update", 
            (void(MeshBasedCellPopulation3_3::*)(bool)) &MeshBasedCellPopulation3_3::Update, 
            " " , py::arg("hasHadBirthsOrDeaths") = true )
        .def(
            "TessellateIfNeeded", 
            (void(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::TessellateIfNeeded, 
            " "  )
        .def(
            "DivideLongSprings", 
            (void(MeshBasedCellPopulation3_3::*)(double)) &MeshBasedCellPopulation3_3::DivideLongSprings, 
            " " , py::arg("springDivisionThreshold") )
        .def(
            "GetNode", 
            (::Node<3> *(MeshBasedCellPopulation3_3::*)(unsigned int)) &MeshBasedCellPopulation3_3::GetNode, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetNumNodes", 
            (unsigned int(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::GetNumNodes, 
            " "  )
        .def(
            "WriteVtkResultsToFile", 
            (void(MeshBasedCellPopulation3_3::*)(::std::string const &)) &MeshBasedCellPopulation3_3::WriteVtkResultsToFile, 
            " " , py::arg("rDirectory") )
        .def(
            "GetVolumeOfCell", 
            (double(MeshBasedCellPopulation3_3::*)(::CellPtr)) &MeshBasedCellPopulation3_3::GetVolumeOfCell, 
            " " , py::arg("pCell") )
        .def(
            "CreateVoronoiTessellation", 
            (void(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::CreateVoronoiTessellation, 
            " "  )
        .def(
            "GetVolumeOfVoronoiElement", 
            (double(MeshBasedCellPopulation3_3::*)(unsigned int)) &MeshBasedCellPopulation3_3::GetVolumeOfVoronoiElement, 
            " " , py::arg("index") )
        .def(
            "GetSurfaceAreaOfVoronoiElement", 
            (double(MeshBasedCellPopulation3_3::*)(unsigned int)) &MeshBasedCellPopulation3_3::GetSurfaceAreaOfVoronoiElement, 
            " " , py::arg("index") )
        .def(
            "GetVoronoiEdgeLength", 
            (double(MeshBasedCellPopulation3_3::*)(unsigned int, unsigned int)) &MeshBasedCellPopulation3_3::GetVoronoiEdgeLength, 
            " " , py::arg("index1"), py::arg("index2") )
        .def(
            "GetWidth", 
            (double(MeshBasedCellPopulation3_3::*)(unsigned int const &)) &MeshBasedCellPopulation3_3::GetWidth, 
            " " , py::arg("rDimension") )
        .def(
            "WriteDataToVisualizerSetupFile", 
            (void(MeshBasedCellPopulation3_3::*)(::out_stream &)) &MeshBasedCellPopulation3_3::WriteDataToVisualizerSetupFile, 
            " " , py::arg("pVizSetupFile") )
        .def(
            "SpringsBegin", 
            (::MeshBasedCellPopulation<3, 3>::SpringIterator(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::SpringsBegin, 
            " "  )
        .def(
            "SpringsEnd", 
            (::MeshBasedCellPopulation<3, 3>::SpringIterator(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::SpringsEnd, 
            " "  )
        .def(
            "CheckCellPointers", 
            (void(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::CheckCellPointers, 
            " "  )
        .def(
            "GetAreaBasedDampingConstantParameter", 
            (double(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::GetAreaBasedDampingConstantParameter, 
            " "  )
        .def(
            "SetAreaBasedDampingConstantParameter", 
            (void(MeshBasedCellPopulation3_3::*)(double)) &MeshBasedCellPopulation3_3::SetAreaBasedDampingConstantParameter, 
            " " , py::arg("areaBasedDampingConstantParameter") )
        .def(
            "OutputCellPopulationParameters", 
            (void(MeshBasedCellPopulation3_3::*)(::out_stream &)) &MeshBasedCellPopulation3_3::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "SetWriteVtkAsPoints", 
            (void(MeshBasedCellPopulation3_3::*)(bool)) &MeshBasedCellPopulation3_3::SetWriteVtkAsPoints, 
            " " , py::arg("writeVtkAsPoints") )
        .def(
            "GetWriteVtkAsPoints", 
            (bool(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::GetWriteVtkAsPoints, 
            " "  )
        .def(
            "GetNeighbouringNodeIndices", 
            (::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >(MeshBasedCellPopulation3_3::*)(unsigned int)) &MeshBasedCellPopulation3_3::GetNeighbouringNodeIndices, 
            " " , py::arg("index") )
        .def(
            "CalculateRestLengths", 
            (void(MeshBasedCellPopulation3_3::*)()) &MeshBasedCellPopulation3_3::CalculateRestLengths, 
            " "  )
        .def(
            "GetRestLength", 
            (double(MeshBasedCellPopulation3_3::*)(unsigned int, unsigned int)) &MeshBasedCellPopulation3_3::GetRestLength, 
            " " , py::arg("indexA"), py::arg("indexB") )
        .def(
            "SetRestLength", 
            (void(MeshBasedCellPopulation3_3::*)(unsigned int, unsigned int, double)) &MeshBasedCellPopulation3_3::SetRestLength, 
            " " , py::arg("indexA"), py::arg("indexB"), py::arg("restLength") )
        .def("AddCellWriterCellAgesWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &MeshBasedCellPopulation3_3::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &MeshBasedCellPopulation3_3::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &MeshBasedCellPopulation3_3::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &MeshBasedCellPopulation3_3::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &MeshBasedCellPopulation3_3::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &MeshBasedCellPopulation3_3::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &MeshBasedCellPopulation3_3::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &MeshBasedCellPopulation3_3::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
