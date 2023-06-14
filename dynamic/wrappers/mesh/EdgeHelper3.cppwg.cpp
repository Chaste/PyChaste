#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "EdgeHelper.hpp"

#include "EdgeHelper3.cppwg.hpp"

namespace py = pybind11;
typedef EdgeHelper<3 > EdgeHelper3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_Edge3_class(py::module &m){
py::class_<EdgeHelper3  , boost::shared_ptr<EdgeHelper3 >   >(m, "EdgeHelper3")
        .def(py::init<>())
        .def_static(
            "GenerateMapIndex", 
            (::std::pair<unsigned int, unsigned int>(*)(unsigned int, unsigned int)) &EdgeHelper3::GenerateMapIndex, 
            " " , py::arg("index1"), py::arg("index2") )
        .def(
            "GetEdgeFromNodes", 
            (::Edge<3> *(::Node<3> *, ::Node<3> *)) &EdgeHelper3::GetEdgeFromNodes, 
            " " , py::arg("node0"), py::arg("node1") ) 
        .def(
            "GetEdgeFromNodes", 
            (::Edge<3> *(unsigned int, ::Node<3> *, ::Node<3> *)) &EdgeHelper3::GetEdgeFromNodes, 
            " " , py::arg("elementIndex"), py::arg("node0"), py::arg("node1") ) 
        .def(
            "GetEdge", 
            (::Edge<3> *(unsigned int)) &EdgeHelper3::GetEdge, 
            " " , py::arg("index"), py::arg("node0"), py::arg("node1") ) 
        .def(
            "RemoveDeletedEdges", 
            (void(EdgeHelper3::*)()) &EdgeHelper3::RemoveDeletedEdges, 
            " "  )
        .def(
            "GetNumEdges", 
            (unsigned int(EdgeHelper3::*)() const ) &EdgeHelper3::GetNumEdges, 
            " "  )
    ;
}
