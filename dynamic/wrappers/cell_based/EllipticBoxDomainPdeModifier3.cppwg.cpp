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

#include "EllipticBoxDomainPdeModifier3.cppwg.hpp"

namespace py = pybind11;
typedef EllipticBoxDomainPdeModifier<3 > EllipticBoxDomainPdeModifier3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
PYBIND11_MAKE_OPAQUE(Vec);
PYBIND11_MAKE_OPAQUE(Mat);
typedef ::std::shared_ptr<BoundaryConditionsContainer<3, 3, 1>> _std_shared_ptr_lt_BoundaryConditionsContainer_lt_3_3_1_gt__gt_;

class EllipticBoxDomainPdeModifier3_Overloads : public EllipticBoxDomainPdeModifier3{
    public:
    using EllipticBoxDomainPdeModifier3::EllipticBoxDomainPdeModifier;
    void UpdateAtEndOfTimeStep(::AbstractCellPopulation<3> & rCellPopulation) override {
        PYBIND11_OVERLOAD(
            void,
            EllipticBoxDomainPdeModifier3,
            UpdateAtEndOfTimeStep,
            rCellPopulation);
    }
    void SetupSolve(::AbstractCellPopulation<3> & rCellPopulation, ::std::string outputDirectory) override {
        PYBIND11_OVERLOAD(
            void,
            EllipticBoxDomainPdeModifier3,
            SetupSolve,
            rCellPopulation, 
outputDirectory);
    }
    ::std::shared_ptr<BoundaryConditionsContainer<3, 3, 1>> ConstructBoundaryConditionsContainer(::AbstractCellPopulation<3> & rCellPopulation) override {
        PYBIND11_OVERLOAD(
            _std_shared_ptr_lt_BoundaryConditionsContainer_lt_3_3_1_gt__gt_,
            EllipticBoxDomainPdeModifier3,
            ConstructBoundaryConditionsContainer,
            rCellPopulation);
    }
    void OutputSimulationModifierParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            EllipticBoxDomainPdeModifier3,
            OutputSimulationModifierParameters,
            rParamsFile);
    }

};
void register_EllipticBoxDomainPdeModifier3_class(py::module &m){
py::class_<EllipticBoxDomainPdeModifier3 , EllipticBoxDomainPdeModifier3_Overloads , boost::shared_ptr<EllipticBoxDomainPdeModifier3 >  , AbstractBoxDomainPdeModifier<3>  >(m, "EllipticBoxDomainPdeModifier3")
        .def(py::init<::boost::shared_ptr<AbstractLinearPde<3>>, ::boost::shared_ptr<AbstractBoundaryCondition<3>>, bool, ::boost::shared_ptr<ChasteCuboid<3>>, double, ::Vec >(), py::arg("pPde") = boost::shared_ptr<AbstractLinearPde<DIM, DIM>>(), py::arg("pBoundaryCondition") = boost::shared_ptr<AbstractBoundaryCondition<DIM>>(), py::arg("isNeumannBoundaryCondition") = true, py::arg("pMeshCuboid") = boost::shared_ptr<ChasteCuboid<DIM>>(), py::arg("stepSize") = 1., py::arg("solution") = nullptr)
        .def(
            "UpdateAtEndOfTimeStep", 
            (void(EllipticBoxDomainPdeModifier3::*)(::AbstractCellPopulation<3> &)) &EllipticBoxDomainPdeModifier3::UpdateAtEndOfTimeStep, 
            " " , py::arg("rCellPopulation") )
        .def(
            "SetupSolve", 
            (void(EllipticBoxDomainPdeModifier3::*)(::AbstractCellPopulation<3> &, ::std::string)) &EllipticBoxDomainPdeModifier3::SetupSolve, 
            " " , py::arg("rCellPopulation"), py::arg("outputDirectory") )
        .def(
            "OutputSimulationModifierParameters", 
            (void(EllipticBoxDomainPdeModifier3::*)(::out_stream &)) &EllipticBoxDomainPdeModifier3::OutputSimulationModifierParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
