#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "AttractingPlaneBoundaryCondition.hpp"

#include "AttractingPlaneBoundaryCondition3_3.cppwg.hpp"

namespace py = pybind11;
typedef AttractingPlaneBoundaryCondition<3, 3> AttractingPlaneBoundaryCondition3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class AttractingPlaneBoundaryCondition3_3_Overloads : public AttractingPlaneBoundaryCondition3_3
{
public:
    using AttractingPlaneBoundaryCondition3_3::AttractingPlaneBoundaryCondition;
    void ImposeBoundaryCondition(::std::map<Node<3> *, boost::numeric::ublas::c_vector<double, 3>, std::less<Node<3> *>, std::allocator<std::pair<Node<3> *const, boost::numeric::ublas::c_vector<double, 3>>>> const &rOldLocations) override
    {
        PYBIND11_OVERRIDE(
            void,
            AttractingPlaneBoundaryCondition3_3,
            ImposeBoundaryCondition,
            rOldLocations);
    }
    bool VerifyBoundaryCondition() override
    {
        PYBIND11_OVERRIDE(
            bool,
            AttractingPlaneBoundaryCondition3_3,
            VerifyBoundaryCondition, );
    }
    void OutputCellPopulationBoundaryConditionParameters(::out_stream &rParamsFile) override
    {
        PYBIND11_OVERRIDE(
            void,
            AttractingPlaneBoundaryCondition3_3,
            OutputCellPopulationBoundaryConditionParameters,
            rParamsFile);
    }

    static AttractingPlaneBoundaryCondition3_3 create(AbstractCellPopulation<3, 3> *pCellPopulation,
                                                      py::array_t<double> point_array,
                                                      py::array_t<double> normal_array)
    {
        c_vector<double, 3> point{array_to_c_vector<double, 3>(point_array)};
        c_vector<double, 3> normal{array_to_c_vector<double, 3>(normal_array)};
        return AttractingPlaneBoundaryCondition3_3(pCellPopulation, point, normal);
    }
};

void register_AttractingPlaneBoundaryCondition3_3_class(py::module &m)
{
    py::class_<AttractingPlaneBoundaryCondition<3, 3>,
               AttractingPlaneBoundaryCondition3_3_Overloads,
               boost::shared_ptr<AttractingPlaneBoundaryCondition3_3>,
               AbstractCellPopulationBoundaryCondition<3, 3>>(m, "AttractingPlaneBoundaryCondition3_3")
        .def(py::init(&AttractingPlaneBoundaryCondition3_3_Overloads::create),
             py::arg("pCellPopulation"),
             py::arg("point"),
             py::arg("normal"))
        .def("rGetPointOnPlane",
             &AttractingPlaneBoundaryCondition<3, 3>::rGetPointOnPlane,
             py::return_value_policy::reference)
        .def("rGetNormalToPlane",
             &AttractingPlaneBoundaryCondition<3, 3>::rGetNormalToPlane,
             py::return_value_policy::reference)
        .def(
            "SetUseJiggledNodesOnPlane",
            (void(AttractingPlaneBoundaryCondition3_3::*)(bool)) & AttractingPlaneBoundaryCondition3_3::SetUseJiggledNodesOnPlane,
            " ", py::arg("useJiggledNodesOnPlane"))
        .def(
            "GetUseJiggledNodesOnPlane",
            (bool(AttractingPlaneBoundaryCondition3_3::*)()) & AttractingPlaneBoundaryCondition3_3::GetUseJiggledNodesOnPlane,
            " ")
        .def(
            "ImposeBoundaryCondition",
            (void(AttractingPlaneBoundaryCondition3_3::*)(::std::map<Node<3> *, boost::numeric::ublas::c_vector<double, 3>, std::less<Node<3> *>, std::allocator<std::pair<Node<3> *const, boost::numeric::ublas::c_vector<double, 3>>>> const &)) & AttractingPlaneBoundaryCondition3_3::ImposeBoundaryCondition,
            " ", py::arg("rOldLocations"))
        .def(
            "VerifyBoundaryCondition",
            (bool(AttractingPlaneBoundaryCondition3_3::*)()) & AttractingPlaneBoundaryCondition3_3::VerifyBoundaryCondition,
            " ")
        .def(
            "OutputCellPopulationBoundaryConditionParameters",
            (void(AttractingPlaneBoundaryCondition3_3::*)(::out_stream &)) & AttractingPlaneBoundaryCondition3_3::OutputCellPopulationBoundaryConditionParameters,
            " ", py::arg("rParamsFile"))
        .def(
            "SetPointOnPlane",
            (void(AttractingPlaneBoundaryCondition3_3::*)(::boost::numeric::ublas::c_vector<double, 3> const &)) & AttractingPlaneBoundaryCondition3_3::SetPointOnPlane,
            " ", py::arg("rPoint"))
        .def(
            "SetAttractionThreshold",
            (void(AttractingPlaneBoundaryCondition3_3::*)(double)) & AttractingPlaneBoundaryCondition3_3::SetAttractionThreshold,
            " ", py::arg("attractionThreshold"));
}
