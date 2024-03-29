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

#include "TetrahedralMesh3_3.cppwg.hpp"

namespace py = pybind11;
typedef TetrahedralMesh<3,3 > TetrahedralMesh3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef unsigned int unsignedint;
typedef unsigned int unsignedint;
typedef unsigned int unsignedint;

class TetrahedralMesh3_3_Overloads : public TetrahedralMesh3_3{
    public:
    using TetrahedralMesh3_3::TetrahedralMesh;
    void ConstructFromMeshReader(::AbstractMeshReader<3, 3> & rMeshReader) override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            ConstructFromMeshReader,
            rMeshReader);
    }
    void ReadNodesPerProcessorFile(::std::string const & rNodesPerProcessorFile) override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            ReadNodesPerProcessorFile,
            rNodesPerProcessorFile);
    }
    void RefreshMesh() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            RefreshMesh,
            );
    }
    void PermuteNodes() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            PermuteNodes,
            );
    }
    void Clear() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            Clear,
            );
    }
    void RefreshJacobianCachedData() override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            RefreshJacobianCachedData,
            );
    }
    void GetJacobianForElement(unsigned int elementIndex, ::boost::numeric::ublas::c_matrix<double, 3, 3> & rJacobian, double & rJacobianDeterminant) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            GetJacobianForElement,
            elementIndex, 
rJacobian, 
rJacobianDeterminant);
    }
    void GetInverseJacobianForElement(unsigned int elementIndex, ::boost::numeric::ublas::c_matrix<double, 3, 3> & rJacobian, double & rJacobianDeterminant, ::boost::numeric::ublas::c_matrix<double, 3, 3> & rInverseJacobian) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            GetInverseJacobianForElement,
            elementIndex, 
rJacobian, 
rJacobianDeterminant, 
rInverseJacobian);
    }
    void GetWeightedDirectionForElement(unsigned int elementIndex, ::boost::numeric::ublas::c_vector<double, 3> & rWeightedDirection, double & rJacobianDeterminant) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            GetWeightedDirectionForElement,
            elementIndex, 
