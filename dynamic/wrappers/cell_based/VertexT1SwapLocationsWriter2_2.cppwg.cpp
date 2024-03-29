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
#include "VertexT1SwapLocationsWriter.hpp"

#include "VertexT1SwapLocationsWriter2_2.cppwg.hpp"

namespace py = pybind11;
typedef VertexT1SwapLocationsWriter<2,2 > VertexT1SwapLocationsWriter2_2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class VertexT1SwapLocationsWriter2_2_Overloads : public VertexT1SwapLocationsWriter2_2{
    public:
    using VertexT1SwapLocationsWriter2_2::VertexT1SwapLocationsWriter;
    void Visit(::MeshBasedCellPopulation<2, 2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::CaBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::NodeBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::PottsBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::VertexBasedCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }
    void Visit(::ImmersedBoundaryCellPopulation<2> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter2_2,
            Visit,
            pCellPopulation);
    }

};
void register_VertexT1SwapLocationsWriter2_2_class(py::module &m){
py::class_<VertexT1SwapLocationsWriter2_2 , VertexT1SwapLocationsWriter2_2_Overloads , boost::shared_ptr<VertexT1SwapLocationsWriter2_2 >  , AbstractCellPopulationWriter<2, 2>  >(m, "VertexT1SwapLocationsWriter2_2")
        .def(py::init< >())
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter2_2::*)(::MeshBasedCellPopulation<2, 2> *)) &VertexT1SwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter2_2::*)(::CaBasedCellPopulation<2> *)) &VertexT1SwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter2_2::*)(::NodeBasedCellPopulation<2> *)) &VertexT1SwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter2_2::*)(::PottsBasedCellPopulation<2> *)) &VertexT1SwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter2_2::*)(::VertexBasedCellPopulation<2> *)) &VertexT1SwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter2_2::*)(::ImmersedBoundaryCellPopulation<2> *)) &VertexT1SwapLocationsWriter2_2::Visit, 
            " " , py::arg("pCellPopulation") )
    ;
}
