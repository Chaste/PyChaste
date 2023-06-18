#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <petsc/private/vecimpl.h>
#include <petsc/private/matimpl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "EllipticBoxDomainPdeModifier.hpp"

#include "EllipticBoxDomainPdeModifier2.cppwg.hpp"

namespace py = pybind11;
typedef EllipticBoxDomainPdeModifier<2 > EllipticBoxDomainPdeModifier2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
PYBIND11_MAKE_OPAQUE(Vec);
PYBIND11_MAKE_OPAQUE(Mat);
typedef ::std::shared_ptr<BoundaryConditionsContainer<2, 2, 1>> _std_shared_ptr_lt_BoundaryConditionsContainer_lt_2_2_1_gt__gt_;

class EllipticBoxDomainPdeModifier2_Overloads : public EllipticBoxDomainPdeModifier2{
    public:
    using EllipticBoxDomainPdeModifier2::EllipticBoxDomainPdeModifier;
    void UpdateAtEndOfTimeStep(::AbstractCellPopulation<2, 2> & rCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            EllipticBoxDomainPdeModifier2,
            UpdateAtEndOfTimeStep,
            rCellPopulation);
    }
    void SetupSolve(::AbstractCellPopulation<2, 2> & rCellPopulation, ::std::string outputDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            EllipticBoxDomainPdeModifier2,
            SetupSolve,
            rCellPopulation, 
outputDirectory);
    }
    ::std::shared_ptr<BoundaryConditionsContainer<2, 2, 1>> ConstructBoundaryConditionsContainer(::AbstractCellPopulation<2, 2> & rCellPopulation) override {
        PYBIND11_OVERRIDE(
            _std_shared_ptr_lt_BoundaryConditionsContainer_lt_2_2_1_gt__gt_,
            EllipticBoxDomainPdeModifier2,
            ConstructBoundaryConditionsContainer,
            rCellPopulation);
    }
    void OutputSimulationModifierParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            EllipticBoxDomainPdeModifier2,
            OutputSimulationModifierParameters,
            rParamsFile);
    }

};
void register_EllipticBoxDomainPdeModifier2_class(py::module &m){
py::class_<EllipticBoxDomainPdeModifier2 , EllipticBoxDomainPdeModifier2_Overloads , boost::shared_ptr<EllipticBoxDomainPdeModifier2 >  , AbstractBoxDomainPdeModifier<2>  >(m, "EllipticBoxDomainPdeModifier2")
        .def(py::init<::boost::shared_ptr<AbstractLinearPde<2>>, ::boost::shared_ptr<AbstractBoundaryCondition<2>>, bool, ::boost::shared_ptr<ChasteCuboid<2>>, double, ::Vec >(), py::arg("pPde") = boost::shared_ptr<AbstractLinearPde<2, 2>>(), py::arg("pBoundaryCondition") = boost::shared_ptr<AbstractBoundaryCondition<2>>(), py::arg("isNeumannBoundaryCondition") = true, py::arg("pMeshCuboid") = boost::shared_ptr<ChasteCuboid<2>>(), py::arg("stepSize") = 1., py::arg("solution") = nullptr)
        .def(
            "UpdateAtEndOfTimeStep", 
            (void(EllipticBoxDomainPdeModifier2::*)(::AbstractCellPopulation<2, 2> &)) &EllipticBoxDomainPdeModifier2::UpdateAtEndOfTimeStep, 
            " " , py::arg("rCellPopulation") )
        .def(
            "SetupSolve", 
            (void(EllipticBoxDomainPdeModifier2::*)(::AbstractCellPopulation<2, 2> &, ::std::string)) &EllipticBoxDomainPdeModifier2::SetupSolve, 
            " " , py::arg("rCellPopulation"), py::arg("outputDirectory") )
        .def(
            "OutputSimulationModifierParameters", 
            (void(EllipticBoxDomainPdeModifier2::*)(::out_stream &)) &EllipticBoxDomainPdeModifier2::OutputSimulationModifierParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
