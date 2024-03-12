#include <pybind11/pybind11.h>
#include "AbstractLinearPde2.cppwg.hpp"
#include "AbstractLinearPde3.cppwg.hpp"
#include "AbstractLinearParabolicPde2.cppwg.hpp"
#include "AbstractLinearParabolicPde3.cppwg.hpp"
#include "AbstractLinearEllipticPde2_2.cppwg.hpp"
#include "AbstractLinearEllipticPde3_3.cppwg.hpp"
#include "AbstractLinearParabolicPdeSystemForCoupledOdeSystem2_2_1.cppwg.hpp"
#include "AbstractLinearParabolicPdeSystemForCoupledOdeSystem3_3_1.cppwg.hpp"
#include "AbstractNonlinearEllipticPde2.cppwg.hpp"
#include "AbstractNonlinearEllipticPde3.cppwg.hpp"
#include "AbstractBoundaryCondition2.cppwg.hpp"
#include "AbstractBoundaryCondition3.cppwg.hpp"
#include "ConstBoundaryCondition2.cppwg.hpp"
#include "ConstBoundaryCondition3.cppwg.hpp"
#include "PdeSimulationTime.cppwg.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_chaste_project_PyChaste_pde, m)
{
    register_AbstractLinearPde2_2_class(m);
    register_AbstractLinearPde3_2_class(m);
    register_AbstractLinearParabolicPde2_2_class(m);
    register_AbstractLinearParabolicPde3_3_class(m);
    register_AbstractLinearEllipticPde2_2_class(m);
    register_AbstractLinearEllipticPde3_3_class(m);
    register_AbstractLinearParabolicPdeSystemForCoupledOdeSystem2_2_1_class(m);
    register_AbstractLinearParabolicPdeSystemForCoupledOdeSystem3_3_1_class(m);
    register_AbstractNonlinearEllipticPde2_class(m);
    register_AbstractNonlinearEllipticPde3_class(m);
    register_AbstractBoundaryCondition2_class(m);
    register_AbstractBoundaryCondition3_class(m);
    register_ConstBoundaryCondition2_class(m);
    register_ConstBoundaryCondition3_class(m);
    register_PdeSimulationTime_class(m);
}
