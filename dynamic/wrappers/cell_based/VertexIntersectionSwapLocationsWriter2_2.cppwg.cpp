#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractCellPopulation.hpp"
#include "MeshBasedCellPopulation.hpp"
#include "CaBasedCellPopulation.hpp"
#include "ImmersedBoundaryCellPopulation.hpp"
#include "NodeBasedCellPopulation.hpp"
#include "PottsBasedCellPopulation.hpp"
#include "VertexBasedCellPopulation.hpp"
#include "VertexIntersectionSwapLocationsWriter.hpp"

#include "VertexIntersectionSwapLocationsWriter2_2.cppwg.hpp"

namespace py = pybind11;
typedef VertexIntersectionSwapLocationsWriter<2,2 > VertexIntersectionSwapLocationsWriter2_2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class VertexIntersectionSwapLocationsWriter2_2_Overloads : public VertexIntersectionSwapLocationsWriter2_2{
    public:
    using VertexIntersectionSwapLocationsWriter2_2::VertexIntersectionSwapLocationsWriter;
    void Visit(::MeshBasedCellPopulation<2, 2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexIntersectionSwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::CaBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexIntersectionSwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::NodeBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexIntersectionSwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::PottsBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexIntersectionSwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::VertexBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexIntersectionSwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::ImmersedBoundaryCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexIntersectionSwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }

};
void register_VertexIntersectionSwapLocationsWriter2_2_class(py::module &m){
py::class_<VertexIntersectionSwapLocationsWriter2_2 , VertexIntersectionSwapLocationsWriter2_2_Overloads , boost::shared_ptr<VertexIntersectionSwapLocationsWriter2_2 >  , AbstractCellPopulationWriter<2, 2>  >(m, "VertexIntersectionSwapLocationsWriter2_2")
        .def(py::init< >())
        .def(
            "Visit", 
            (void(VertexIntersectionSwapLocationsWriter2_2::*)(::MeshBasedCellPopulation<2, 2> *)) &VertexIntersectionSwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexIntersectionSwapLocationsWriter2_2::*)(::CaBasedCellPopulation<2> *)) &VertexIntersectionSwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexIntersectionSwapLocationsWriter2_2::*)(::NodeBasedCellPopulation<2> *)) &VertexIntersectionSwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexIntersectionSwapLocationsWriter2_2::*)(::PottsBasedCellPopulation<2> *)) &VertexIntersectionSwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexIntersectionSwapLocationsWriter2_2::*)(::VertexBasedCellPopulation<2> *)) &VertexIntersectionSwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexIntersectionSwapLocationsWriter2_2::*)(::ImmersedBoundaryCellPopulation<2> *)) &VertexIntersectionSwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
    ;
}
