#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "PythonUblasObjectConverters.hpp"
#include "Cylindrical2dMesh.hpp"

#include "Cylindrical2dMesh.cppwg.hpp"

namespace py = pybind11;
typedef Cylindrical2dMesh Cylindrical2dMesh;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::numeric::ublas::c_vector<double, 2> _boost_numeric_ublas_c_vector_lt_double_2_gt_;
typedef unsigned int unsignedint;

class Cylindrical2dMesh_Overloads : public Cylindrical2dMesh{
    public:
    using Cylindrical2dMesh::Cylindrical2dMesh;
    void ReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            Cylindrical2dMesh,
            ReMesh,
            rMap);
    }
    ::boost::numeric::ublas::c_vector<double, 2> GetVectorFromAtoB(::boost::numeric::ublas::c_vector<double, 2> const & rLocation1, ::boost::numeric::ublas::c_vector<double, 2> const & rLocation2) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_2_gt_,
            Cylindrical2dMesh,
            GetVectorFromAtoB,
            rLocation1, 
rLocation2);
    }
    void SetNode(unsigned int index, ::ChastePoint<2> point, bool concreteMove) override {
        PYBIND11_OVERRIDE(
            void,
            Cylindrical2dMesh,
            SetNode,
            index, 
point, 
concreteMove);
    }
    double GetWidth(unsigned int const & rDimension) const  override {
        PYBIND11_OVERRIDE(
            double,
            Cylindrical2dMesh,
            GetWidth,
            rDimension);
    }
    unsigned int AddNode(::Node<2> * pNewNode) override {
        PYBIND11_OVERRIDE(
            unsignedint,
            Cylindrical2dMesh,
            AddNode,
            pNewNode);
    }

};
void register_Cylindrical2dMesh_class(py::module &m){
py::class_<Cylindrical2dMesh , Cylindrical2dMesh_Overloads , boost::shared_ptr<Cylindrical2dMesh >  , MutableMesh<2, 2>  >(m, "Cylindrical2dMesh")
        .def(py::init<double >(), py::arg("width"))
        .def(py::init<double, ::std::vector<Node<2> *> >(), py::arg("width"), py::arg("nodes"))
        .def(
            "ReMesh", 
            (void(Cylindrical2dMesh::*)(::NodeMap &)) &Cylindrical2dMesh::ReMesh, 
            " " , py::arg("rMap") )
        .def(
            "GetVectorFromAtoB", 
            (::boost::numeric::ublas::c_vector<double, 2>(Cylindrical2dMesh::*)(::boost::numeric::ublas::c_vector<double, 2> const &, ::boost::numeric::ublas::c_vector<double, 2> const &)) &Cylindrical2dMesh::GetVectorFromAtoB, 
            " " , py::arg("rLocation1"), py::arg("rLocation2") )
        .def(
            "SetNode", 
            (void(Cylindrical2dMesh::*)(unsigned int, ::ChastePoint<2>, bool)) &Cylindrical2dMesh::SetNode, 
            " " , py::arg("index"), py::arg("point"), py::arg("concreteMove") )
        .def(
            "GetWidth", 
            (double(Cylindrical2dMesh::*)(unsigned int const &) const ) &Cylindrical2dMesh::GetWidth, 
            " " , py::arg("rDimension") )
        .def(
            "AddNode", 
            (unsigned int(Cylindrical2dMesh::*)(::Node<2> *)) &Cylindrical2dMesh::AddNode, 
            " " , py::arg("pNewNode") )
    ;
}
