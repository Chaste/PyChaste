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

#include "VertexT1SwapLocationsWriter3_3.cppwg.hpp"

namespace py = pybind11;
typedef VertexT1SwapLocationsWriter<3,3 > VertexT1SwapLocationsWriter3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class VertexT1SwapLocationsWriter3_3_Overloads : public VertexT1SwapLocationsWriter3_3{
    public:
    using VertexT1SwapLocationsWriter3_3::VertexT1SwapLocationsWriter;
    void Visit(::MeshBasedCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::CaBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::NodeBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::PottsBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::VertexBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::ImmersedBoundaryCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            VertexT1SwapLocationsWriter3_3,
            Visit,
            pCellPopulation);
    }

};
void register_VertexT1SwapLocationsWriter3_3_class(py::module &m){
py::class_<VertexT1SwapLocationsWriter3_3 , VertexT1SwapLocationsWriter3_3_Overloads , boost::shared_ptr<VertexT1SwapLocationsWriter3_3 >  , AbstractCellPopulationWriter<3, 3>  >(m, "VertexT1SwapLocationsWriter3_3")
        .def(py::init< >())
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter3_3::*)(::MeshBasedCellPopulation<3, 3> *)) &VertexT1SwapLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter3_3::*)(::CaBasedCellPopulation<3> *)) &VertexT1SwapLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter3_3::*)(::NodeBasedCellPopulation<3> *)) &VertexT1SwapLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter3_3::*)(::PottsBasedCellPopulation<3> *)) &VertexT1SwapLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter3_3::*)(::VertexBasedCellPopulation<3> *)) &VertexT1SwapLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(VertexT1SwapLocationsWriter3_3::*)(::ImmersedBoundaryCellPopulation<3> *)) &VertexT1SwapLocationsWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
    ;
}
