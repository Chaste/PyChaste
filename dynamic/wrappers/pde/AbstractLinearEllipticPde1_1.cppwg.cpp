#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractLinearEllipticPde.hpp"

#include "AbstractLinearEllipticPde1_1.cppwg.hpp"

namespace py = pybind11;
typedef AbstractLinearEllipticPde<1,1 > AbstractLinearEllipticPde1_1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::numeric::ublas::c_matrix<double, 1, 1> _boost_numeric_ublas_c_matrix_lt_double_1_1_gt_;

class AbstractLinearEllipticPde1_1_Overloads : public AbstractLinearEllipticPde1_1{
    public:
    using AbstractLinearEllipticPde1_1::AbstractLinearEllipticPde;
    double ComputeConstantInUSourceTerm(::ChastePoint<1> const & rX, ::Element<1, 1> * pElement) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractLinearEllipticPde1_1,
            ComputeConstantInUSourceTerm,
            rX, 
pElement);
    }
    double ComputeLinearInUCoeffInSourceTerm(::ChastePoint<1> const & rX, ::Element<1, 1> * pElement) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractLinearEllipticPde1_1,
            ComputeLinearInUCoeffInSourceTerm,
            rX, 
pElement);
    }
    ::boost::numeric::ublas::c_matrix<double, 1, 1> ComputeDiffusionTerm(::ChastePoint<1> const & rX) override {
        PYBIND11_OVERLOAD_PURE(
            _boost_numeric_ublas_c_matrix_lt_double_1_1_gt_,
            AbstractLinearEllipticPde1_1,
            ComputeDiffusionTerm,
            rX);
    }
    double ComputeConstantInUSourceTermAtNode(::Node<1> const & rNode) override {
        PYBIND11_OVERLOAD(
            double,
            AbstractLinearEllipticPde1_1,
            ComputeConstantInUSourceTermAtNode,
            rNode);
    }
    double ComputeLinearInUCoeffInSourceTermAtNode(::Node<1> const & rNode) override {
        PYBIND11_OVERLOAD(
            double,
            AbstractLinearEllipticPde1_1,
            ComputeLinearInUCoeffInSourceTermAtNode,
            rNode);
    }

};
void register_AbstractLinearEllipticPde1_1_class(py::module &m){
py::class_<AbstractLinearEllipticPde1_1 , AbstractLinearEllipticPde1_1_Overloads , boost::shared_ptr<AbstractLinearEllipticPde1_1 >   >(m, "AbstractLinearEllipticPde1_1")
        .def(py::init< >())
        .def(
            "ComputeConstantInUSourceTerm", 
            (double(AbstractLinearEllipticPde1_1::*)(::ChastePoint<1> const &, ::Element<1, 1> *)) &AbstractLinearEllipticPde1_1::ComputeConstantInUSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement") )
        .def(
            "ComputeLinearInUCoeffInSourceTerm", 
            (double(AbstractLinearEllipticPde1_1::*)(::ChastePoint<1> const &, ::Element<1, 1> *)) &AbstractLinearEllipticPde1_1::ComputeLinearInUCoeffInSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement") )
        .def(
            "ComputeDiffusionTerm", 
            (::boost::numeric::ublas::c_matrix<double, 1, 1>(AbstractLinearEllipticPde1_1::*)(::ChastePoint<1> const &)) &AbstractLinearEllipticPde1_1::ComputeDiffusionTerm, 
            " " , py::arg("rX") )
        .def(
            "ComputeConstantInUSourceTermAtNode", 
            (double(AbstractLinearEllipticPde1_1::*)(::Node<1> const &)) &AbstractLinearEllipticPde1_1::ComputeConstantInUSourceTermAtNode, 
            " " , py::arg("rNode") )
        .def(
            "ComputeLinearInUCoeffInSourceTermAtNode", 
            (double(AbstractLinearEllipticPde1_1::*)(::Node<1> const &)) &AbstractLinearEllipticPde1_1::ComputeLinearInUCoeffInSourceTermAtNode, 
            " " , py::arg("rNode") )
    ;
}
