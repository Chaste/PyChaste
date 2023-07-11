#include "PlaneBoundaryCondition2_2.cppwg.hpp"

#include "PythonUblasObjectConverters.hpp"

#include "PlaneBoundaryCondition.hpp"
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"

#include <pybind11/numpy.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <map>
#include <set>
#include <string>
#include <vector>

namespace py = pybind11;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

typedef PlaneBoundaryCondition<2, 2> PlaneBoundaryCondition2_2;
class PlaneBoundaryCondition2_2_Overloads : public PlaneBoundaryCondition2_2
{
public:
    using PlaneBoundaryCondition2_2::PlaneBoundaryCondition;
    void ImposeBoundaryCondition(::std::map<Node<2> *, c_vector<double, 2>, std::less<Node<2> *>, std::allocator<std::pair<Node<2> *const, c_vector<double, 2>>>> const &rOldLocations) override
    {
        PYBIND11_OVERRIDE(
            void,
            PlaneBoundaryCondition2_2,
            ImposeBoundaryCondition,
            rOldLocations);
    }
    bool VerifyBoundaryCondition() override
    {
        PYBIND11_OVERRIDE(
            bool,
            PlaneBoundaryCondition2_2,
            VerifyBoundaryCondition, );
    }
    void OutputCellPopulationBoundaryConditionParameters(::out_stream &rParamsFile) override
    {
        PYBIND11_OVERRIDE(
            void,
            PlaneBoundaryCondition2_2,
            OutputCellPopulationBoundaryConditionParameters,
            rParamsFile);
    }

    static PlaneBoundaryCondition2_2 create(AbstractCellPopulation<2, 2> *pCellPopulation,
                                            py::array_t<double> point_array,
                                            py::array_t<double> normal_array)
    {
        c_vector<double, 2> point {array_to_c_vector<double, 2>(point_array)};
        c_vector<double, 2> normal {array_to_c_vector<double, 2>(normal_array)};
        return PlaneBoundaryCondition2_2(pCellPopulation, point, normal);
    }
};

void register_PlaneBoundaryCondition2_2_class(py::module &m)
{
    py::class_<PlaneBoundaryCondition<2, 2>,
               PlaneBoundaryCondition2_2_Overloads,
               AbstractCellPopulationBoundaryCondition<2, 2>,
               boost::shared_ptr<PlaneBoundaryCondition<2, 2>>>(m, "PlaneBoundaryCondition2_2")
        .def(py::init(&PlaneBoundaryCondition2_2_Overloads::create))
        .def(
            "rGetPointOnPlane",
            (c_vector<double, 2> const &(PlaneBoundaryCondition2_2::*)() const) & PlaneBoundaryCondition2_2::rGetPointOnPlane,
            " ", py::return_value_policy::reference_internal)
        .def(
            "rGetNormalToPlane",
            (c_vector<double, 2> const &(PlaneBoundaryCondition2_2::*)() const) & PlaneBoundaryCondition2_2::rGetNormalToPlane,
            " ", py::return_value_policy::reference_internal)
        .def(
            "SetUseJiggledNodesOnPlane",
            (void(PlaneBoundaryCondition2_2::*)(bool)) & PlaneBoundaryCondition2_2::SetUseJiggledNodesOnPlane,
            " ", py::arg("useJiggledNodesOnPlane"))
        .def(
            "GetUseJiggledNodesOnPlane",
            (bool(PlaneBoundaryCondition2_2::*)()) & PlaneBoundaryCondition2_2::GetUseJiggledNodesOnPlane,
            " ")
        .def(
            "ImposeBoundaryCondition",
            (void(PlaneBoundaryCondition2_2::*)(::std::map<Node<2> *, c_vector<double, 2>, std::less<Node<2> *>, std::allocator<std::pair<Node<2> *const, c_vector<double, 2>>>> const &)) & PlaneBoundaryCondition2_2::ImposeBoundaryCondition,
            " ", py::arg("rOldLocations"))
        .def(
            "VerifyBoundaryCondition",
            (bool(PlaneBoundaryCondition2_2::*)()) & PlaneBoundaryCondition2_2::VerifyBoundaryCondition,
            " ")
        .def(
            "OutputCellPopulationBoundaryConditionParameters",
            (void(PlaneBoundaryCondition2_2::*)(::out_stream &)) & PlaneBoundaryCondition2_2::OutputCellPopulationBoundaryConditionParameters,
            " ", py::arg("rParamsFile"));
}
