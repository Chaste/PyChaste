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
#include "CaBasedCellPopulation.hpp"

#include "CaBasedCellPopulation2.cppwg.hpp"

namespace py = pybind11;
typedef CaBasedCellPopulation<2 > CaBasedCellPopulation2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<2, 2> * _TetrahedralMesh_lt_2_2_gt_Ptr;
typedef ::Node<2> * _Node_lt_2_gt_Ptr;
typedef unsigned int unsignedint;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef ::boost::numeric::ublas::c_vector<double, 2> _boost_numeric_ublas_c_vector_lt_double_2_gt_;
typedef ::CellPtr _CellPtr;
typedef unsigned int unsignedint;
typedef ::std::vector<boost::shared_ptr<AbstractUpdateRule<2>>> const _std_vector_lt_boost_shared_ptr_lt_AbstractUpdateRule_lt_2_gt__gt__gt_const;

class CaBasedCellPopulation2_Overloads : public CaBasedCellPopulation2{
    public:
    using CaBasedCellPopulation2::CaBasedCellPopulation;
    bool IsSiteAvailable(unsigned int index, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            bool,
            CaBasedCellPopulation2,
            IsSiteAvailable,
            index, 
pCell);
    }
    ::TetrahedralMesh<2, 2> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_2_2_gt_Ptr,
            CaBasedCellPopulation2,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    ::Node<2> * GetNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _Node_lt_2_gt_Ptr,
            CaBasedCellPopulation2,
            GetNode,
            index);
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            CaBasedCellPopulation2,
            GetNumNodes,
            );
    }
    ::std::set<unsigned int> GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            CaBasedCellPopulation2,
            GetNeighbouringLocationIndices,
            pCell);
    }
    ::boost::numeric::ublas::c_vector<double, 2> GetLocationOfCellCentre(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_2_gt_,
            CaBasedCellPopulation2,
            GetLocationOfCellCentre,
            pCell);
    }
    void AddCellUsingLocationIndex(unsigned int index, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            AddCellUsingLocationIndex,
            index, 
pCell);
    }
    void RemoveCellUsingLocationIndex(unsigned int index, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            RemoveCellUsingLocationIndex,
            index, 
pCell);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            CaBasedCellPopulation2,
            AddCell,
            pNewCell, 
