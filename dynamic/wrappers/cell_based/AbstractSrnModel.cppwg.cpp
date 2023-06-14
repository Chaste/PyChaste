#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractSrnModel.hpp"

#include "AbstractSrnModel.cppwg.hpp"

namespace py = pybind11;
typedef AbstractSrnModel AbstractSrnModel;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::AbstractSrnModel * _AbstractSrnModelPtr;

class AbstractSrnModel_Overloads : public AbstractSrnModel{
    public:
    using AbstractSrnModel::AbstractSrnModel;
    void SetCell(::CellPtr pCell) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            SetCell,
            pCell);
    }
    void Initialise() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            Initialise,
            );
    }
    void InitialiseDaughterCell() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            InitialiseDaughterCell,
            );
    }
    void SimulateToCurrentTime() override {
        PYBIND11_OVERLOAD_PURE(
            void,
            AbstractSrnModel,
            SimulateToCurrentTime,
            );
    }
    void ResetForDivision() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            ResetForDivision,
            );
    }
    ::AbstractSrnModel * CreateSrnModel() override {
        PYBIND11_OVERLOAD_PURE(
            _AbstractSrnModelPtr,
            AbstractSrnModel,
            CreateSrnModel,
            );
    }
    void OutputSrnModelParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            OutputSrnModelParameters,
            rParamsFile);
    }
    void ScaleSrnVariables(double const theta) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            ScaleSrnVariables,
            theta);
    }
    void AddSrnQuantities(::AbstractSrnModel * p_other_srn, double const scale) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            AddSrnQuantities,
            p_other_srn, 
scale);
    }
    void AddShrunkEdgeSrn(::AbstractSrnModel * p_shrunk_edge_srn) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            AddShrunkEdgeSrn,
            p_shrunk_edge_srn);
    }
    void AddMergedEdgeSrn(::AbstractSrnModel * p_merged_edge_srn) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            AddMergedEdgeSrn,
            p_merged_edge_srn);
    }
    void AddShrunkEdgeToInterior(::AbstractSrnModel * p_shrunk_edge_srn) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            AddShrunkEdgeToInterior,
            p_shrunk_edge_srn);
    }
    void SplitEdgeSrn(double const relative_position) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSrnModel,
            SplitEdgeSrn,
            relative_position);
    }

};
void register_AbstractSrnModel_class(py::module &m){
py::class_<AbstractSrnModel , AbstractSrnModel_Overloads , boost::shared_ptr<AbstractSrnModel >   >(m, "AbstractSrnModel")
        .def(py::init< >())
        .def(
            "SetCell", 
            (void(AbstractSrnModel::*)(::CellPtr)) &AbstractSrnModel::SetCell, 
            " " , py::arg("pCell") )
        .def(
            "Initialise", 
            (void(AbstractSrnModel::*)()) &AbstractSrnModel::Initialise, 
            " "  )
        .def(
            "InitialiseDaughterCell", 
            (void(AbstractSrnModel::*)()) &AbstractSrnModel::InitialiseDaughterCell, 
            " "  )
        .def(
            "GetCell", 
            (::CellPtr(AbstractSrnModel::*)()) &AbstractSrnModel::GetCell, 
            " "  )
        .def(
            "SetSimulatedToTime", 
            (void(AbstractSrnModel::*)(double)) &AbstractSrnModel::SetSimulatedToTime, 
            " " , py::arg("simulatedToTime") )
        .def(
            "GetSimulatedToTime", 
            (double(AbstractSrnModel::*)() const ) &AbstractSrnModel::GetSimulatedToTime, 
            " "  )
        .def(
            "SimulateToCurrentTime", 
            (void(AbstractSrnModel::*)()) &AbstractSrnModel::SimulateToCurrentTime, 
            " "  )
        .def(
            "ResetForDivision", 
            (void(AbstractSrnModel::*)()) &AbstractSrnModel::ResetForDivision, 
            " "  )
        .def(
            "CreateSrnModel", 
            (::AbstractSrnModel *(AbstractSrnModel::*)()) &AbstractSrnModel::CreateSrnModel, 
            " "  , py::return_value_policy::reference)
        .def(
            "OutputSrnModelInfo", 
            (void(AbstractSrnModel::*)(::out_stream &)) &AbstractSrnModel::OutputSrnModelInfo, 
            " " , py::arg("rParamsFile") )
        .def(
            "OutputSrnModelParameters", 
            (void(AbstractSrnModel::*)(::out_stream &)) &AbstractSrnModel::OutputSrnModelParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "SetEdgeLocalIndex", 
            (void(AbstractSrnModel::*)(unsigned int)) &AbstractSrnModel::SetEdgeLocalIndex, 
            " " , py::arg("index") )
        .def(
            "GetEdgeLocalIndex", 
            (unsigned int(AbstractSrnModel::*)()) &AbstractSrnModel::GetEdgeLocalIndex, 
            " "  )
        .def(
            "HasEdgeModel", 
            (bool(AbstractSrnModel::*)() const ) &AbstractSrnModel::HasEdgeModel, 
            " "  )
        .def(
            "SetEdgeModelIndicator", 
            (void(AbstractSrnModel::*)(bool const)) &AbstractSrnModel::SetEdgeModelIndicator, 
            " " , py::arg("indicator") )
        .def(
            "ScaleSrnVariables", 
            (void(AbstractSrnModel::*)(double const)) &AbstractSrnModel::ScaleSrnVariables, 
            " " , py::arg("theta") )
        .def(
            "AddSrnQuantities", 
            (void(AbstractSrnModel::*)(::AbstractSrnModel *, double const)) &AbstractSrnModel::AddSrnQuantities, 
            " " , py::arg("p_other_srn"), py::arg("scale") = 1. )
        .def(
            "AddShrunkEdgeSrn", 
            (void(AbstractSrnModel::*)(::AbstractSrnModel *)) &AbstractSrnModel::AddShrunkEdgeSrn, 
            " " , py::arg("p_shrunk_edge_srn") )
        .def(
            "AddMergedEdgeSrn", 
            (void(AbstractSrnModel::*)(::AbstractSrnModel *)) &AbstractSrnModel::AddMergedEdgeSrn, 
            " " , py::arg("p_merged_edge_srn") )
        .def(
            "AddShrunkEdgeToInterior", 
            (void(AbstractSrnModel::*)(::AbstractSrnModel *)) &AbstractSrnModel::AddShrunkEdgeToInterior, 
            " " , py::arg("p_shrunk_edge_srn") )
        .def(
            "SplitEdgeSrn", 
            (void(AbstractSrnModel::*)(double const)) &AbstractSrnModel::SplitEdgeSrn, 
            " " , py::arg("relative_position") )
    ;
}
