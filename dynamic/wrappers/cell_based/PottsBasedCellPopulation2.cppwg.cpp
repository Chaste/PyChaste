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
#include "PottsBasedCellPopulation.hpp"

#include "PottsBasedCellPopulation2.cppwg.hpp"

namespace py = pybind11;
typedef PottsBasedCellPopulation<2 > PottsBasedCellPopulation2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<2, 2> * _TetrahedralMesh_lt_2_2_gt_Ptr;
typedef ::Node<2> * _Node_lt_2_gt_Ptr;
typedef unsigned int unsignedint;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef ::boost::numeric::ublas::c_vector<double, 2> _boost_numeric_ublas_c_vector_lt_double_2_gt_;
typedef ::CellPtr _CellPtr;
typedef unsigned int unsignedint;

class PottsBasedCellPopulation2_Overloads : public PottsBasedCellPopulation2{
    public:
    using PottsBasedCellPopulation2::PottsBasedCellPopulation;
    ::TetrahedralMesh<2, 2> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_2_2_gt_Ptr,
            PottsBasedCellPopulation2,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    ::Node<2> * GetNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _Node_lt_2_gt_Ptr,
            PottsBasedCellPopulation2,
            GetNode,
            index);
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            PottsBasedCellPopulation2,
            GetNumNodes,
            );
    }
    ::std::set<unsigned int> GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            PottsBasedCellPopulation2,
            GetNeighbouringLocationIndices,
            pCell);
    }
    ::boost::numeric::ublas::c_vector<double, 2> GetLocationOfCellCentre(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_2_gt_,
            PottsBasedCellPopulation2,
            GetLocationOfCellCentre,
            pCell);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            PottsBasedCellPopulation2,
            AddCell,
            pNewCell, 
