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
#include "CellProliferativeTypesCountWriter.hpp"

#include "CellProliferativeTypesCountWriter3_3.cppwg.hpp"

namespace py = pybind11;
typedef CellProliferativeTypesCountWriter<3,3 > CellProliferativeTypesCountWriter3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class CellProliferativeTypesCountWriter3_3_Overloads : public CellProliferativeTypesCountWriter3_3{
    public:
    using CellProliferativeTypesCountWriter3_3::CellProliferativeTypesCountWriter;
    void Visit(::MeshBasedCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativeTypesCountWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::CaBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativeTypesCountWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::NodeBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativeTypesCountWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::PottsBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativeTypesCountWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::VertexBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativeTypesCountWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::ImmersedBoundaryCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativeTypesCountWriter3_3,
            Visit,
            pCellPopulation);
    }

};
void register_CellProliferativeTypesCountWriter3_3_class(py::module &m){
py::class_<CellProliferativeTypesCountWriter3_3 , CellProliferativeTypesCountWriter3_3_Overloads , boost::shared_ptr<CellProliferativeTypesCountWriter3_3 >  , AbstractCellPopulationCountWriter<3, 3>  >(m, "CellProliferativeTypesCountWriter3_3")
        .def(py::init< >())
        .def(
            "VisitAnyPopulation", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::AbstractCellPopulation<3, 3> *)) &CellProliferativeTypesCountWriter3_3::VisitAnyPopulation, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::MeshBasedCellPopulation<3, 3> *)) &CellProliferativeTypesCountWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::CaBasedCellPopulation<3> *)) &CellProliferativeTypesCountWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::NodeBasedCellPopulation<3> *)) &CellProliferativeTypesCountWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::PottsBasedCellPopulation<3> *)) &CellProliferativeTypesCountWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::VertexBasedCellPopulation<3> *)) &CellProliferativeTypesCountWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(CellProliferativeTypesCountWriter3_3::*)(::ImmersedBoundaryCellPopulation<3> *)) &CellProliferativeTypesCountWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
    ;
}
