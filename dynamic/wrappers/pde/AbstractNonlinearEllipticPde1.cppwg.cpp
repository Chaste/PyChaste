#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractNonlinearEllipticPde.hpp"

#include "AbstractNonlinearEllipticPde1.cppwg.hpp"

namespace py = pybind11;
typedef AbstractNonlinearEllipticPde<1 > AbstractNonlinearEllipticPde1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::numeric::ublas::c_matrix<double, 1, 1> _boost_numeric_ublas_c_matrix_lt_double_1_1_gt_;
typedef ::boost::numeric::ublas::c_matrix<double, 1, 1> _boost_numeric_ublas_c_matrix_lt_double_1_1_gt_;

class AbstractNonlinearEllipticPde1_Overloads : public AbstractNonlinearEllipticPde1{
    public:
    using AbstractNonlinearEllipticPde1::AbstractNonlinearEllipticPde;
    double ComputeLinearSourceTerm(::ChastePoint<1> const & rX) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractNonlinearEllipticPde1,
            ComputeLinearSourceTerm,
            rX);
    }
    double ComputeNonlinearSourceTerm(::ChastePoint<1> const & rX, double u) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractNonlinearEllipticPde1,
            ComputeNonlinearSourceTerm,
            rX, 
u);
    }
    ::boost::numeric::ublas::c_matrix<double, 1, 1> ComputeDiffusionTerm(::ChastePoint<1> const & rX, double u) override {
        PYBIND11_OVERLOAD_PURE(
            _boost_numeric_ublas_c_matrix_lt_double_1_1_gt_,
            AbstractNonlinearEllipticPde1,
            ComputeDiffusionTerm,
            rX, 
u);
    }
    ::boost::numeric::ublas::c_matrix<double, 1, 1> ComputeDiffusionTermPrime(::ChastePoint<1> const & rX, double u) override {
        PYBIND11_OVERLOAD_PURE(
            _boost_numeric_ublas_c_matrix_lt_double_1_1_gt_,
            AbstractNonlinearEllipticPde1,
            ComputeDiffusionTermPrime,
            rX, 
u);
    }
    double ComputeNonlinearSourceTermPrime(::ChastePoint<1> const & rX, double u) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractNonlinearEllipticPde1,
            ComputeNonlinearSourceTermPrime,
            rX, 
u);
    }

};
void register_AbstractNonlinearEllipticPde1_class(py::module &m){
py::class_<AbstractNonlinearEllipticPde1 , AbstractNonlinearEllipticPde1_Overloads , boost::shared_ptr<AbstractNonlinearEllipticPde1 >   >(m, "AbstractNonlinearEllipticPde1")
        .def(py::init< >())
        .def(
            "ComputeLinearSourceTerm", 
            (double(AbstractNonlinearEllipticPde1::*)(::ChastePoint<1> const &)) &AbstractNonlinearEllipticPde1::ComputeLinearSourceTerm, 
            " " , py::arg("rX") )
        .def(
            "ComputeNonlinearSourceTerm", 
            (double(AbstractNonlinearEllipticPde1::*)(::ChastePoint<1> const &, double)) &AbstractNonlinearEllipticPde1::ComputeNonlinearSourceTerm, 
            " " , py::arg("rX"), py::arg("u") )
        .def(
            "ComputeDiffusionTerm", 
            (::boost::numeric::ublas::c_matrix<double, 1, 1>(AbstractNonlinearEllipticPde1::*)(::ChastePoint<1> const &, double)) &AbstractNonlinearEllipticPde1::ComputeDiffusionTerm, 
            " " , py::arg("rX"), py::arg("u") )
        .def(
            "ComputeDiffusionTermPrime", 
            (::boost::numeric::ublas::c_matrix<double, 1, 1>(AbstractNonlinearEllipticPde1::*)(::ChastePoint<1> const &, double)) &AbstractNonlinearEllipticPde1::ComputeDiffusionTermPrime, 
            " " , py::arg("rX"), py::arg("u") )
        .def(
            "ComputeNonlinearSourceTermPrime", 
            (double(AbstractNonlinearEllipticPde1::*)(::ChastePoint<1> const &, double)) &AbstractNonlinearEllipticPde1::ComputeNonlinearSourceTermPrime, 
            " " , py::arg("rX"), py::arg("u") )
    ;
}
