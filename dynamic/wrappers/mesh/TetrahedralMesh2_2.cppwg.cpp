#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "TetrahedralMesh.hpp"

#include "TetrahedralMesh2_2.cppwg.hpp"

namespace py = pybind11;
typedef TetrahedralMesh<2,2 > TetrahedralMesh2_2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef unsigned int unsignedint;
typedef unsigned int unsignedint;
typedef unsigned int unsignedint;

class TetrahedralMesh2_2_Overloads : public TetrahedralMesh2_2{
    public:
    using TetrahedralMesh2_2::TetrahedralMesh;
    void ConstructFromMeshReader(::AbstractMeshReader<2, 2> & rMeshReader) override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            ConstructFromMeshReader,
            rMeshReader);
    }
    void ReadNodesPerProcessorFile(::std::string const & rNodesPerProcessorFile) override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            ReadNodesPerProcessorFile,
            rNodesPerProcessorFile);
    }
    void RefreshMesh() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            RefreshMesh,
            );
    }
    void PermuteNodes() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            PermuteNodes,
            );
    }
    void Clear() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            Clear,
            );
    }
    void RefreshJacobianCachedData() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            RefreshJacobianCachedData,
            );
    }
    void GetJacobianForElement(unsigned int elementIndex, ::boost::numeric::ublas::c_matrix<double, 2, 2> & rJacobian, double & rJacobianDeterminant) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            GetJacobianForElement,
            elementIndex, 
rJacobian, 
rJacobianDeterminant);
    }
    void GetInverseJacobianForElement(unsigned int elementIndex, ::boost::numeric::ublas::c_matrix<double, 2, 2> & rJacobian, double & rJacobianDeterminant, ::boost::numeric::ublas::c_matrix<double, 2, 2> & rInverseJacobian) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            GetInverseJacobianForElement,
            elementIndex, 
rJacobian, 
rJacobianDeterminant, 
rInverseJacobian);
    }
    void GetWeightedDirectionForElement(unsigned int elementIndex, ::boost::numeric::ublas::c_vector<double, 2> & rWeightedDirection, double & rJacobianDeterminant) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            GetWeightedDirectionForElement,
            elementIndex, 
rWeightedDirection, 
rJacobianDeterminant);
    }
    void GetWeightedDirectionForBoundaryElement(unsigned int elementIndex, ::boost::numeric::ublas::c_vector<double, 2> & rWeightedDirection, double & rJacobianDeterminant) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh2_2,
            GetWeightedDirectionForBoundaryElement,
            elementIndex, 
