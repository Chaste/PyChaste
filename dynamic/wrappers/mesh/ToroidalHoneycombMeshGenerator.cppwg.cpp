#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ToroidalHoneycombMeshGenerator.hpp"

#include "ToroidalHoneycombMeshGenerator.cppwg.hpp"

namespace py = pybind11;
typedef ToroidalHoneycombMeshGenerator ToroidalHoneycombMeshGenerator;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::MutableMesh<2, 2> * _MutableMesh_lt_2_2_gt_Ptr;

class ToroidalHoneycombMeshGenerator_Overloads : public ToroidalHoneycombMeshGenerator{
    public:
    using ToroidalHoneycombMeshGenerator::ToroidalHoneycombMeshGenerator;
    ::MutableMesh<2, 2> * GetMesh() override {
        PYBIND11_OVERLOAD(
            _MutableMesh_lt_2_2_gt_Ptr,
            ToroidalHoneycombMeshGenerator,
            GetMesh,
            );
    }

};
void register_ToroidalHoneycombMeshGenerator_class(py::module &m){
py::class_<ToroidalHoneycombMeshGenerator , ToroidalHoneycombMeshGenerator_Overloads , boost::shared_ptr<ToroidalHoneycombMeshGenerator >  , HoneycombMeshGenerator  >(m, "ToroidalHoneycombMeshGenerator")
        .def(py::init<unsigned int, unsigned int, double, double >(), py::arg("numNodesAlongWidth"), py::arg("numNodesAlongDepth"), py::arg("widthScaleFactor") = 1., py::arg("depthScaleFactor") = 1.)
        .def(
            "GetMesh", 
            (::MutableMesh<2, 2> *(ToroidalHoneycombMeshGenerator::*)()) &ToroidalHoneycombMeshGenerator::GetMesh, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetToroidalMesh", 
            (::Toroidal2dMesh *(ToroidalHoneycombMeshGenerator::*)()) &ToroidalHoneycombMeshGenerator::GetToroidalMesh, 
            " "  , py::return_value_policy::reference)
    ;
}
