#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AveragedSourceEllipticPde.hpp"

#include "AveragedSourceEllipticPde3.cppwg.hpp"

namespace py = pybind11;
typedef AveragedSourceEllipticPde<3 > AveragedSourceEllipticPde3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::numeric::ublas::c_matrix<double, 3, 3> _boost_numeric_ublas_c_matrix_lt_double_3_3_gt_;

class AveragedSourceEllipticPde3_Overloads : public AveragedSourceEllipticPde3{
    public:
    using AveragedSourceEllipticPde3::AveragedSourceEllipticPde;
    void SetupSourceTerms(::TetrahedralMesh<3, 3> & rCoarseMesh, ::std::map<boost::shared_ptr<Cell>, unsigned int> * pCellPdeElementMap) override {
        PYBIND11_OVERRIDE(
            void,
            AveragedSourceEllipticPde3,
            SetupSourceTerms,
            rCoarseMesh, 
pCellPdeElementMap);
    }
    double ComputeConstantInUSourceTerm(::ChastePoint<3> const & rX, ::Element<3, 3> * pElement) override {
        PYBIND11_OVERRIDE(
            double,
            AveragedSourceEllipticPde3,
            ComputeConstantInUSourceTerm,
            rX, 
pElement);
    }
    double ComputeLinearInUCoeffInSourceTerm(::ChastePoint<3> const & rX, ::Element<3, 3> * pElement) override {
        PYBIND11_OVERRIDE(
            double,
            AveragedSourceEllipticPde3,
            ComputeLinearInUCoeffInSourceTerm,
            rX, 
pElement);
    }
    ::boost::numeric::ublas::c_matrix<double, 3, 3> ComputeDiffusionTerm(::ChastePoint<3> const & rX) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_matrix_lt_double_3_3_gt_,
            AveragedSourceEllipticPde3,
            ComputeDiffusionTerm,
            rX);
    }

};
void register_AveragedSourceEllipticPde3_class(py::module &m){
py::class_<AveragedSourceEllipticPde3 , AveragedSourceEllipticPde3_Overloads , boost::shared_ptr<AveragedSourceEllipticPde3 >   >(m, "AveragedSourceEllipticPde3")
        .def(py::init<::AbstractCellPopulation<3, 3> &, double, double >(), py::arg("rCellPopulation"), py::arg("sourceCoefficient") = 0., py::arg("diffusionCoefficient") = 1.)
        .def(
            "rGetCellPopulation", 
            (::AbstractCellPopulation<3, 3> const &(AveragedSourceEllipticPde3::*)() const ) &AveragedSourceEllipticPde3::rGetCellPopulation, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetCoefficient", 
            (double(AveragedSourceEllipticPde3::*)() const ) &AveragedSourceEllipticPde3::GetCoefficient, 
            " "  )
        .def(
            "SetupSourceTerms", 
            (void(AveragedSourceEllipticPde3::*)(::TetrahedralMesh<3, 3> &, ::std::map<boost::shared_ptr<Cell>, unsigned int> *)) &AveragedSourceEllipticPde3::SetupSourceTerms, 
            " " , py::arg("rCoarseMesh"), py::arg("pCellPdeElementMap") = nullptr )
        .def(
            "ComputeConstantInUSourceTerm", 
            (double(AveragedSourceEllipticPde3::*)(::ChastePoint<3> const &, ::Element<3, 3> *)) &AveragedSourceEllipticPde3::ComputeConstantInUSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement") )
        .def(
            "ComputeLinearInUCoeffInSourceTerm", 
            (double(AveragedSourceEllipticPde3::*)(::ChastePoint<3> const &, ::Element<3, 3> *)) &AveragedSourceEllipticPde3::ComputeLinearInUCoeffInSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement") )
        .def(
            "ComputeDiffusionTerm", 
            (::boost::numeric::ublas::c_matrix<double, 3, 3>(AveragedSourceEllipticPde3::*)(::ChastePoint<3> const &)) &AveragedSourceEllipticPde3::ComputeDiffusionTerm, 
            " " , py::arg("rX") )
        .def(
            "GetUptakeRateForElement", 
            (double(AveragedSourceEllipticPde3::*)(unsigned int)) &AveragedSourceEllipticPde3::GetUptakeRateForElement, 
            " " , py::arg("elementIndex") )
    ;
}
