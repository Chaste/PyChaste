#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ChastePoint.hpp"

#include "ChastePoint1.cppwg.hpp"

namespace py = pybind11;
typedef ChastePoint<1 > ChastePoint1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_ChastePoint1_class(py::module &m){
py::class_<ChastePoint1  , boost::shared_ptr<ChastePoint1 >   >(m, "ChastePoint1")
        .def(py::init<double, double, double >(), py::arg("v1") = 0, py::arg("v2") = 0, py::arg("v3") = 0)
        .def(py::init<::std::vector<double> >(), py::arg("coords"))
        .def(py::init<::boost::numeric::ublas::c_vector<double, 1> >(), py::arg("location"))
        .def(
            "rGetLocation", 
            (::boost::numeric::ublas::c_vector<double, 1> &(ChastePoint1::*)()) &ChastePoint1::rGetLocation, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetLocation", 
            (::boost::numeric::ublas::c_vector<double, 1> const &(ChastePoint1::*)() const ) &ChastePoint1::rGetLocation, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetWithDefault", 
            (double(ChastePoint1::*)(unsigned int, double) const ) &ChastePoint1::GetWithDefault, 
            " " , py::arg("i"), py::arg("def") = 0. )
        .def(
            "SetCoordinate", 
            (void(ChastePoint1::*)(unsigned int, double)) &ChastePoint1::SetCoordinate, 
            " " , py::arg("i"), py::arg("value") )
        .def(
            "IsSamePoint", 
            (bool(ChastePoint1::*)(::ChastePoint<1> const &) const ) &ChastePoint1::IsSamePoint, 
            " " , py::arg("rPoint") )
    ;
}
