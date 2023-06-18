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
#include "NodeBasedCellPopulation.hpp"
#include "PottsBasedCellPopulation.hpp"
#include "VertexBasedCellPopulation.hpp"
#include "CellDivisionLocationsWriter.hpp"

#include "CellDivisionLocationsWriter3_3.cppwg.hpp"

namespace py = pybind11;
typedef CellDivisionLocationsWriter<3,3 > CellDivisionLocationsWriter3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class CellDivisionLocationsWriter3_3_Overloads : public CellDivisionLocationsWriter3_3{
    public:
    using CellDivisionLocationsWriter3_3::CellDivisionLocationsWriter;
    void Visit(::MeshBasedCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellDivisionLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::CaBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellDivisionLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::NodeBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellDivisionLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::PottsBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellDivisionLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::VertexBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellDivisionLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }

};
void register_CellDivisionLocationsWriter3_3_class(py::module &m){
py::class_<CellDivisionLocationsWriter3_3 , CellDivisionLocationsWriter3_3_Overloads , boost::shared_ptr<CellDivisionLocationsWriter3_3 >  , AbstractCellPopulationEventWriter<3, 3>  >(m, "CellDivisionLocationsWriter3_3")
        .def(py::init< >())
        .def(
            "VisitAnyPopulation", 
            (void(CellDivisionLocationsWriter3_3::*)(::AbstractCellPopulation<3, 3> *)) &CellDivisionLocationsWriter3_3::VisitAnyPopulation, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellDivisionLocationsWriter3_3::*)(::MeshBasedCellPopulation<3, 3> *)) &CellDivisionLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellDivisionLocationsWriter3_3::*)(::CaBasedCellPopulation<3> *)) &CellDivisionLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellDivisionLocationsWriter3_3::*)(::NodeBasedCellPopulation<3> *)) &CellDivisionLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellDivisionLocationsWriter3_3::*)(::PottsBasedCellPopulation<3> *)) &CellDivisionLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellDivisionLocationsWriter3_3::*)(::VertexBasedCellPopulation<3> *)) &CellDivisionLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
    ;
}
