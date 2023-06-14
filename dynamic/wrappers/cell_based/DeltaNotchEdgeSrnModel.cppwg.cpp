#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "DeltaNotchEdgeSrnModel.hpp"

#include "DeltaNotchEdgeSrnModel.cppwg.hpp"

namespace py = pybind11;
typedef DeltaNotchEdgeSrnModel DeltaNotchEdgeSrnModel;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::AbstractSrnModel * _AbstractSrnModelPtr;

class DeltaNotchEdgeSrnModel_Overloads : public DeltaNotchEdgeSrnModel{
    public:
    using DeltaNotchEdgeSrnModel::DeltaNotchEdgeSrnModel;
    ::AbstractSrnModel * CreateSrnModel() override {
        PYBIND11_OVERLOAD(
            _AbstractSrnModelPtr,
            DeltaNotchEdgeSrnModel,
            CreateSrnModel,
            );
    }
    void Initialise() override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            Initialise,
            );
    }
    void InitialiseDaughterCell() override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            InitialiseDaughterCell,
            );
    }
    void SimulateToCurrentTime() override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            SimulateToCurrentTime,
            );
    }
    void OutputSrnModelParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            OutputSrnModelParameters,
            rParamsFile);
    }
    void AddSrnQuantities(::AbstractSrnModel * p_other_srn, double const scale) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            AddSrnQuantities,
            p_other_srn, 
scale);
    }
    void AddShrunkEdgeSrn(::AbstractSrnModel * p_shrunk_edge_srn) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            AddShrunkEdgeSrn,
            p_shrunk_edge_srn);
    }
    void AddMergedEdgeSrn(::AbstractSrnModel * p_merged_edge_srn) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            AddMergedEdgeSrn,
            p_merged_edge_srn);
    }
    void SplitEdgeSrn(double const relative_position) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchEdgeSrnModel,
            SplitEdgeSrn,
            relative_position);
    }

};
void register_DeltaNotchEdgeSrnModel_class(py::module &m){
py::class_<DeltaNotchEdgeSrnModel , DeltaNotchEdgeSrnModel_Overloads , boost::shared_ptr<DeltaNotchEdgeSrnModel >  , AbstractOdeSrnModel  >(m, "DeltaNotchEdgeSrnModel")
        .def(py::init<::boost::shared_ptr<AbstractCellCycleModelOdeSolver> >(), py::arg("pOdeSolver") = boost::shared_ptr<AbstractCellCycleModelOdeSolver>())
        .def(
            "CreateSrnModel", 
            (::AbstractSrnModel *(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::CreateSrnModel, 
            " "  , py::return_value_policy::reference)
        .def(
            "Initialise", 
            (void(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::Initialise, 
            " "  )
        .def(
            "InitialiseDaughterCell", 
            (void(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::InitialiseDaughterCell, 
            " "  )
        .def(
            "SimulateToCurrentTime", 
            (void(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::SimulateToCurrentTime, 
            " "  )
        .def(
            "UpdateDeltaNotch", 
            (void(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::UpdateDeltaNotch, 
            " "  )
        .def(
            "GetNotch", 
            (double(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::GetNotch, 
            " "  )
        .def(
            "SetNotch", 
            (void(DeltaNotchEdgeSrnModel::*)(double)) &DeltaNotchEdgeSrnModel::SetNotch, 
            " " , py::arg("value") )
        .def(
            "GetDelta", 
            (double(DeltaNotchEdgeSrnModel::*)()) &DeltaNotchEdgeSrnModel::GetDelta, 
            " "  )
        .def(
            "SetDelta", 
            (void(DeltaNotchEdgeSrnModel::*)(double)) &DeltaNotchEdgeSrnModel::SetDelta, 
            " " , py::arg("value") )
        .def(
            "GetNeighbouringDelta", 
            (double(DeltaNotchEdgeSrnModel::*)() const ) &DeltaNotchEdgeSrnModel::GetNeighbouringDelta, 
            " "  )
        .def(
            "GetInteriorDelta", 
            (double(DeltaNotchEdgeSrnModel::*)() const ) &DeltaNotchEdgeSrnModel::GetInteriorDelta, 
            " "  )
        .def(
            "GetInteriorNotch", 
            (double(DeltaNotchEdgeSrnModel::*)() const ) &DeltaNotchEdgeSrnModel::GetInteriorNotch, 
            " "  )
        .def(
            "OutputSrnModelParameters", 
            (void(DeltaNotchEdgeSrnModel::*)(::out_stream &)) &DeltaNotchEdgeSrnModel::OutputSrnModelParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "AddSrnQuantities", 
            (void(DeltaNotchEdgeSrnModel::*)(::AbstractSrnModel *, double const)) &DeltaNotchEdgeSrnModel::AddSrnQuantities, 
            " " , py::arg("p_other_srn"), py::arg("scale") = 1. )
        .def(
            "AddShrunkEdgeSrn", 
            (void(DeltaNotchEdgeSrnModel::*)(::AbstractSrnModel *)) &DeltaNotchEdgeSrnModel::AddShrunkEdgeSrn, 
            " " , py::arg("p_shrunk_edge_srn") )
        .def(
            "AddMergedEdgeSrn", 
            (void(DeltaNotchEdgeSrnModel::*)(::AbstractSrnModel *)) &DeltaNotchEdgeSrnModel::AddMergedEdgeSrn, 
            " " , py::arg("p_merged_edge_srn") )
        .def(
            "SplitEdgeSrn", 
            (void(DeltaNotchEdgeSrnModel::*)(double const)) &DeltaNotchEdgeSrnModel::SplitEdgeSrn, 
            " " , py::arg("relative_position") )
    ;
}