rWeightedDirection, 
rJacobianDeterminant);
    }
    unsigned int SolveNodeMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            TetrahedralMesh2_2,
            SolveNodeMapping,
            index);
    }
    unsigned int SolveElementMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            TetrahedralMesh2_2,
            SolveElementMapping,
            index);
    }
    unsigned int SolveBoundaryElementMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            TetrahedralMesh2_2,
            SolveBoundaryElementMapping,
            index);
    }

};
void register_TetrahedralMesh2_2_class(py::module &m){
py::class_<TetrahedralMesh2_2 , TetrahedralMesh2_2_Overloads , boost::shared_ptr<TetrahedralMesh2_2 >  , AbstractTetrahedralMesh<2, 2>  >(m, "TetrahedralMesh2_2")
        .def(py::init< >())
        .def(
            "ConstructFromMeshReader", 
            (void(TetrahedralMesh2_2::*)(::AbstractMeshReader<2, 2> &)) &TetrahedralMesh2_2::ConstructFromMeshReader, 
            " " , py::arg("rMeshReader") )
        .def(
            "ReadNodesPerProcessorFile", 
            (void(TetrahedralMesh2_2::*)(::std::string const &)) &TetrahedralMesh2_2::ReadNodesPerProcessorFile, 
            " " , py::arg("rNodesPerProcessorFile") )
        .def(
            "CheckIsConforming", 
            (bool(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::CheckIsConforming, 
            " "  )
        .def(
            "GetVolume", 
            (double(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::GetVolume, 
            " "  )
        .def(
            "GetSurfaceArea", 
            (double(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::GetSurfaceArea, 
            " "  )
        .def(
            "RefreshMesh", 
            (void(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::RefreshMesh, 
            " "  )
        .def(
            "PermuteNodes", 
            (void(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::PermuteNodes, 
            " "  )
        .def(
            "PermuteNodes", 
            (void(TetrahedralMesh2_2::*)(::std::vector<unsigned int> const &)) &TetrahedralMesh2_2::PermuteNodes, 
            " " , py::arg("perm") )
        .def(
            "GetContainingElementIndexWithInitialGuess", 
            (unsigned int(TetrahedralMesh2_2::*)(::ChastePoint<2> const &, unsigned int, bool)) &TetrahedralMesh2_2::GetContainingElementIndexWithInitialGuess, 
            " " , py::arg("rTestPoint"), py::arg("startingElementGuess"), py::arg("strict") = false )
        .def(
            "GetNearestElementIndex", 
            (unsigned int(TetrahedralMesh2_2::*)(::ChastePoint<2> const &)) &TetrahedralMesh2_2::GetNearestElementIndex, 
            " " , py::arg("rTestPoint") )
        .def(
            "GetContainingElementIndices", 
            (::std::vector<unsigned int>(TetrahedralMesh2_2::*)(::ChastePoint<2> const &)) &TetrahedralMesh2_2::GetContainingElementIndices, 
            " " , py::arg("rTestPoint") )
        .def(
            "Clear", 
            (void(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::Clear, 
            " "  )
        .def(
            "GetAngleBetweenNodes", 
            (double(TetrahedralMesh2_2::*)(unsigned int, unsigned int)) &TetrahedralMesh2_2::GetAngleBetweenNodes, 
            " " , py::arg("indexA"), py::arg("indexB") )
        .def(
            "RefreshJacobianCachedData", 
            (void(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::RefreshJacobianCachedData, 
            " "  )
        .def(
            "GetJacobianForElement", 
            (void(TetrahedralMesh2_2::*)(unsigned int, ::boost::numeric::ublas::c_matrix<double, 2, 2> &, double &) const ) &TetrahedralMesh2_2::GetJacobianForElement, 
            " " , py::arg("elementIndex"), py::arg("rJacobian"), py::arg("rJacobianDeterminant") )
        .def(
            "GetInverseJacobianForElement", 
            (void(TetrahedralMesh2_2::*)(unsigned int, ::boost::numeric::ublas::c_matrix<double, 2, 2> &, double &, ::boost::numeric::ublas::c_matrix<double, 2, 2> &) const ) &TetrahedralMesh2_2::GetInverseJacobianForElement, 
            " " , py::arg("elementIndex"), py::arg("rJacobian"), py::arg("rJacobianDeterminant"), py::arg("rInverseJacobian") )
        .def(
            "GetWeightedDirectionForElement", 
            (void(TetrahedralMesh2_2::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 2> &, double &) const ) &TetrahedralMesh2_2::GetWeightedDirectionForElement, 
            " " , py::arg("elementIndex"), py::arg("rWeightedDirection"), py::arg("rJacobianDeterminant") )
        .def(
            "GetWeightedDirectionForBoundaryElement", 
            (void(TetrahedralMesh2_2::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 2> &, double &) const ) &TetrahedralMesh2_2::GetWeightedDirectionForBoundaryElement, 
            " " , py::arg("elementIndex"), py::arg("rWeightedDirection"), py::arg("rJacobianDeterminant") )
        .def(
            "EdgesBegin", 
            (::TetrahedralMesh<2, 2>::EdgeIterator(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::EdgesBegin, 
            " "  )
        .def(
            "EdgesEnd", 
            (::TetrahedralMesh<2, 2>::EdgeIterator(TetrahedralMesh2_2::*)()) &TetrahedralMesh2_2::EdgesEnd, 
            " "  )
    ;
}
