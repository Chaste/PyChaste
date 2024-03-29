#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "NoCellCycleModel.hpp"
#include "UniformCellCycleModel.hpp"
#include "SimpleOxygenBasedCellCycleModel.hpp"
#include "UniformG1GenerationalCellCycleModel.hpp"
#include "BiasedBernoulliTrialCellCycleModel.hpp"
#include "LabelDependentBernoulliTrialCellCycleModel.hpp"
#include "AlwaysDivideCellCycleModel.hpp"
#include "ContactInhibitionCellCycleModel.hpp"
#include "StochasticOxygenBasedCellCycleModel.hpp"
#include "GammaG1CellCycleModel.hpp"
#include "ExponentialG1GenerationalCellCycleModel.hpp"
#include "TysonNovakCellCycleModel.hpp"
#include "Alarcon2004OxygenBasedCellCycleModel.hpp"
#include "FixedSequenceCellCycleModel.hpp"
#include "BernoulliTrialCellCycleModel.hpp"
#include "FixedG1GenerationalCellCycleModel.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "CellsGenerator.hpp"

#include "CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3.cppwg.hpp"

namespace py = pybind11;
typedef CellsGenerator<LabelDependentBernoulliTrialCellCycleModel,3 > CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3_Overloads : CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3{
    public:
    using CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3;
    std::vector<CellPtr> GenerateBasic(unsigned numCells, const std::vector<unsigned> locationIndices=std::vector<unsigned>(), boost::shared_ptr<AbstractCellProperty> pCellProliferativeType=boost::shared_ptr<AbstractCellProperty>())
    {
        std::vector<CellPtr> cells;
        CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::GenerateBasic(cells, numCells, locationIndices, pCellProliferativeType);
        return cells;
    };
    std::vector<CellPtr> GenerateBasicRandom(unsigned numCells, boost::shared_ptr<AbstractCellProperty> pCellProliferativeType=boost::shared_ptr<AbstractCellProperty>())
    {
        std::vector<CellPtr> cells;
        CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::GenerateBasicRandom(cells, numCells, pCellProliferativeType);
        return cells;
    };
    std::vector<CellPtr> GenerateGivenLocationIndices(const std::vector<unsigned> locationIndices, boost::shared_ptr<AbstractCellProperty> pCellProliferativeType=boost::shared_ptr<AbstractCellProperty>())
    {
        std::vector<CellPtr> cells;
        CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::GenerateGivenLocationIndices(cells, locationIndices, pCellProliferativeType);
        return cells;
    };
};


void register_CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3_class(py::module &m){
py::class_<CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3  , boost::shared_ptr<CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3 >   >(m, "CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3")
        .def(py::init< >())
        .def(
            "GenerateBasic", 
            (void(CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::*)(::std::vector<boost::shared_ptr<Cell>> &, unsigned int, ::std::vector<unsigned int> const, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::GenerateBasic, 
            " " , py::arg("rCells"), py::arg("numCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def(
            "GenerateBasicRandom", 
            (void(CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::*)(::std::vector<boost::shared_ptr<Cell>> &, unsigned int, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::GenerateBasicRandom, 
            " " , py::arg("rCells"), py::arg("numCells"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def(
            "GenerateGivenLocationIndices", 
            (void(CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::*)(::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::GenerateGivenLocationIndices, 
            " " , py::arg("rCells"), py::arg("locationIndices"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def("GenerateBasic",
            (std::vector<CellPtr>(CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::*)(unsigned int, const std::vector<unsigned>, boost::shared_ptr<AbstractCellProperty>)) 
            &CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3_Overloads::GenerateBasic, " " , py::arg("numCells"),  py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>())
        .def("GenerateBasicRandom",
            (std::vector<CellPtr>(CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::*)(unsigned int, boost::shared_ptr<AbstractCellProperty>)) 
            &CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3_Overloads::GenerateBasicRandom, " " , py::arg("numCells"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>())
        .def("GenerateGivenLocationIndices",
            (std::vector<CellPtr>(CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3::*)(const std::vector<unsigned> locationIndices, boost::shared_ptr<AbstractCellProperty>)) 
            &CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3_Overloads::GenerateGivenLocationIndices, " " , py::arg("locationIndices"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>())
    ;
}
