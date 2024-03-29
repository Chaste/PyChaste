#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractCellPopulation.hpp"
#include "CellProliferativePhasesWriter.hpp"

#include "CellProliferativePhasesWriter3_3.cppwg.hpp"

namespace py = pybind11;
typedef CellProliferativePhasesWriter<3,3 > CellProliferativePhasesWriter3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class CellProliferativePhasesWriter3_3_Overloads : public CellProliferativePhasesWriter3_3{
    public:
    using CellProliferativePhasesWriter3_3::CellProliferativePhasesWriter;
    double GetCellDataForVtkOutput(::CellPtr pCell, ::AbstractCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            double,
            CellProliferativePhasesWriter3_3,
            GetCellDataForVtkOutput,
            pCell, 
pCellPopulation);
    }
    void VisitCell(::CellPtr pCell, ::AbstractCellPopulation<3, 3> * pCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            CellProliferativePhasesWriter3_3,
            VisitCell,
            pCell, 
pCellPopulation);
    }

};
void register_CellProliferativePhasesWriter3_3_class(py::module &m){
py::class_<CellProliferativePhasesWriter3_3 , CellProliferativePhasesWriter3_3_Overloads , boost::shared_ptr<CellProliferativePhasesWriter3_3 >  , AbstractCellWriter<3, 3>  >(m, "CellProliferativePhasesWriter3_3")
        .def(py::init< >())
        .def(
            "GetCellDataForVtkOutput", 
            (double(CellProliferativePhasesWriter3_3::*)(::CellPtr, ::AbstractCellPopulation<3, 3> *)) &CellProliferativePhasesWriter3_3::GetCellDataForVtkOutput, 
            " " , py::arg("pCell"), py::arg("pCellPopulation") )
        .def(
            "VisitCell", 
            (void(CellProliferativePhasesWriter3_3::*)(::CellPtr, ::AbstractCellPopulation<3, 3> *)) &CellProliferativePhasesWriter3_3::VisitCell, 
            " " , py::arg("pCell"), py::arg("pCellPopulation") )
    ;
}
