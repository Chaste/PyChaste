#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "UniformCellCycleModel.hpp"
#include "SimpleOxygenBasedCellCycleModel.hpp"
#include "UniformG1GenerationalCellCycleModel.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "CellsGenerator.hpp"

#include "CellsGeneratorUniformG1GenerationalCellCycleModel_2.cppwg.hpp"

namespace py = pybind11;
typedef CellsGenerator<UniformG1GenerationalCellCycleModel,2 > CellsGeneratorUniformG1GenerationalCellCycleModel_2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_CellsGeneratorUniformG1GenerationalCellCycleModel_2_class(py::module &m){
py::class_<CellsGeneratorUniformG1GenerationalCellCycleModel_2  , boost::shared_ptr<CellsGeneratorUniformG1GenerationalCellCycleModel_2 >   >(m, "CellsGeneratorUniformG1GenerationalCellCycleModel_2")
        .def(
            "GenerateBasic", 
            (void(CellsGeneratorUniformG1GenerationalCellCycleModel_2::*)(::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, unsigned int, ::std::vector<unsigned int, std::allocator<unsigned int> > const, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorUniformG1GenerationalCellCycleModel_2::GenerateBasic, 
            " " , py::arg("rCells"), py::arg("numCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def(
            "GenerateBasicRandom", 
            (void(CellsGeneratorUniformG1GenerationalCellCycleModel_2::*)(::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, unsigned int, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorUniformG1GenerationalCellCycleModel_2::GenerateBasicRandom, 
            " " , py::arg("rCells"), py::arg("numCells"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def(
            "GenerateGivenLocationIndices", 
            (void(CellsGeneratorUniformG1GenerationalCellCycleModel_2::*)(::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, ::std::vector<unsigned int, std::allocator<unsigned int> > const, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorUniformG1GenerationalCellCycleModel_2::GenerateGivenLocationIndices, 
            " " , py::arg("rCells"), py::arg("locationIndices"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
    ;
}
