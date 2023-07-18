#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "PlaneBoundaryCondition.hpp"

#include "PlaneBoundaryCondition3_3.cppwg.hpp"

namespace py = pybind11;
typedef PlaneBoundaryCondition<3, 3> PlaneBoundaryCondition3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class PlaneBoundaryCondition3_3_Overloads : public PlaneBoundaryCondition3_3
{
public:
    using PlaneBoundaryCondition3_3::PlaneBoundaryCondition;
    void ImposeBoundaryCondition(::std::map<Node<3> *, boost::numeric::ublas::c_vector<double, 3>, std::less<Node<3> *>, std::allocator<std::pair<Node<3> *const, boost::numeric::ublas::c_vector<double, 3>>>> const &rOldLocations) override
    {
        PYBIND11_OVERRIDE(
            void,
            PlaneBoundaryCondition3_3,
            ImposeBoundaryCondition,
            rOldLocations);
    }
    bool VerifyBoundaryCondition() override
    {
        PYBIND11_OVERRIDE(
            bool,
            PlaneBoundaryCondition3_3,
            VerifyBoundaryCondition, );
    }
    void OutputCellPopulationBoundaryConditionParameters(::out_stream &rParamsFile) override
    {
        PYBIND11_OVERRIDE(
            void,
            PlaneBoundaryCondition3_3,
            OutputCellPopulationBoundaryConditionParameters,
            rParamsFile);
    }
    static PlaneBoundaryCondition3_3 create(AbstractCellPopulation<3, 3> *pCellPopulation,
                                            py::array_t<double> point_array,
                                            py::array_t<double> normal_array)
    {
        c_vector<double, 3> point{array_to_c_vector<double, 3>(point_array)};
        c_vector<double, 3> normal{array_to_c_vector<double, 3>(normal_array)};
        return PlaneBoundaryCondition3_3(pCellPopulation, point, normal);
    }
};

void register_PlaneBoundaryCondition3_3_class(py::module &m)
{
    py::class_<PlaneBoundaryCondition<3, 3>,
               PlaneBoundaryCondition3_3_Overloads,
               boost::shared_ptr<PlaneBoundaryCondition<3, 3>>,
               AbstractCellPopulationBoundaryCondition<3, 3>>(m, "PlaneBoundaryCondition3_3")

        .def(py::init(&PlaneBoundaryCondition3_3_Overloads::create),
              py::arg("pCellPopulation"),
              py::arg("point"),
              py::arg("normal"))

        .def("rGetPointOnPlane",
             &PlaneBoundaryCondition3_3::rGetPointOnPlane,
             py::return_value_policy::reference)

        .def("rGetNormalToPlane",
             &PlaneBoundaryCondition3_3::rGetNormalToPlane,
             py::return_value_policy::reference)

        .def("SetUseJiggledNodesOnPlane",
             &PlaneBoundaryCondition3_3::SetUseJiggledNodesOnPlane,
             py::arg("useJiggledNodesOnPlane"))

        .def("GetUseJiggledNodesOnPlane",
             &PlaneBoundaryCondition3_3::GetUseJiggledNodesOnPlane)

        .def("ImposeBoundaryCondition",
             &PlaneBoundaryCondition3_3::ImposeBoundaryCondition,
             py::arg("rOldLocations"))

        .def("VerifyBoundaryCondition",
             &PlaneBoundaryCondition3_3::VerifyBoundaryCondition)

        .def("OutputCellPopulationBoundaryConditionParameters",
             &PlaneBoundaryCondition3_3::OutputCellPopulationBoundaryConditionParameters,
             py::arg("rParamsFile"));
}
