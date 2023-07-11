#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "PlaneBasedCellKiller.hpp"

#include "PlaneBasedCellKiller3.cppwg.hpp"

namespace py = pybind11;
typedef PlaneBasedCellKiller<3 > PlaneBasedCellKiller3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class PlaneBasedCellKiller3_Overloads : public PlaneBasedCellKiller3{
    public:
    using PlaneBasedCellKiller3::PlaneBasedCellKiller;
    void CheckAndLabelCellsForApoptosisOrDeath() override {
        PYBIND11_OVERRIDE(
            void,
            PlaneBasedCellKiller3,
            CheckAndLabelCellsForApoptosisOrDeath,
            );
    }
    void OutputCellKillerParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            PlaneBasedCellKiller3,
            OutputCellKillerParameters,
            rParamsFile);
    }

    static PlaneBasedCellKiller3 create(AbstractCellPopulation<3, 3> *pCellPopulation,
                                            py::array_t<double> point_array,
                                            py::array_t<double> normal_array)
    {
        c_vector<double, 3> point {array_to_c_vector<double, 3>(point_array)};
        c_vector<double, 3> normal {array_to_c_vector<double, 3>(normal_array)};
        return PlaneBasedCellKiller3(pCellPopulation, point, normal);
    }
};

void register_PlaneBasedCellKiller3_class(py::module &m){
py::class_<PlaneBasedCellKiller3 , PlaneBasedCellKiller3_Overloads , boost::shared_ptr<PlaneBasedCellKiller3 >  , AbstractCellKiller<3>  >(m, "PlaneBasedCellKiller3")
        .def(py::init(&PlaneBasedCellKiller3_Overloads::create))
        .def(
            "rGetPointOnPlane", 
            (::boost::numeric::ublas::c_vector<double, 3> const &(PlaneBasedCellKiller3::*)() const ) &PlaneBasedCellKiller3::rGetPointOnPlane, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetNormalToPlane", 
            (::boost::numeric::ublas::c_vector<double, 3> const &(PlaneBasedCellKiller3::*)() const ) &PlaneBasedCellKiller3::rGetNormalToPlane, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "CheckAndLabelCellsForApoptosisOrDeath", 
            (void(PlaneBasedCellKiller3::*)()) &PlaneBasedCellKiller3::CheckAndLabelCellsForApoptosisOrDeath, 
            " "  )
        .def(
            "OutputCellKillerParameters", 
            (void(PlaneBasedCellKiller3::*)(::out_stream &)) &PlaneBasedCellKiller3::OutputCellKillerParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
