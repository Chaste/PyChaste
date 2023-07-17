#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "PythonUblasObjectConverters.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "SphereGeometryBoundaryCondition.hpp"

#include "SphereGeometryBoundaryCondition2.cppwg.hpp"

namespace py = pybind11;
typedef SphereGeometryBoundaryCondition<2 > SphereGeometryBoundaryCondition2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class SphereGeometryBoundaryCondition2_Overloads : public SphereGeometryBoundaryCondition2{
    public:
    using SphereGeometryBoundaryCondition2::SphereGeometryBoundaryCondition;
    void ImposeBoundaryCondition(::std::map<Node<2> *, boost::numeric::ublas::c_vector<double, 2>> const & rOldLocations) override {
        PYBIND11_OVERRIDE(
            void,
            SphereGeometryBoundaryCondition2,
            ImposeBoundaryCondition,
            rOldLocations);
    }
    bool VerifyBoundaryCondition() override {
        PYBIND11_OVERRIDE(
            bool,
            SphereGeometryBoundaryCondition2,
            VerifyBoundaryCondition,
            );
    }
    void OutputCellPopulationBoundaryConditionParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            SphereGeometryBoundaryCondition2,
            OutputCellPopulationBoundaryConditionParameters,
            rParamsFile);
    }

    static SphereGeometryBoundaryCondition2 create(AbstractCellPopulation<2, 2> *pCellPopulation,
                                                   py::array_t<double> centre_array,
                                                   double radius,
                                                   double distance = 1.0e-5)
    {
        c_vector<double, 2> centre{array_to_c_vector<double, 2>(centre_array)};
        return SphereGeometryBoundaryCondition2(pCellPopulation, centre, radius, distance);
    }
};

void register_SphereGeometryBoundaryCondition2_class(py::module &m)
{
    py::class_<SphereGeometryBoundaryCondition2,
               SphereGeometryBoundaryCondition2_Overloads,
               boost::shared_ptr<SphereGeometryBoundaryCondition2>,
               AbstractCellPopulationBoundaryCondition<2, 2>>(m, "SphereGeometryBoundaryCondition2")
        .def(py::init(&SphereGeometryBoundaryCondition2_Overloads::create),
             py::arg("pCellPopulation"),
             py::arg("centre"),
             py::arg("radius"),
             py::arg("distance") = 1.0000000000000000E-5)
        .def("rGetCentreOfSphere",
             &SphereGeometryBoundaryCondition2::rGetCentreOfSphere,
             py::return_value_policy::reference)
        .def(
            "GetRadiusOfSphere",
            (double(SphereGeometryBoundaryCondition2::*)() const) & SphereGeometryBoundaryCondition2::GetRadiusOfSphere,
            " ")
        .def(
            "ImposeBoundaryCondition",
            (void(SphereGeometryBoundaryCondition2::*)(::std::map<Node<2> *, boost::numeric::ublas::c_vector<double, 2>> const &)) & SphereGeometryBoundaryCondition2::ImposeBoundaryCondition,
            " ", py::arg("rOldLocations"))
        .def(
            "VerifyBoundaryCondition",
            (bool(SphereGeometryBoundaryCondition2::*)()) & SphereGeometryBoundaryCondition2::VerifyBoundaryCondition,
            " ")
        .def(
            "OutputCellPopulationBoundaryConditionParameters",
            (void(SphereGeometryBoundaryCondition2::*)(::out_stream &)) & SphereGeometryBoundaryCondition2::OutputCellPopulationBoundaryConditionParameters,
            " ", py::arg("rParamsFile"));
}