rWeightedDirection, 
rJacobianDeterminant);
    }
    void GetWeightedDirectionForBoundaryElement(unsigned int elementIndex, ::boost::numeric::ublas::c_vector<double, 3> & rWeightedDirection, double & rJacobianDeterminant) const  override {
        PYBIND11_OVERRIDE(
            void,
            TetrahedralMesh3_3,
            GetWeightedDirectionForBoundaryElement,
            elementIndex, 
rWeightedDirection, 
rJacobianDeterminant);
    }
    unsigned int SolveNodeMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            TetrahedralMesh3_3,
            SolveNodeMapping,
            index);
    }
    unsigned int SolveElementMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            TetrahedralMesh3_3,
            SolveElementMapping,
            index);
    }
    unsigned int SolveBoundaryElementMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            TetrahedralMesh3_3,
            SolveBoundaryElementMapping,
            index);
    }

};
void register_TetrahedralMesh3_3_class(py::module &m){
py::class_<TetrahedralMesh3_3 , TetrahedralMesh3_3_Overloads , boost::shared_ptr<TetrahedralMesh3_3 >  , AbstractTetrahedralMesh<3, 3>  >(m, "TetrahedralMesh3_3")
        .def(py::init< >())
        .def(
            "ConstructFromMeshReader", 
            (void(TetrahedralMesh3_3::*)(::AbstractMeshReader<3, 3> &)) &TetrahedralMesh3_3::ConstructFromMeshReader, 
            " " , py::arg("rMeshReader") )
        .def(
            "ReadNodesPerProcessorFile", 
            (void(TetrahedralMesh3_3::*)(::std::string const &)) &TetrahedralMesh3_3::ReadNodesPerProcessorFile, 
            " " , py::arg("rNodesPerProcessorFile") )
        .def(
            "CheckIsConforming", 
            (bool(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::CheckIsConforming, 
            " "  )
        .def(
            "GetVolume", 
            (double(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::GetVolume, 
            " "  )
        .def(
            "GetSurfaceArea", 
            (double(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::GetSurfaceArea, 
            " "  )
        .def(
            "RefreshMesh", 
            (void(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::RefreshMesh, 
            " "  )
        .def(
            "PermuteNodes", 
            (void(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::PermuteNodes, 
            " "  )
        .def(
            "PermuteNodes", 
            (void(TetrahedralMesh3_3::*)(::std::vector<unsigned int> const &)) &TetrahedralMesh3_3::PermuteNodes, 
            " " , py::arg("perm") )
        .def(
            "GetContainingElementIndexWithInitialGuess", 
            (unsigned int(TetrahedralMesh3_3::*)(::ChastePoint<3> const &, unsigned int, bool)) &TetrahedralMesh3_3::GetContainingElementIndexWithInitialGuess, 
            " " , py::arg("rTestPoint"), py::arg("startingElementGuess"), py::arg("strict") = false )
        .def(
            "GetNearestElementIndex", 
            (unsigned int(TetrahedralMesh3_3::*)(::ChastePoint<3> const &)) &TetrahedralMesh3_3::GetNearestElementIndex, 
            " " , py::arg("rTestPoint") )
        .def(
            "GetContainingElementIndices", 
            (::std::vector<unsigned int>(TetrahedralMesh3_3::*)(::ChastePoint<3> const &)) &TetrahedralMesh3_3::GetContainingElementIndices, 
            " " , py::arg("rTestPoint") )
        .def(
            "Clear", 
            (void(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::Clear, 
            " "  )
        .def(
            "GetAngleBetweenNodes", 
            (double(TetrahedralMesh3_3::*)(unsigned int, unsigned int)) &TetrahedralMesh3_3::GetAngleBetweenNodes, 
            " " , py::arg("indexA"), py::arg("indexB") )
        .def(
            "RefreshJacobianCachedData", 
            (void(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::RefreshJacobianCachedData, 
            " "  )
        .def(
            "GetJacobianForElement", 
            (void(TetrahedralMesh3_3::*)(unsigned int, ::boost::numeric::ublas::c_matrix<double, 3, 3> &, double &) const ) &TetrahedralMesh3_3::GetJacobianForElement, 
            " " , py::arg("elementIndex"), py::arg("rJacobian"), py::arg("rJacobianDeterminant") )
        .def(
            "GetInverseJacobianForElement", 
            (void(TetrahedralMesh3_3::*)(unsigned int, ::boost::numeric::ublas::c_matrix<double, 3, 3> &, double &, ::boost::numeric::ublas::c_matrix<double, 3, 3> &) const ) &TetrahedralMesh3_3::GetInverseJacobianForElement, 
            " " , py::arg("elementIndex"), py::arg("rJacobian"), py::arg("rJacobianDeterminant"), py::arg("rInverseJacobian") )
        .def(
            "GetWeightedDirectionForElement", 
            (void(TetrahedralMesh3_3::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 3> &, double &) const ) &TetrahedralMesh3_3::GetWeightedDirectionForElement, 
            " " , py::arg("elementIndex"), py::arg("rWeightedDirection"), py::arg("rJacobianDeterminant") )
        .def(
            "GetWeightedDirectionForBoundaryElement", 
            (void(TetrahedralMesh3_3::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 3> &, double &) const ) &TetrahedralMesh3_3::GetWeightedDirectionForBoundaryElement, 
            " " , py::arg("elementIndex"), py::arg("rWeightedDirection"), py::arg("rJacobianDeterminant") )
        .def(
            "EdgesBegin", 
            (::TetrahedralMesh<3, 3>::EdgeIterator(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::EdgesBegin, 
            " "  )
        .def(
            "EdgesEnd", 
            (::TetrahedralMesh<3, 3>::EdgeIterator(TetrahedralMesh3_3::*)()) &TetrahedralMesh3_3::EdgesEnd, 
            " "  )
    ;
}
