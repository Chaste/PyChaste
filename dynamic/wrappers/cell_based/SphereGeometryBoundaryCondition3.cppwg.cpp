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

#include "SphereGeometryBoundaryCondition3.cppwg.hpp"

namespace py = pybind11;
typedef SphereGeometryBoundaryCondition<3 > SphereGeometryBoundaryCondition3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class SphereGeometryBoundaryCondition3_Overloads : public SphereGeometryBoundaryCondition3{
    public:
    using SphereGeometryBoundaryCondition3::SphereGeometryBoundaryCondition;
    void ImposeBoundaryCondition(::std::map<Node<3> *, boost::numeric::ublas::c_vector<double, 3>> const & rOldLocations) override {
        PYBIND11_OVERRIDE(
            void,
            SphereGeometryBoundaryCondition3,
            ImposeBoundaryCondition,
            rOldLocations);
    }
    bool VerifyBoundaryCondition() override {
        PYBIND11_OVERRIDE(
            bool,
            SphereGeometryBoundaryCondition3,
            VerifyBoundaryCondition,
            );
    }
    void OutputCellPopulationBoundaryConditionParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            SphereGeometryBoundaryCondition3,
            OutputCellPopulationBoundaryConditionParameters,
            rParamsFile);
    }

    static SphereGeometryBoundaryCondition3 create(AbstractCellPopulation<3, 3> *pCellPopulation,
                                                   py::array_t<double> centre_array,
                                                   double radius,
                                                   double distance = 1.0e-5)
    {
        c_vector<double, 3> centre{array_to_c_vector<double, 3>(centre_array)};
        return SphereGeometryBoundaryCondition3(pCellPopulation, centre, radius, distance);
    }
};

void register_SphereGeometryBoundaryCondition3_class(py::module &m)
{
    py::class_<SphereGeometryBoundaryCondition3,
               SphereGeometryBoundaryCondition3_Overloads,
               boost::shared_ptr<SphereGeometryBoundaryCondition3>,
               AbstractCellPopulationBoundaryCondition<3, 3>>(m, "SphereGeometryBoundaryCondition3")
        .def(py::init(&SphereGeometryBoundaryCondition3_Overloads::create),
             py::arg("pCellPopulation"),
             py::arg("centre"),
             py::arg("radius"),
             py::arg("distance") = 1.0000000000000000E-5)
        .def("rGetCentreOfSphere",
             &SphereGeometryBoundaryCondition3::rGetCentreOfSphere,
             py::return_value_policy::reference)
        .def(
            "GetRadiusOfSphere",
            (double(SphereGeometryBoundaryCondition3::*)() const) & SphereGeometryBoundaryCondition3::GetRadiusOfSphere,
            " ")
        .def(
            "ImposeBoundaryCondition",
            (void(SphereGeometryBoundaryCondition3::*)(::std::map<Node<3> *, boost::numeric::ublas::c_vector<double, 3>> const &)) & SphereGeometryBoundaryCondition3::ImposeBoundaryCondition,
            " ", py::arg("rOldLocations"))
        .def(
            "VerifyBoundaryCondition",
            (bool(SphereGeometryBoundaryCondition3::*)()) & SphereGeometryBoundaryCondition3::VerifyBoundaryCondition,
            " ")
        .def(
            "OutputCellPopulationBoundaryConditionParameters",
            (void(SphereGeometryBoundaryCondition3::*)(::out_stream &)) & SphereGeometryBoundaryCondition3::OutputCellPopulationBoundaryConditionParameters,
            " ", py::arg("rParamsFile"));
}
