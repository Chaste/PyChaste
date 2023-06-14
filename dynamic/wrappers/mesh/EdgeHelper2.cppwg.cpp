#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "EdgeHelper.hpp"

#include "EdgeHelper2.cppwg.hpp"

namespace py = pybind11;
typedef EdgeHelper<2 > EdgeHelper2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_Edge2_class(py::module &m){
py::class_<EdgeHelper2  , boost::shared_ptr<EdgeHelper2 >   >(m, "EdgeHelper2")
        .def(py::init<>())
        .def_static(
            "GenerateMapIndex", 
            (::std::pair<unsigned int, unsigned int>(*)(unsigned int, unsigned int)) &EdgeHelper2::GenerateMapIndex, 
            " " , py::arg("index1"), py::arg("index2") )
        .def(
            "GetEdgeFromNodes", 
            (::Edge<2> *(::Node<2> *, ::Node<2> *)) &EdgeHelper2::GetEdgeFromNodes, 
            " " , py::arg("node0"), py::arg("node1") ) 
        .def(
            "GetEdgeFromNodes", 
            (::Edge<2> *(unsigned int, ::Node<2> *, ::Node<2> *)) &EdgeHelper2::GetEdgeFromNodes, 
            " " , py::arg("elementIndex"), py::arg("node0"), py::arg("node1") ) 
        .def(
            "GetEdge", 
            (::Edge<2> *(unsigned int)) &EdgeHelper2::GetEdge, 
            " " , py::arg("index"), py::arg("node0"), py::arg("node1") ) 
        .def(
            "RemoveDeletedEdges", 
            (void(EdgeHelper2::*)()) &EdgeHelper2::RemoveDeletedEdges, 
            " "  )
        .def(
            "GetNumEdges", 
            (unsigned int(EdgeHelper2::*)() const ) &EdgeHelper2::GetNumEdges, 
            " "  )
    ;
}
