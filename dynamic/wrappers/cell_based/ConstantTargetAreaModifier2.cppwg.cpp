#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ConstantTargetAreaModifier.hpp"

#include "ConstantTargetAreaModifier2.cppwg.hpp"

namespace py = pybind11;
typedef ConstantTargetAreaModifier<2 > ConstantTargetAreaModifier2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class ConstantTargetAreaModifier2_Overloads : public ConstantTargetAreaModifier2{
    public:
    using ConstantTargetAreaModifier2::ConstantTargetAreaModifier;
    void UpdateTargetAreaOfCell(::CellPtr const pCell) override {
        PYBIND11_OVERRIDE(
            void,
            ConstantTargetAreaModifier2,
            UpdateTargetAreaOfCell,
            pCell);
    }
    void OutputSimulationModifierParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            ConstantTargetAreaModifier2,
            OutputSimulationModifierParameters,
            rParamsFile);
    }

};
void register_ConstantTargetAreaModifier2_class(py::module &m){
py::class_<ConstantTargetAreaModifier2 , ConstantTargetAreaModifier2_Overloads , boost::shared_ptr<ConstantTargetAreaModifier2 >  , AbstractTargetAreaModifier<2>  >(m, "ConstantTargetAreaModifier2")
        .def(py::init< >())
        .def(
            "UpdateTargetAreaOfCell", 
            (void(ConstantTargetAreaModifier2::*)(::CellPtr const)) &ConstantTargetAreaModifier2::UpdateTargetAreaOfCell, 
            " " , py::arg("pCell") )
        .def(
            "OutputSimulationModifierParameters", 
            (void(ConstantTargetAreaModifier2::*)(::out_stream &)) &ConstantTargetAreaModifier2::OutputSimulationModifierParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
