#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ConstBoundaryCondition.hpp"

#include "ConstBoundaryCondition1.cppwg.hpp"

namespace py = pybind11;
typedef ConstBoundaryCondition<1 > ConstBoundaryCondition1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class ConstBoundaryCondition1_Overloads : public ConstBoundaryCondition1{
    public:
    using ConstBoundaryCondition1::ConstBoundaryCondition;
    double GetValue(::ChastePoint<1> const & rX) const  override {
        PYBIND11_OVERRIDE(
            double,
            ConstBoundaryCondition1,
            GetValue,
            rX);
    }

};
void register_ConstBoundaryCondition1_class(py::module &m){
py::class_<ConstBoundaryCondition1 , ConstBoundaryCondition1_Overloads , boost::shared_ptr<ConstBoundaryCondition1 >  , AbstractBoundaryCondition<1>  >(m, "ConstBoundaryCondition1")
        .def(py::init<double const >(), py::arg("value"))
        .def(
            "GetValue", 
            (double(ConstBoundaryCondition1::*)(::ChastePoint<1> const &) const ) &ConstBoundaryCondition1::GetValue, 
            " " , py::arg("rX") )
    ;
}
