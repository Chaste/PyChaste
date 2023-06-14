#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "LabelDependentBernoulliTrialCellCycleModel.hpp"

#include "LabelDependentBernoulliTrialCellCycleModel.cppwg.hpp"

namespace py = pybind11;
typedef LabelDependentBernoulliTrialCellCycleModel LabelDependentBernoulliTrialCellCycleModel;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::AbstractCellCycleModel * _AbstractCellCycleModelPtr;

class LabelDependentBernoulliTrialCellCycleModel_Overloads : public LabelDependentBernoulliTrialCellCycleModel{
    public:
    using LabelDependentBernoulliTrialCellCycleModel::LabelDependentBernoulliTrialCellCycleModel;
    bool ReadyToDivide() override {
        PYBIND11_OVERLOAD(
            bool,
            LabelDependentBernoulliTrialCellCycleModel,
            ReadyToDivide,
            );
    }
    ::AbstractCellCycleModel * CreateCellCycleModel() override {
        PYBIND11_OVERLOAD(
            _AbstractCellCycleModelPtr,
            LabelDependentBernoulliTrialCellCycleModel,
            CreateCellCycleModel,
            );
    }
    double GetAverageTransitCellCycleTime() override {
        PYBIND11_OVERLOAD(
            double,
            LabelDependentBernoulliTrialCellCycleModel,
            GetAverageTransitCellCycleTime,
            );
    }
    double GetAverageStemCellCycleTime() override {
        PYBIND11_OVERLOAD(
            double,
            LabelDependentBernoulliTrialCellCycleModel,
            GetAverageStemCellCycleTime,
            );
    }
    void OutputCellCycleModelParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            LabelDependentBernoulliTrialCellCycleModel,
            OutputCellCycleModelParameters,
            rParamsFile);
    }

};
void register_LabelDependentBernoulliTrialCellCycleModel_class(py::module &m){
py::class_<LabelDependentBernoulliTrialCellCycleModel , LabelDependentBernoulliTrialCellCycleModel_Overloads , boost::shared_ptr<LabelDependentBernoulliTrialCellCycleModel >  , AbstractCellCycleModel  >(m, "LabelDependentBernoulliTrialCellCycleModel")
        .def(py::init< >())
        .def(
            "ReadyToDivide", 
            (bool(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::ReadyToDivide, 
            " "  )
        .def(
            "CreateCellCycleModel", 
            (::AbstractCellCycleModel *(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::CreateCellCycleModel, 
            " "  , py::return_value_policy::reference)
        .def(
            "SetDivisionProbability", 
            (void(LabelDependentBernoulliTrialCellCycleModel::*)(double)) &LabelDependentBernoulliTrialCellCycleModel::SetDivisionProbability, 
            " " , py::arg("divisionProbability") )
        .def(
            "GetLabelledDivisionProbability", 
            (double(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::GetLabelledDivisionProbability, 
            " "  )
        .def(
            "SetLabelledDivisionProbability", 
            (void(LabelDependentBernoulliTrialCellCycleModel::*)(double)) &LabelDependentBernoulliTrialCellCycleModel::SetLabelledDivisionProbability, 
            " " , py::arg("labelledDivisionProbability") )
        .def(
            "GetDivisionProbability", 
            (double(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::GetDivisionProbability, 
            " "  )
        .def(
            "SetMinimumDivisionAge", 
            (void(LabelDependentBernoulliTrialCellCycleModel::*)(double)) &LabelDependentBernoulliTrialCellCycleModel::SetMinimumDivisionAge, 
            " " , py::arg("minimumDivisionAge") )
        .def(
            "GetMinimumDivisionAge", 
            (double(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::GetMinimumDivisionAge, 
            " "  )
        .def(
            "GetAverageTransitCellCycleTime", 
            (double(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::GetAverageTransitCellCycleTime, 
            " "  )
        .def(
            "GetAverageStemCellCycleTime", 
            (double(LabelDependentBernoulliTrialCellCycleModel::*)()) &LabelDependentBernoulliTrialCellCycleModel::GetAverageStemCellCycleTime, 
            " "  )
        .def(
            "OutputCellCycleModelParameters", 
            (void(LabelDependentBernoulliTrialCellCycleModel::*)(::out_stream &)) &LabelDependentBernoulliTrialCellCycleModel::OutputCellCycleModelParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