pParentCell);
    }
    double EvaluateDivisionPropensity(unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            double,
            CaBasedCellPopulation2,
            EvaluateDivisionPropensity,
            currentNodeIndex, 
targetNodeIndex, 
pCell);
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            CaBasedCellPopulation2,
            RemoveDeadCells,
            );
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void UpdateCellLocations(double dt) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            UpdateCellLocations,
            dt);
    }
    bool IsCellAssociatedWithADeletedLocation(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            bool,
            CaBasedCellPopulation2,
            IsCellAssociatedWithADeletedLocation,
            pCell);
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            Update,
            hasHadBirthsOrDeaths);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2>> pPopulationWriter) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2>> pPopulationCountWriter) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptPopulationEventWriter(::boost::shared_ptr<AbstractCellPopulationEventWriter<2, 2>> pPopulationEventWriter) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            AcceptPopulationEventWriter,
            pPopulationEventWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<2, 2>> pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            double,
            CaBasedCellPopulation2,
            GetVolumeOfCell,
            pCell);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERRIDE(
            double,
            CaBasedCellPopulation2,
            GetWidth,
            rDimension);
    }
    void RemoveAllUpdateRules() override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            RemoveAllUpdateRules,
            );
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    bool IsRoomToDivide(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            bool,
            CaBasedCellPopulation2,
            IsRoomToDivide,
            pCell);
    }
    void AddUpdateRule(::boost::shared_ptr<AbstractUpdateRule<2>> pUpdateRule) override {
        PYBIND11_OVERRIDE(
            void,
            CaBasedCellPopulation2,
            AddUpdateRule,
            pUpdateRule);
    }
    ::std::vector<boost::shared_ptr<AbstractUpdateRule<2>>> const GetUpdateRuleCollection() const  override {
        PYBIND11_OVERRIDE(
            _std_vector_lt_boost_shared_ptr_lt_AbstractUpdateRule_lt_2_gt__gt__gt_const,
            CaBasedCellPopulation2,
            GetUpdateRuleCollection,
            );
    }
    double GetCellDataItemAtPdeNode(unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies, double dirichletBoundaryValue) override {
        PYBIND11_OVERRIDE(
            double,
            CaBasedCellPopulation2,
            GetCellDataItemAtPdeNode,
            pdeNodeIndex, 
rVariableName, 
dirichletBoundaryConditionApplies, 
dirichletBoundaryValue);
    }
    bool IsPdeNodeAssociatedWithNonApoptoticCell(unsigned int pdeNodeIndex) override {
        PYBIND11_OVERRIDE(
            bool,
            CaBasedCellPopulation2,
            IsPdeNodeAssociatedWithNonApoptoticCell,
            pdeNodeIndex);
    }

};
void register_CaBasedCellPopulation2_class(py::module &m){
py::class_<CaBasedCellPopulation2 , CaBasedCellPopulation2_Overloads , boost::shared_ptr<CaBasedCellPopulation2 >  , AbstractOnLatticeCellPopulation<2>  >(m, "CaBasedCellPopulation2")
        .def(py::init<::PottsMesh<2> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, unsigned int, bool, bool >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices"), py::arg("latticeCarryingCapacity") = 1U, py::arg("deleteMesh") = false, py::arg("validate") = false)
        .def(py::init<::PottsMesh<2> & >(), py::arg("rMesh"))
        .def(
            "IsSiteAvailable", 
            (bool(CaBasedCellPopulation2::*)(unsigned int, ::CellPtr)) &CaBasedCellPopulation2::IsSiteAvailable, 
            " " , py::arg("index"), py::arg("pCell") )
        .def(
            "GetNode", 
            (::Node<2> *(CaBasedCellPopulation2::*)(unsigned int)) &CaBasedCellPopulation2::GetNode, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetNumNodes", 
            (unsigned int(CaBasedCellPopulation2::*)()) &CaBasedCellPopulation2::GetNumNodes, 
            " "  )
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int>(CaBasedCellPopulation2::*)(::CellPtr)) &CaBasedCellPopulation2::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell") )
        .def(
            "GetLocationOfCellCentre", 
            (::boost::numeric::ublas::c_vector<double, 2>(CaBasedCellPopulation2::*)(::CellPtr)) &CaBasedCellPopulation2::GetLocationOfCellCentre, 
            " " , py::arg("pCell") )
        .def(
            "AddCellUsingLocationIndex", 
            (void(CaBasedCellPopulation2::*)(unsigned int, ::CellPtr)) &CaBasedCellPopulation2::AddCellUsingLocationIndex, 
            " " , py::arg("index"), py::arg("pCell") )
        .def(
            "RemoveCellUsingLocationIndex", 
            (void(CaBasedCellPopulation2::*)(unsigned int, ::CellPtr)) &CaBasedCellPopulation2::RemoveCellUsingLocationIndex, 
            " " , py::arg("index"), py::arg("pCell") )
        .def(
            "AddCell", 
            (::CellPtr(CaBasedCellPopulation2::*)(::CellPtr, ::CellPtr)) &CaBasedCellPopulation2::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") = ::CellPtr( ) )
        .def(
            "EvaluateDivisionPropensity", 
            (double(CaBasedCellPopulation2::*)(unsigned int, unsigned int, ::CellPtr)) &CaBasedCellPopulation2::EvaluateDivisionPropensity, 
            " " , py::arg("currentNodeIndex"), py::arg("targetNodeIndex"), py::arg("pCell") )
        .def(
            "RemoveDeadCells", 
            (unsigned int(CaBasedCellPopulation2::*)()) &CaBasedCellPopulation2::RemoveDeadCells, 
            " "  )
        .def(
            "OpenWritersFiles", 
            (void(CaBasedCellPopulation2::*)(::OutputFileHandler &)) &CaBasedCellPopulation2::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "UpdateCellLocations", 
            (void(CaBasedCellPopulation2::*)(double)) &CaBasedCellPopulation2::UpdateCellLocations, 
            " " , py::arg("dt") )
        .def(
            "IsCellAssociatedWithADeletedLocation", 
            (bool(CaBasedCellPopulation2::*)(::CellPtr)) &CaBasedCellPopulation2::IsCellAssociatedWithADeletedLocation, 
            " " , py::arg("pCell") )
        .def(
            "Update", 
            (void(CaBasedCellPopulation2::*)(bool)) &CaBasedCellPopulation2::Update, 
            " " , py::arg("hasHadBirthsOrDeaths") = true )
        .def(
            "AcceptPopulationWriter", 
            (void(CaBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2>>)) &CaBasedCellPopulation2::AcceptPopulationWriter, 
            " " , py::arg("pPopulationWriter") )
        .def(
            "AcceptPopulationCountWriter", 
            (void(CaBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2>>)) &CaBasedCellPopulation2::AcceptPopulationCountWriter, 
            " " , py::arg("pPopulationCountWriter") )
        .def(
            "AcceptPopulationEventWriter", 
            (void(CaBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellPopulationEventWriter<2, 2>>)) &CaBasedCellPopulation2::AcceptPopulationEventWriter, 
            " " , py::arg("pPopulationEventWriter") )
        .def(
            "AcceptCellWriter", 
            (void(CaBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCellWriter<2, 2>>, ::CellPtr)) &CaBasedCellPopulation2::AcceptCellWriter, 
            " " , py::arg("pCellWriter"), py::arg("pCell") )
        .def(
            "GetVolumeOfCell", 
            (double(CaBasedCellPopulation2::*)(::CellPtr)) &CaBasedCellPopulation2::GetVolumeOfCell, 
            " " , py::arg("pCell") )
        .def(
            "GetWidth", 
            (double(CaBasedCellPopulation2::*)(unsigned int const &)) &CaBasedCellPopulation2::GetWidth, 
            " " , py::arg("rDimension") )
        .def(
            "RemoveAllUpdateRules", 
            (void(CaBasedCellPopulation2::*)()) &CaBasedCellPopulation2::RemoveAllUpdateRules, 
            " "  )
        .def(
            "OutputCellPopulationParameters", 
            (void(CaBasedCellPopulation2::*)(::out_stream &)) &CaBasedCellPopulation2::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "IsRoomToDivide", 
            (bool(CaBasedCellPopulation2::*)(::CellPtr)) &CaBasedCellPopulation2::IsRoomToDivide, 
            " " , py::arg("pCell") )
        .def(
            "GetCaBasedDivisionRule", 
            (::boost::shared_ptr<AbstractCaBasedDivisionRule<2>>(CaBasedCellPopulation2::*)()) &CaBasedCellPopulation2::GetCaBasedDivisionRule, 
            " "  )
        .def(
            "SetCaBasedDivisionRule", 
            (void(CaBasedCellPopulation2::*)(::boost::shared_ptr<AbstractCaBasedDivisionRule<2>>)) &CaBasedCellPopulation2::SetCaBasedDivisionRule, 
            " " , py::arg("pCaBasedDivisionRule") )
        .def(
            "AddUpdateRule", 
            (void(CaBasedCellPopulation2::*)(::boost::shared_ptr<AbstractUpdateRule<2>>)) &CaBasedCellPopulation2::AddUpdateRule, 
            " " , py::arg("pUpdateRule") )
        .def(
            "GetUpdateRuleCollection", 
            (::std::vector<boost::shared_ptr<AbstractUpdateRule<2>>> const(CaBasedCellPopulation2::*)() const ) &CaBasedCellPopulation2::GetUpdateRuleCollection, 
            " "  )
        .def(
            "GetCellDataItemAtPdeNode", 
            (double(CaBasedCellPopulation2::*)(unsigned int, ::std::string &, bool, double)) &CaBasedCellPopulation2::GetCellDataItemAtPdeNode, 
            " " , py::arg("pdeNodeIndex"), py::arg("rVariableName"), py::arg("dirichletBoundaryConditionApplies") = false, py::arg("dirichletBoundaryValue") = 0. )
        .def(
            "IsPdeNodeAssociatedWithNonApoptoticCell", 
            (bool(CaBasedCellPopulation2::*)(unsigned int)) &CaBasedCellPopulation2::IsPdeNodeAssociatedWithNonApoptoticCell, 
            " " , py::arg("pdeNodeIndex") )
        .def("AddCellWriterCellAgesWriter", &CaBasedCellPopulation2::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &CaBasedCellPopulation2::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &CaBasedCellPopulation2::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &CaBasedCellPopulation2::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &CaBasedCellPopulation2::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &CaBasedCellPopulation2::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &CaBasedCellPopulation2::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &CaBasedCellPopulation2::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &CaBasedCellPopulation2::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &CaBasedCellPopulation2::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &CaBasedCellPopulation2::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &CaBasedCellPopulation2::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &CaBasedCellPopulation2::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &CaBasedCellPopulation2::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &CaBasedCellPopulation2::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &CaBasedCellPopulation2::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &CaBasedCellPopulation2::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &CaBasedCellPopulation2::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &CaBasedCellPopulation2::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &CaBasedCellPopulation2::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &CaBasedCellPopulation2::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &CaBasedCellPopulation2::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &CaBasedCellPopulation2::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &CaBasedCellPopulation2::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &CaBasedCellPopulation2::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &CaBasedCellPopulation2::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &CaBasedCellPopulation2::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &CaBasedCellPopulation2::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &CaBasedCellPopulation2::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &CaBasedCellPopulation2::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &CaBasedCellPopulation2::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &CaBasedCellPopulation2::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &CaBasedCellPopulation2::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &CaBasedCellPopulation2::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
