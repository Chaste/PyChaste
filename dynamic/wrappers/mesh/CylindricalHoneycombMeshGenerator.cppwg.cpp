#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "CylindricalHoneycombMeshGenerator.hpp"

#include "CylindricalHoneycombMeshGenerator.cppwg.hpp"

namespace py = pybind11;
typedef CylindricalHoneycombMeshGenerator CylindricalHoneycombMeshGenerator;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::MutableMesh<2, 2> * _MutableMesh_lt_2_2_gt_Ptr;

class CylindricalHoneycombMeshGenerator_Overloads : public CylindricalHoneycombMeshGenerator{
    public:
    using CylindricalHoneycombMeshGenerator::CylindricalHoneycombMeshGenerator;
    ::MutableMesh<2, 2> * GetMesh() override {
        PYBIND11_OVERLOAD(
            _MutableMesh_lt_2_2_gt_Ptr,
            CylindricalHoneycombMeshGenerator,
            GetMesh,
            );
    }

};
void register_CylindricalHoneycombMeshGenerator_class(py::module &m){
py::class_<CylindricalHoneycombMeshGenerator , CylindricalHoneycombMeshGenerator_Overloads , boost::shared_ptr<CylindricalHoneycombMeshGenerator >  , HoneycombMeshGenerator  >(m, "CylindricalHoneycombMeshGenerator")
        .def(py::init<unsigned int, unsigned int, unsigned int, double >(), py::arg("numNodesAlongWidth"), py::arg("numNodesAlongLength"), py::arg("ghosts") = 3, py::arg("scaleFactor") = 1.)
        .def(
            "GetMesh", 
            (::MutableMesh<2, 2> *(CylindricalHoneycombMeshGenerator::*)()) &CylindricalHoneycombMeshGenerator::GetMesh, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetCylindricalMesh", 
            (::Cylindrical2dMesh *(CylindricalHoneycombMeshGenerator::*)()) &CylindricalHoneycombMeshGenerator::GetCylindricalMesh, 
            " "  , py::return_value_policy::reference)
    ;
}
