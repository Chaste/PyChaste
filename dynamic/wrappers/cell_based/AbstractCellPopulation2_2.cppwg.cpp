#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "AbstractCellBasedSimulation.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "AbstractCellPopulation.hpp"

#include "AbstractCellPopulation2_2.cppwg.hpp"

namespace py = pybind11;
typedef AbstractCellPopulation<2,2 > AbstractCellPopulation2_2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::TetrahedralMesh<2, 2> * _TetrahedralMesh_lt_2_2_gt_Ptr;
typedef unsigned int unsignedint;
typedef ::boost::numeric::ublas::c_vector<double, 2> _boost_numeric_ublas_c_vector_lt_double_2_gt_;
typedef ::Node<2> * _Node_lt_2_gt_Ptr;
typedef ::CellPtr _CellPtr;
typedef unsigned int unsignedint;
typedef ::CellPtr _CellPtr;
typedef ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > _std_set_lt_unsignedint_std_less_lt_unsignedint_gt__std_allocator_lt_unsignedint_gt__gt_;
typedef ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > _std_set_lt_unsignedint_std_less_lt_unsignedint_gt__std_allocator_lt_unsignedint_gt__gt_;

class AbstractCellPopulation2_2_Overloads : public AbstractCellPopulation2_2{
    public:
    using AbstractCellPopulation2_2::AbstractCellPopulation;
    ::TetrahedralMesh<2, 2> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE_PURE(
            _TetrahedralMesh_lt_2_2_gt_Ptr,
            AbstractCellPopulation2_2,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    bool IsPdeNodeAssociatedWithNonApoptoticCell(unsigned int pdeNodeIndex) override {
        PYBIND11_OVERRIDE(
            bool,
            AbstractCellPopulation2_2,
            IsPdeNodeAssociatedWithNonApoptoticCell,
            pdeNodeIndex);
    }
    double GetCellDataItemAtPdeNode(unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies, double dirichletBoundaryValue) override {
        PYBIND11_OVERRIDE_PURE(
            double,
            AbstractCellPopulation2_2,
            GetCellDataItemAtPdeNode,
            pdeNodeIndex, 
rVariableName, 
dirichletBoundaryConditionApplies, 
dirichletBoundaryValue);
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERRIDE_PURE(
            unsignedint,
            AbstractCellPopulation2_2,
            GetNumNodes,
            );
    }
    ::boost::numeric::ublas::c_vector<double, 2> GetLocationOfCellCentre(::CellPtr pCell) override {
        PYBIND11_OVERRIDE_PURE(
            _boost_numeric_ublas_c_vector_lt_double_2_gt_,
            AbstractCellPopulation2_2,
            GetLocationOfCellCentre,
            pCell);
    }
    ::Node<2> * GetNode(unsigned int index) override {
        PYBIND11_OVERRIDE_PURE(
            _Node_lt_2_gt_Ptr,
            AbstractCellPopulation2_2,
            GetNode,
            index);
    }
    void SetNode(unsigned int nodeIndex, ::ChastePoint<2> & rNewLocation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            SetNode,
            nodeIndex, 
rNewLocation);
    }
    bool IsCellAssociatedWithADeletedLocation(::CellPtr pCell) override {
        PYBIND11_OVERRIDE_PURE(
            bool,
            AbstractCellPopulation2_2,
            IsCellAssociatedWithADeletedLocation,
            pCell);
    }
    void WriteDataToVisualizerSetupFile(::out_stream & pVizSetupFile) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            WriteDataToVisualizerSetupFile,
            pVizSetupFile);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE_PURE(
            _CellPtr,
            AbstractCellPopulation2_2,
            AddCell,
            pNewCell, 
pParentCell);
    }
    double GetDefaultTimeStep() override {
        PYBIND11_OVERRIDE_PURE(
            double,
            AbstractCellPopulation2_2,
            GetDefaultTimeStep,
            );
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERRIDE_PURE(
            unsignedint,
            AbstractCellPopulation2_2,
            RemoveDeadCells,
            );
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            Update,
            hasHadBirthsOrDeaths);
    }
    ::CellPtr GetCellUsingLocationIndex(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            AbstractCellPopulation2_2,
            GetCellUsingLocationIndex,
            index);
    }
    bool IsCellAttachedToLocationIndex(unsigned int index) override {
        PYBIND11_OVERRIDE(
            bool,
            AbstractCellPopulation2_2,
            IsCellAttachedToLocationIndex,
            index);
    }
    void AddCellUsingLocationIndex(unsigned int index, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            AddCellUsingLocationIndex,
            index, 
pCell);
    }
    void RemoveCellUsingLocationIndex(unsigned int index, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            RemoveCellUsingLocationIndex,
            index, 
pCell);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERRIDE_PURE(
            double,
            AbstractCellPopulation2_2,
            GetWidth,
            rDimension);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERRIDE_PURE(
            double,
            AbstractCellPopulation2_2,
            GetVolumeOfCell,
            pCell);
    }
    ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > GetNeighbouringNodeIndices(unsigned int index) override {
        PYBIND11_OVERRIDE_PURE(
            _std_set_lt_unsignedint_std_less_lt_unsignedint_gt__std_allocator_lt_unsignedint_gt__gt_,
            AbstractCellPopulation2_2,
            GetNeighbouringNodeIndices,
            index);
    }
    ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERRIDE_PURE(
            _std_set_lt_unsignedint_std_less_lt_unsignedint_gt__std_allocator_lt_unsignedint_gt__gt_,
            AbstractCellPopulation2_2,
            GetNeighbouringLocationIndices,
            pCell);
    }
    void UpdateCellProcessLocation() override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            UpdateCellProcessLocation,
            );
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void WriteResultsToFiles(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            WriteResultsToFiles,
            rDirectory);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2> > pPopulationWriter) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2> > pPopulationCountWriter) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<2, 2> > pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void SimulationSetupHook(::AbstractCellBasedSimulation<2, 2> * pSimulation) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            SimulationSetupHook,
            pSimulation);
    }
    bool IsRoomToDivide(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            bool,
            AbstractCellPopulation2_2,
            IsRoomToDivide,
            pCell);
    }
    void Validate() override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            Validate,
            );
    }
    void WriteVtkResultsToFile(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulation2_2,
            WriteVtkResultsToFile,
            rDirectory);
    }
    void AcceptCellWritersAcrossPopulation() override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulation2_2,
            AcceptCellWritersAcrossPopulation,
            );
    }

};
void register_AbstractCellPopulation2_2_class(py::module &m){
py::class_<AbstractCellPopulation2_2 , AbstractCellPopulation2_2_Overloads , boost::shared_ptr<AbstractCellPopulation2_2 >   >(m, "AbstractCellPopulation2_2")
        .def(
            "InitialiseCells", 
            (void(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::InitialiseCells, 
            " "  )
        .def(
            "SetDataOnAllCells", 
            (void(AbstractCellPopulation2_2::*)(::std::string const &, double)) &AbstractCellPopulation2_2::SetDataOnAllCells, 
            " " , py::arg("rDataName"), py::arg("dataValue") )
        .def(
            "rGetMesh", 
            (::AbstractMesh<2, 2> &(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::rGetMesh, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetTetrahedralMeshForPdeModifier", 
            (::TetrahedralMesh<2, 2> *(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetTetrahedralMeshForPdeModifier, 
            " "  , py::return_value_policy::reference)
        .def(
            "IsPdeNodeAssociatedWithNonApoptoticCell", 
            (bool(AbstractCellPopulation2_2::*)(unsigned int)) &AbstractCellPopulation2_2::IsPdeNodeAssociatedWithNonApoptoticCell, 
            " " , py::arg("pdeNodeIndex") )
        .def(
            "GetCellDataItemAtPdeNode", 
            (double(AbstractCellPopulation2_2::*)(unsigned int, ::std::string &, bool, double)) &AbstractCellPopulation2_2::GetCellDataItemAtPdeNode, 
            " " , py::arg("pdeNodeIndex"), py::arg("rVariableName"), py::arg("dirichletBoundaryConditionApplies") = false, py::arg("dirichletBoundaryValue") = 0. )
        .def(
            "GetNumNodes", 
            (unsigned int(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetNumNodes, 
            " "  )
        .def(
            "GetLocationOfCellCentre", 
            (::boost::numeric::ublas::c_vector<double, 2>(AbstractCellPopulation2_2::*)(::CellPtr)) &AbstractCellPopulation2_2::GetLocationOfCellCentre, 
            " " , py::arg("pCell") )
        .def(
            "GetNode", 
            (::Node<2> *(AbstractCellPopulation2_2::*)(unsigned int)) &AbstractCellPopulation2_2::GetNode, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "SetNode", 
            (void(AbstractCellPopulation2_2::*)(unsigned int, ::ChastePoint<2> &)) &AbstractCellPopulation2_2::SetNode, 
            " " , py::arg("nodeIndex"), py::arg("rNewLocation") )
        .def(
            "IsCellAssociatedWithADeletedLocation", 
            (bool(AbstractCellPopulation2_2::*)(::CellPtr)) &AbstractCellPopulation2_2::IsCellAssociatedWithADeletedLocation, 
            " " , py::arg("pCell") )
        .def(
            "WriteDataToVisualizerSetupFile", 
            (void(AbstractCellPopulation2_2::*)(::out_stream &)) &AbstractCellPopulation2_2::WriteDataToVisualizerSetupFile, 
            " " , py::arg("pVizSetupFile") )
        .def(
            "AddCell", 
            (::CellPtr(AbstractCellPopulation2_2::*)(::CellPtr, ::CellPtr)) &AbstractCellPopulation2_2::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") = ::CellPtr( ) )
        .def(
            "GetDefaultTimeStep", 
            (double(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetDefaultTimeStep, 
            " "  )
        .def(
            "RemoveDeadCells", 
            (unsigned int(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::RemoveDeadCells, 
            " "  )
        .def(
            "Update", 
            (void(AbstractCellPopulation2_2::*)(bool)) &AbstractCellPopulation2_2::Update, 
            " " , py::arg("hasHadBirthsOrDeaths") = true )
        .def(
            "GetCellMutationStateCount", 
            (::std::vector<unsigned int, std::allocator<unsigned int> >(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetCellMutationStateCount, 
            " "  )
        .def(
            "GetCellProliferativeTypeCount", 
            (::std::vector<unsigned int, std::allocator<unsigned int> >(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetCellProliferativeTypeCount, 
            " "  )
        .def(
            "GetCellCyclePhaseCount", 
            (::std::vector<unsigned int, std::allocator<unsigned int> >(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetCellCyclePhaseCount, 
            " "  )
        .def(
            "GetNumRealCells", 
            (unsigned int(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetNumRealCells, 
            " "  )
        .def(
            "GetNumAllCells", 
            (unsigned int(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetNumAllCells, 
            " "  )
        .def(
            "SetCellAncestorsToLocationIndices", 
            (void(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::SetCellAncestorsToLocationIndices, 
            " "  )
        .def(
            "GetCellAncestors", 
            (::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetCellAncestors, 
            " "  )
        .def(
            "GetCellUsingLocationIndex", 
            (::CellPtr(AbstractCellPopulation2_2::*)(unsigned int)) &AbstractCellPopulation2_2::GetCellUsingLocationIndex, 
            " " , py::arg("index") )
        .def(
            "GetCellsUsingLocationIndex", 
            (::std::set<boost::shared_ptr<Cell>, std::less<boost::shared_ptr<Cell> >, std::allocator<boost::shared_ptr<Cell> > >(AbstractCellPopulation2_2::*)(unsigned int)) &AbstractCellPopulation2_2::GetCellsUsingLocationIndex, 
            " " , py::arg("index") )
        .def(
            "IsCellAttachedToLocationIndex", 
            (bool(AbstractCellPopulation2_2::*)(unsigned int)) &AbstractCellPopulation2_2::IsCellAttachedToLocationIndex, 
            " " , py::arg("index") )
        .def(
            "SetCellUsingLocationIndex", 
            (void(AbstractCellPopulation2_2::*)(unsigned int, ::CellPtr)) &AbstractCellPopulation2_2::SetCellUsingLocationIndex, 
            " " , py::arg("index"), py::arg("pCell") )
        .def(
            "AddCellUsingLocationIndex", 
            (void(AbstractCellPopulation2_2::*)(unsigned int, ::CellPtr)) &AbstractCellPopulation2_2::AddCellUsingLocationIndex, 
            " " , py::arg("index"), py::arg("pCell") )
        .def(
            "RemoveCellUsingLocationIndex", 
            (void(AbstractCellPopulation2_2::*)(unsigned int, ::CellPtr)) &AbstractCellPopulation2_2::RemoveCellUsingLocationIndex, 
            " " , py::arg("index"), py::arg("pCell") )
        .def(
            "MoveCellInLocationMap", 
            (void(AbstractCellPopulation2_2::*)(::CellPtr, unsigned int, unsigned int)) &AbstractCellPopulation2_2::MoveCellInLocationMap, 
            " " , py::arg("pCell"), py::arg("old_index"), py::arg("new_index") )
        .def(
            "GetLocationIndexUsingCell", 
            (unsigned int(AbstractCellPopulation2_2::*)(::CellPtr)) &AbstractCellPopulation2_2::GetLocationIndexUsingCell, 
            " " , py::arg("pCell") )
        .def(
            "GetCellPropertyRegistry", 
            (::boost::shared_ptr<CellPropertyRegistry>(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetCellPropertyRegistry, 
            " "  )
        .def(
            "SetDefaultCellMutationStateAndProliferativeTypeOrdering", 
            (void(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::SetDefaultCellMutationStateAndProliferativeTypeOrdering, 
            " "  )
        .def(
            "GetWidth", 
            (double(AbstractCellPopulation2_2::*)(unsigned int const &)) &AbstractCellPopulation2_2::GetWidth, 
            " " , py::arg("rDimension") )
        .def(
            "GetVolumeOfCell", 
            (double(AbstractCellPopulation2_2::*)(::CellPtr)) &AbstractCellPopulation2_2::GetVolumeOfCell, 
            " " , py::arg("pCell") )
        .def(
            "GetNeighbouringNodeIndices", 
            (::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >(AbstractCellPopulation2_2::*)(unsigned int)) &AbstractCellPopulation2_2::GetNeighbouringNodeIndices, 
            " " , py::arg("index") )
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >(AbstractCellPopulation2_2::*)(::CellPtr)) &AbstractCellPopulation2_2::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell") )
        .def(
            "GetCentroidOfCellPopulation", 
            (::boost::numeric::ublas::c_vector<double, 2>(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetCentroidOfCellPopulation, 
            " "  )
        .def(
            "UpdateCellProcessLocation", 
            (void(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::UpdateCellProcessLocation, 
            " "  )
        .def(
            "OpenWritersFiles", 
            (void(AbstractCellPopulation2_2::*)(::OutputFileHandler &)) &AbstractCellPopulation2_2::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "CloseWritersFiles", 
            (void(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::CloseWritersFiles, 
            " "  )
        .def(
            "WriteResultsToFiles", 
            (void(AbstractCellPopulation2_2::*)(::std::string const &)) &AbstractCellPopulation2_2::WriteResultsToFiles, 
            " " , py::arg("rDirectory") )
        .def(
            "AcceptPopulationWriter", 
            (void(AbstractCellPopulation2_2::*)(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2> >)) &AbstractCellPopulation2_2::AcceptPopulationWriter, 
            " " , py::arg("pPopulationWriter") )
        .def(
            "AcceptPopulationCountWriter", 
            (void(AbstractCellPopulation2_2::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2> >)) &AbstractCellPopulation2_2::AcceptPopulationCountWriter, 
            " " , py::arg("pPopulationCountWriter") )
        .def(
            "AcceptCellWriter", 
            (void(AbstractCellPopulation2_2::*)(::boost::shared_ptr<AbstractCellWriter<2, 2> >, ::CellPtr)) &AbstractCellPopulation2_2::AcceptCellWriter, 
            " " , py::arg("pCellWriter"), py::arg("pCell") )
        .def(
            "OutputCellPopulationInfo", 
            (void(AbstractCellPopulation2_2::*)(::out_stream &)) &AbstractCellPopulation2_2::OutputCellPopulationInfo, 
            " " , py::arg("rParamsFile") )
        .def(
            "OutputCellPopulationParameters", 
            (void(AbstractCellPopulation2_2::*)(::out_stream &)) &AbstractCellPopulation2_2::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "SimulationSetupHook", 
            (void(AbstractCellPopulation2_2::*)(::AbstractCellBasedSimulation<2, 2> *)) &AbstractCellPopulation2_2::SimulationSetupHook, 
            " " , py::arg("pSimulation") )
        .def(
            "GetOutputResultsForChasteVisualizer", 
            (bool(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetOutputResultsForChasteVisualizer, 
            " "  )
        .def(
            "AddPopulationWriter", 
            (void(AbstractCellPopulation2_2::*)(::boost::shared_ptr<AbstractCellPopulationWriter<2, 2> >)) &AbstractCellPopulation2_2::AddPopulationWriter, 
            " " , py::arg("pPopulationWriter") )
        .def(
            "AddCellWriter", 
            (void(AbstractCellPopulation2_2::*)(::boost::shared_ptr<AbstractCellWriter<2, 2> >)) &AbstractCellPopulation2_2::AddCellWriter, 
            " " , py::arg("pCellWriter") )
        .def(
            "AddCellPopulationCountWriter", 
            (void(AbstractCellPopulation2_2::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<2, 2> >)) &AbstractCellPopulation2_2::AddCellPopulationCountWriter, 
            " " , py::arg("pCellPopulationCountWriter") )
        .def(
            "SetOutputResultsForChasteVisualizer", 
            (void(AbstractCellPopulation2_2::*)(bool)) &AbstractCellPopulation2_2::SetOutputResultsForChasteVisualizer, 
            " " , py::arg("outputResultsForChasteVisualizer") )
        .def(
            "GetSizeOfCellPopulation", 
            (::boost::numeric::ublas::c_vector<double, 2>(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::GetSizeOfCellPopulation, 
            " "  )
        .def(
            "IsRoomToDivide", 
            (bool(AbstractCellPopulation2_2::*)(::CellPtr)) &AbstractCellPopulation2_2::IsRoomToDivide, 
            " " , py::arg("pCell") )
        .def(
            "CreateOrderedPair", 
            (::std::pair<unsigned int, unsigned int>(AbstractCellPopulation2_2::*)(unsigned int, unsigned int)) &AbstractCellPopulation2_2::CreateOrderedPair, 
            " " , py::arg("index1"), py::arg("index2") )
        .def(
            "Begin", 
            (::AbstractCellPopulation<2, 2>::Iterator(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::Begin, 
            " "  )
        .def(
            "End", 
            (::AbstractCellPopulation<2, 2>::Iterator(AbstractCellPopulation2_2::*)()) &AbstractCellPopulation2_2::End, 
            " "  )
    ;
}
