#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractBoundaryCondition.hpp"

#include "AbstractBoundaryCondition1.cppwg.hpp"

namespace py = pybind11;
typedef AbstractBoundaryCondition<1 > AbstractBoundaryCondition1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class AbstractBoundaryCondition1_Overloads : public AbstractBoundaryCondition1{
    public:
    using AbstractBoundaryCondition1::AbstractBoundaryCondition;
    double GetValue(::ChastePoint<1> const & rX) const  override {
        PYBIND11_OVERRIDE_PURE(
            double,
            AbstractBoundaryCondition1,
            GetValue,
            rX);
    }

};
void register_AbstractBoundaryCondition1_class(py::module &m){
py::class_<AbstractBoundaryCondition1 , AbstractBoundaryCondition1_Overloads , boost::shared_ptr<AbstractBoundaryCondition1 >   >(m, "AbstractBoundaryCondition1")
        .def(py::init< >())
        .def(
            "GetValue", 
            (double(AbstractBoundaryCondition1::*)(::ChastePoint<1> const &) const ) &AbstractBoundaryCondition1::GetValue, 
            " " , py::arg("rX") )
    ;
}
