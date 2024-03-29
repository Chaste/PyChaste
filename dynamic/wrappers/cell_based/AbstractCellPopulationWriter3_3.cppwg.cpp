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
#include "AbstractCellPopulationWriter.hpp"

#include "AbstractCellPopulationWriter3_3.cppwg.hpp"

namespace py = pybind11;
typedef AbstractCellPopulationWriter<3,3 > AbstractCellPopulationWriter3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class AbstractCellPopulationWriter3_3_Overloads : public AbstractCellPopulationWriter3_3{
    public:
    using AbstractCellPopulationWriter3_3::AbstractCellPopulationWriter;
    void WriteHeader(::AbstractCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            AbstractCellPopulationWriter3_3,
            WriteHeader,
            pCellPopulation);
    }
    void Visit(::MeshBasedCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulationWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::CaBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulationWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::NodeBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulationWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::PottsBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulationWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::VertexBasedCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulationWriter3_3,
            Visit,
            pCellPopulation);
    }
    void Visit(::ImmersedBoundaryCellPopulation<3> * pCellPopulation) override {
        PYBIND11_OVERRIDE_PURE(
            void,
            AbstractCellPopulationWriter3_3,
            Visit,
            pCellPopulation);
    }

};
void register_AbstractCellPopulationWriter3_3_class(py::module &m){
py::class_<AbstractCellPopulationWriter3_3 , AbstractCellPopulationWriter3_3_Overloads , boost::shared_ptr<AbstractCellPopulationWriter3_3 >  , AbstractCellBasedWriter<3, 3>  >(m, "AbstractCellPopulationWriter3_3")
        .def(py::init<::std::string const & >(), py::arg("rFileName"))
        .def(
            "WriteHeader", 
            (void(AbstractCellPopulationWriter3_3::*)(::AbstractCellPopulation<3, 3> *)) &AbstractCellPopulationWriter3_3::WriteHeader, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(AbstractCellPopulationWriter3_3::*)(::MeshBasedCellPopulation<3, 3> *)) &AbstractCellPopulationWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(AbstractCellPopulationWriter3_3::*)(::CaBasedCellPopulation<3> *)) &AbstractCellPopulationWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(AbstractCellPopulationWriter3_3::*)(::NodeBasedCellPopulation<3> *)) &AbstractCellPopulationWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(AbstractCellPopulationWriter3_3::*)(::PottsBasedCellPopulation<3> *)) &AbstractCellPopulationWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(AbstractCellPopulationWriter3_3::*)(::VertexBasedCellPopulation<3> *)) &AbstractCellPopulationWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
        .def(
            "Visit", 
            (void(AbstractCellPopulationWriter3_3::*)(::ImmersedBoundaryCellPopulation<3> *)) &AbstractCellPopulationWriter3_3::Visit, 
            " " , py::arg("pCellPopulation") )
    ;
}
