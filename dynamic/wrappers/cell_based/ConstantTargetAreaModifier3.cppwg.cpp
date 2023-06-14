#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ConstantTargetAreaModifier.hpp"

#include "ConstantTargetAreaModifier3.cppwg.hpp"

namespace py = pybind11;
typedef ConstantTargetAreaModifier<3 > ConstantTargetAreaModifier3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class ConstantTargetAreaModifier3_Overloads : public ConstantTargetAreaModifier3{
    public:
    using ConstantTargetAreaModifier3::ConstantTargetAreaModifier;
    void UpdateTargetAreaOfCell(::CellPtr const pCell) override {
        PYBIND11_OVERRIDE(
            void,
            ConstantTargetAreaModifier3,
            UpdateTargetAreaOfCell,
            pCell);
    }
    void OutputSimulationModifierParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            ConstantTargetAreaModifier3,
            OutputSimulationModifierParameters,
            rParamsFile);
    }

};
void register_ConstantTargetAreaModifier3_class(py::module &m){
py::class_<ConstantTargetAreaModifier3 , ConstantTargetAreaModifier3_Overloads , boost::shared_ptr<ConstantTargetAreaModifier3 >  , AbstractTargetAreaModifier<3>  >(m, "ConstantTargetAreaModifier3")
        .def(py::init< >())
        .def(
            "UpdateTargetAreaOfCell", 
            (void(ConstantTargetAreaModifier3::*)(::CellPtr const)) &ConstantTargetAreaModifier3::UpdateTargetAreaOfCell, 
            " " , py::arg("pCell") )
        .def(
            "OutputSimulationModifierParameters", 
            (void(ConstantTargetAreaModifier3::*)(::out_stream &)) &ConstantTargetAreaModifier3::OutputSimulationModifierParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