pParentCell);
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            PottsBasedCellPopulation2,
            RemoveDeadCells,
            );
    }
    void UpdateCellLocations(double dt) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            UpdateCellLocations,
            dt);
    }
    bool IsCellAssociatedWithADeletedLocation(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            bool,
            PottsBasedCellPopulation2,
            IsCellAssociatedWithADeletedLocation,
            pCell);
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            Update,
            hasHadBirthsOrDeaths);
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void WriteResultsToFiles(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            WriteResultsToFiles,
            rDirectory);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2>> pPopulationWriter) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2>> pPopulationCountWriter) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptPopulationEventWriter(::boost::shared_ptr<AbstractCellPopulationEventWriter<2, 2>> pPopulationEventWriter) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            AcceptPopulationEventWriter,
            pPopulationEventWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<2, 2>> pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            double,
            PottsBasedCellPopulation2,
            GetVolumeOfCell,
            pCell);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERRIDE(
            double,
            PottsBasedCellPopulation2,
            GetWidth,
            rDimension);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void AddUpdateRule(::boost::shared_ptr<AbstractUpdateRule<2>> pUpdateRule) override {
        PYBIND11_OVERRIDE(
            void,
            PottsBasedCellPopulation2,
            AddUpdateRule,
            pUpdateRule);
    }
    double GetCellDataItemAtPdeNode(unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies, double dirichletBoundaryValue) override {
        PYBIND11_OVERRIDE(
            double,
            PottsBasedCellPopulation2,
            GetCellDataItemAtPdeNode,
            pdeNodeIndex, 
rVariableName, 
dirichletBoundaryConditionApplies, 
dirichletBoundaryValue);
    }

};
void register_PottsBasedCellPopulation2_class(py::module &m){
py::class_<PottsBasedCellPopulation2 , PottsBasedCellPopulation2_Overloads , boost::shared_ptr<PottsBasedCellPopulation2 >  , AbstractOnLatticeCellPopulation<2>  >(m, "PottsBasedCellPopulation2")
        .def(py::init<::PottsMesh<2> &, ::std::vector<boost::shared_ptr<Cell>> &, bool, bool, ::std::vector<unsigned int> const >(), py::arg("rMesh"), py::arg("rCells"), py::arg("deleteMesh") = false, py::arg("validate") = true, py::arg("locationIndices") = std::vector<unsigned int>())
        .def(py::init<::PottsMesh<2> & >(), py::arg("rMesh"))
        .def(
            "GetNumElements", 
            (unsigned int(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::GetNumElements, 
            " "  )
        .def(
            "GetNode", 
            (::Node<2> *(PottsBasedCellPopulation2::*)(unsigned int)) &PottsBasedCellPopulation2::GetNode, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetNumNodes", 
            (unsigned int(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::GetNumNodes, 
            " "  )
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int>(PottsBasedCellPopulation2::*)(::CellPtr)) &PottsBasedCellPopulation2::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell") )
        .def(
            "GetLocationOfCellCentre", 
            (::boost::numeric::ublas::c_vector<double, 2>(PottsBasedCellPopulation2::*)(::CellPtr)) &PottsBasedCellPopulation2::GetLocationOfCellCentre, 
            " " , py::arg("pCell") )
        .def(
            "AddCell", 
            (::CellPtr(PottsBasedCellPopulation2::*)(::CellPtr, ::CellPtr)) &PottsBasedCellPopulation2::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") = ::CellPtr( ) )
        .def(
            "RemoveDeadCells", 
            (unsigned int(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::RemoveDeadCells, 
            " "  )
        .def(
            "UpdateCellLocations", 
            (void(PottsBasedCellPopulation2::*)(double)) &PottsBasedCellPopulation2::UpdateCellLocations, 
            " " , py::arg("dt") )
        .def(
            "IsCellAssociatedWithADeletedLocation", 
            (bool(PottsBasedCellPopulation2::*)(::CellPtr)) &PottsBasedCellPopulation2::IsCellAssociatedWithADeletedLocation, 
            " " , py::arg("pCell") )
        .def(
            "Update", 
            (void(PottsBasedCellPopulation2::*)(bool)) &PottsBasedCellPopulation2::Update, 
            " " , py::arg("hasHadBirthsOrDeaths") = true )
        .def(
            "OpenWritersFiles", 
            (void(PottsBasedCellPopulation2::*)(::OutputFileHandler &)) &PottsBasedCellPopulation2::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "WriteResultsToFiles", 
            (void(PottsBasedCellPopulation2::*)(::std::string const &)) &PottsBasedCellPopulation2::WriteResultsToFiles, 
            " " , py::arg("rDirectory") )
        .def(
            "AcceptPopulationWriter", 
            (void(PottsBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2>>)) &PottsBasedCellPopulation2::AcceptPopulationWriter, 
            " " , py::arg("pPopulationWriter") )
        .def(
            "AcceptPopulationCountWriter", 
            (void(PottsBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2>>)) &PottsBasedCellPopulation2::AcceptPopulationCountWriter, 
            " " , py::arg("pPopulationCountWriter") )
        .def(
            "AcceptPopulationEventWriter", 
            (void(PottsBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellPopulationEventWriter<2, 2>>)) &PottsBasedCellPopulation2::AcceptPopulationEventWriter, 
            " " , py::arg("pPopulationEventWriter") )
        .def(
            "AcceptCellWriter", 
            (void(PottsBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellWriter<2, 2>>, ::CellPtr)) &PottsBasedCellPopulation2::AcceptCellWriter, 
            " " , py::arg("pCellWriter"), py::arg("pCell") )
        .def(
            "GetVolumeOfCell", 
            (double(PottsBasedCellPopulation2::*)(::CellPtr)) &PottsBasedCellPopulation2::GetVolumeOfCell, 
            " " , py::arg("pCell") )
        .def(
            "GetWidth", 
            (double(PottsBasedCellPopulation2::*)(unsigned int const &)) &PottsBasedCellPopulation2::GetWidth, 
            " " , py::arg("rDimension") )
        .def(
            "OutputCellPopulationParameters", 
            (void(PottsBasedCellPopulation2::*)(::out_stream &)) &PottsBasedCellPopulation2::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "SetTemperature", 
            (void(PottsBasedCellPopulation2::*)(double)) &PottsBasedCellPopulation2::SetTemperature, 
            " " , py::arg("temperature") )
        .def(
            "GetTemperature", 
            (double(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::GetTemperature, 
            " "  )
        .def(
            "SetNumSweepsPerTimestep", 
            (void(PottsBasedCellPopulation2::*)(unsigned int)) &PottsBasedCellPopulation2::SetNumSweepsPerTimestep, 
            " " , py::arg("numSweepsPerTimestep") )
        .def(
            "GetNumSweepsPerTimestep", 
            (unsigned int(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::GetNumSweepsPerTimestep, 
            " "  )
        .def(
            "CreateElementTessellation", 
            (void(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::CreateElementTessellation, 
            " "  )
        .def(
            "CreateMutableMesh", 
            (void(PottsBasedCellPopulation2::*)()) &PottsBasedCellPopulation2::CreateMutableMesh, 
            " "  )
        .def(
            "AddUpdateRule", 
            (void(PottsBasedCellPopulation2::*)(::boost::shared_ptr<AbstractUpdateRule<2>>)) &PottsBasedCellPopulation2::AddUpdateRule, 
            " " , py::arg("pUpdateRule") )
        .def(
            "GetCellDataItemAtPdeNode", 
            (double(PottsBasedCellPopulation2::*)(unsigned int, ::std::string &, bool, double)) &PottsBasedCellPopulation2::GetCellDataItemAtPdeNode, 
            " " , py::arg("pdeNodeIndex"), py::arg("rVariableName"), py::arg("dirichletBoundaryConditionApplies") = false, py::arg("dirichletBoundaryValue") = 0. )
        .def("AddCellWriterCellAgesWriter", &PottsBasedCellPopulation2::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &PottsBasedCellPopulation2::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &PottsBasedCellPopulation2::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &PottsBasedCellPopulation2::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &PottsBasedCellPopulation2::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &PottsBasedCellPopulation2::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &PottsBasedCellPopulation2::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &PottsBasedCellPopulation2::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &PottsBasedCellPopulation2::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &PottsBasedCellPopulation2::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &PottsBasedCellPopulation2::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &PottsBasedCellPopulation2::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &PottsBasedCellPopulation2::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &PottsBasedCellPopulation2::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &PottsBasedCellPopulation2::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &PottsBasedCellPopulation2::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &PottsBasedCellPopulation2::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &PottsBasedCellPopulation2::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &PottsBasedCellPopulation2::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &PottsBasedCellPopulation2::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &PottsBasedCellPopulation2::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &PottsBasedCellPopulation2::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &PottsBasedCellPopulation2::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &PottsBasedCellPopulation2::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &PottsBasedCellPopulation2::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &PottsBasedCellPopulation2::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &PottsBasedCellPopulation2::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &PottsBasedCellPopulation2::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &PottsBasedCellPopulation2::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &PottsBasedCellPopulation2::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &PottsBasedCellPopulation2::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &PottsBasedCellPopulation2::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &PottsBasedCellPopulation2::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &PottsBasedCellPopulation2::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
