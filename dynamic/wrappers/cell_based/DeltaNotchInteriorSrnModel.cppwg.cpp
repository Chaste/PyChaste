#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "DeltaNotchInteriorSrnModel.hpp"

#include "DeltaNotchInteriorSrnModel.cppwg.hpp"

namespace py = pybind11;
typedef DeltaNotchInteriorSrnModel DeltaNotchInteriorSrnModel;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::AbstractSrnModel * _AbstractSrnModelPtr;

class DeltaNotchInteriorSrnModel_Overloads : public DeltaNotchInteriorSrnModel{
    public:
    using DeltaNotchInteriorSrnModel::DeltaNotchInteriorSrnModel;
    ::AbstractSrnModel * CreateSrnModel() override {
        PYBIND11_OVERLOAD(
            _AbstractSrnModelPtr,
            DeltaNotchInteriorSrnModel,
            CreateSrnModel,
            );
    }
    void ResetForDivision() override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchInteriorSrnModel,
            ResetForDivision,
            );
    }
    void Initialise() override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchInteriorSrnModel,
            Initialise,
            );
    }
    void SimulateToCurrentTime() override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchInteriorSrnModel,
            SimulateToCurrentTime,
            );
    }
    void OutputSrnModelParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchInteriorSrnModel,
            OutputSrnModelParameters,
            rParamsFile);
    }
    void AddShrunkEdgeToInterior(::AbstractSrnModel * p_shrunk_edge_srn) override {
        PYBIND11_OVERLOAD(
            void,
            DeltaNotchInteriorSrnModel,
            AddShrunkEdgeToInterior,
            p_shrunk_edge_srn);
    }

};
void register_DeltaNotchInteriorSrnModel_class(py::module &m){
py::class_<DeltaNotchInteriorSrnModel , DeltaNotchInteriorSrnModel_Overloads , boost::shared_ptr<DeltaNotchInteriorSrnModel >  , AbstractOdeSrnModel  >(m, "DeltaNotchInteriorSrnModel")
        .def(py::init<::boost::shared_ptr<AbstractCellCycleModelOdeSolver> >(), py::arg("pOdeSolver") = boost::shared_ptr<AbstractCellCycleModelOdeSolver>())
        .def(
            "CreateSrnModel", 
            (::AbstractSrnModel *(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::CreateSrnModel, 
            " "  , py::return_value_policy::reference)
        .def(
            "ResetForDivision", 
            (void(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::ResetForDivision, 
            " "  )
        .def(
            "Initialise", 
            (void(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::Initialise, 
            " "  )
        .def(
            "SimulateToCurrentTime", 
            (void(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::SimulateToCurrentTime, 
            " "  )
        .def(
            "UpdateDeltaNotch", 
            (void(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::UpdateDeltaNotch, 
            " "  )
        .def(
            "GetNotch", 
            (double(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::GetNotch, 
            " "  )
        .def(
            "SetNotch", 
            (void(DeltaNotchInteriorSrnModel::*)(double)) &DeltaNotchInteriorSrnModel::SetNotch, 
            " " , py::arg("value") )
        .def(
            "GetDelta", 
            (double(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::GetDelta, 
            " "  )
        .def(
            "SetDelta", 
            (void(DeltaNotchInteriorSrnModel::*)(double)) &DeltaNotchInteriorSrnModel::SetDelta, 
            " " , py::arg("value") )
        .def(
            "GetTotalEdgeDelta", 
            (double(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::GetTotalEdgeDelta, 
            " "  )
        .def(
            "GetTotalEdgeNotch", 
            (double(DeltaNotchInteriorSrnModel::*)()) &DeltaNotchInteriorSrnModel::GetTotalEdgeNotch, 
            " "  )
        .def(
            "OutputSrnModelParameters", 
            (void(DeltaNotchInteriorSrnModel::*)(::out_stream &)) &DeltaNotchInteriorSrnModel::OutputSrnModelParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "AddShrunkEdgeToInterior", 
            (void(DeltaNotchInteriorSrnModel::*)(::AbstractSrnModel *)) &DeltaNotchInteriorSrnModel::AddShrunkEdgeToInterior, 
            " " , py::arg("p_shrunk_edge_srn") )
    ;
}
