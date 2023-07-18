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

#include "PlaneBasedCellKiller2.cppwg.hpp"

namespace py = pybind11;
typedef PlaneBasedCellKiller<2 > PlaneBasedCellKiller2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class PlaneBasedCellKiller2_Overloads : public PlaneBasedCellKiller2{
    public:
    using PlaneBasedCellKiller2::PlaneBasedCellKiller;
    void CheckAndLabelCellsForApoptosisOrDeath() override {
        PYBIND11_OVERRIDE(
            void,
            PlaneBasedCellKiller2,
            CheckAndLabelCellsForApoptosisOrDeath,
            );
    }
    void OutputCellKillerParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            PlaneBasedCellKiller2,
            OutputCellKillerParameters,
            rParamsFile);
    }

    static PlaneBasedCellKiller2 create(AbstractCellPopulation<2, 2> *pCellPopulation,
                                            py::array_t<double> point_array,
                                            py::array_t<double> normal_array)
    {
        c_vector<double, 2> point {array_to_c_vector<double, 2>(point_array)};
        c_vector<double, 2> normal {array_to_c_vector<double, 2>(normal_array)};
        return PlaneBasedCellKiller2(pCellPopulation, point, normal);
    }
};

void register_PlaneBasedCellKiller2_class(py::module &m){
py::class_<PlaneBasedCellKiller2 , PlaneBasedCellKiller2_Overloads , boost::shared_ptr<PlaneBasedCellKiller2 >  , AbstractCellKiller<2>  >(m, "PlaneBasedCellKiller2")
        .def(py::init(&PlaneBasedCellKiller2_Overloads::create),
             py::arg("pCellPopulation"),
             py::arg("point"),
             py::arg("normal"))
        .def(
            "rGetPointOnPlane", 
            (::boost::numeric::ublas::c_vector<double, 2> const &(PlaneBasedCellKiller2::*)() const ) &PlaneBasedCellKiller2::rGetPointOnPlane, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetNormalToPlane", 
            (::boost::numeric::ublas::c_vector<double, 2> const &(PlaneBasedCellKiller2::*)() const ) &PlaneBasedCellKiller2::rGetNormalToPlane, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "CheckAndLabelCellsForApoptosisOrDeath", 
            (void(PlaneBasedCellKiller2::*)()) &PlaneBasedCellKiller2::CheckAndLabelCellsForApoptosisOrDeath, 
            " "  )
        .def(
            "OutputCellKillerParameters", 
            (void(PlaneBasedCellKiller2::*)(::out_stream &)) &PlaneBasedCellKiller2::OutputCellKillerParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
