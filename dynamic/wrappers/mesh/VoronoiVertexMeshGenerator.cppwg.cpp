#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "VoronoiVertexMeshGenerator.hpp"

#include "VoronoiVertexMeshGenerator.cppwg.hpp"

namespace py = pybind11;
typedef VoronoiVertexMeshGenerator VoronoiVertexMeshGenerator;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::MutableVertexMesh<2, 2> * _MutableVertexMesh_lt_2_2_gt_Ptr;
typedef ::MutableVertexMesh<2, 2> * _MutableVertexMesh_lt_2_2_gt_Ptr;
typedef ::Toroidal2dVertexMesh * _Toroidal2dVertexMeshPtr;

class VoronoiVertexMeshGenerator_Overloads : public VoronoiVertexMeshGenerator{
    public:
    using VoronoiVertexMeshGenerator::VoronoiVertexMeshGenerator;
    ::MutableVertexMesh<2, 2> * GetMesh() override {
        PYBIND11_OVERLOAD(
            _MutableVertexMesh_lt_2_2_gt_Ptr,
            VoronoiVertexMeshGenerator,
            GetMesh,
            );
    }
    ::MutableVertexMesh<2, 2> * GetMeshAfterReMesh() override {
        PYBIND11_OVERLOAD(
            _MutableVertexMesh_lt_2_2_gt_Ptr,
            VoronoiVertexMeshGenerator,
            GetMeshAfterReMesh,
            );
    }
    ::Toroidal2dVertexMesh * GetToroidalMesh() override {
        PYBIND11_OVERLOAD(
            _Toroidal2dVertexMeshPtr,
            VoronoiVertexMeshGenerator,
            GetToroidalMesh,
            );
    }

};
void register_VoronoiVertexMeshGenerator_class(py::module &m){
py::class_<VoronoiVertexMeshGenerator , VoronoiVertexMeshGenerator_Overloads , boost::shared_ptr<VoronoiVertexMeshGenerator >   >(m, "VoronoiVertexMeshGenerator")
        .def(py::init<unsigned int, unsigned int, unsigned int, double >(), py::arg("numElementsX"), py::arg("numElementsY"), py::arg("numRelaxationSteps"), py::arg("elementTargetArea") = 1.)
        .def(py::init< >())
        .def(
            "GenerateVoronoiMesh", 
            (void(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GenerateVoronoiMesh, 
            " "  )
        .def(
            "GetMesh", 
            (::MutableVertexMesh<2, 2> *(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GetMesh, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetMeshAfterReMesh", 
            (::MutableVertexMesh<2, 2> *(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GetMeshAfterReMesh, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetToroidalMesh", 
            (::Toroidal2dVertexMesh *(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GetToroidalMesh, 
            " "  , py::return_value_policy::reference)
        .def(
            "GetPolygonDistribution", 
            (::std::vector<double>(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GetPolygonDistribution, 
            " "  )
        .def(
            "GetAreaCoefficientOfVariation", 
            (double(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GetAreaCoefficientOfVariation, 
            " "  )
        .def(
            "RefreshSeedsAndRegenerateMesh", 
            (void(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::RefreshSeedsAndRegenerateMesh, 
            " "  )
        .def(
            "SetMaxExpectedNumSidesPerPolygon", 
            (void(VoronoiVertexMeshGenerator::*)(unsigned int)) &VoronoiVertexMeshGenerator::SetMaxExpectedNumSidesPerPolygon, 
            " " , py::arg("maxExpectedNumSidesPerPolygon") )
        .def(
            "GetMaxExpectedNumSidesPerPolygon", 
            (unsigned int(VoronoiVertexMeshGenerator::*)()) &VoronoiVertexMeshGenerator::GetMaxExpectedNumSidesPerPolygon, 
            " "  )
    ;
}
