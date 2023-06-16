#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "SharedToroidalHoneycombVertexMeshGenerator.hpp"

#include "ToroidalHoneycombVertexMeshGenerator.cppwg.hpp"

namespace py = pybind11;
typedef SharedToroidalHoneycombVertexMeshGenerator ToroidalHoneycombVertexMeshGenerator;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::shared_ptr<MutableVertexMesh<2, 2>> _boost_shared_ptr_lt_MutableVertexMesh_lt_2_2_gt__gt_;

class ToroidalHoneycombVertexMeshGenerator_Overloads : public ToroidalHoneycombVertexMeshGenerator{
    public:
    using ToroidalHoneycombVertexMeshGenerator::SharedToroidalHoneycombVertexMeshGenerator;
    ::boost::shared_ptr<MutableVertexMesh<2, 2>> GetMesh() override {
        PYBIND11_OVERLOAD(
            _boost_shared_ptr_lt_MutableVertexMesh_lt_2_2_gt__gt_,
            ToroidalHoneycombVertexMeshGenerator,
            GetMesh,
            );
    }

};
void register_ToroidalHoneycombVertexMeshGenerator_class(py::module &m){
py::class_<ToroidalHoneycombVertexMeshGenerator , ToroidalHoneycombVertexMeshGenerator_Overloads , boost::shared_ptr<ToroidalHoneycombVertexMeshGenerator >   >(m, "ToroidalHoneycombVertexMeshGenerator")
        .def(py::init<unsigned int, unsigned int, double, double >(), py::arg("numElementsAcross"), py::arg("numElementsUp"), py::arg("cellRearrangementThreshold") = 0.01, py::arg("t2Threshold") = 0.001)
        .def(
            "GetMesh", 
            (::boost::shared_ptr<MutableVertexMesh<2, 2>>(ToroidalHoneycombVertexMeshGenerator::*)()) &ToroidalHoneycombVertexMeshGenerator::GetMesh, 
            " "  )
        .def(
            "GetToroidalMesh", 
            (::boost::shared_ptr<Toroidal2dVertexMesh>(ToroidalHoneycombVertexMeshGenerator::*)()) &ToroidalHoneycombVertexMeshGenerator::GetToroidalMesh, 
            " "  )
    ;
}
