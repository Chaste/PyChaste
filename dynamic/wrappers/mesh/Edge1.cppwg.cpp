#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "Edge.hpp"

#include "Edge1.cppwg.hpp"

namespace py = pybind11;
typedef Edge<1 > Edge1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_Edge1_class(py::module &m){
py::class_<Edge1  , boost::shared_ptr<Edge1 >   >(m, "Edge1")
        .def(py::init<unsigned int >(), py::arg("index"))
        .def(py::init<unsigned int, ::Node<1> *, ::Node<1> * >(), py::arg("index"), py::arg("pNodeA"), py::arg("pNodeB"))
        .def_static(
            "GenerateMapIndex", 
            (::std::pair<unsigned int, unsigned int>(*)(unsigned int, unsigned int)) &Edge1::GenerateMapIndex, 
            " " , py::arg("index1"), py::arg("index2") )
        .def(
            "MarkAsDeleted", 
            (void(Edge1::*)()) &Edge1::MarkAsDeleted, 
            " "  )
        .def(
            "IsDeleted", 
            (bool(Edge1::*)()) &Edge1::IsDeleted, 
            " "  )
        .def(
            "SetIndex", 
            (void(Edge1::*)(unsigned int)) &Edge1::SetIndex, 
            " " , py::arg("index") )
        .def(
            "GetIndex", 
            (unsigned int(Edge1::*)() const ) &Edge1::GetIndex, 
            " "  )
        .def(
            "GetMapIndex", 
            (::std::pair<unsigned int, unsigned int>(Edge1::*)()) &Edge1::GetMapIndex, 
            " "  )
        .def(
            "RemoveNodes", 
            (void(Edge1::*)()) &Edge1::RemoveNodes, 
            " "  )
        .def(
            "SetNodes", 
            (void(Edge1::*)(::Node<1> *, ::Node<1> *)) &Edge1::SetNodes, 
            " " , py::arg("pNodeA"), py::arg("pNodeB") )
        .def(
            "ReplaceNode", 
            (void(Edge1::*)(::Node<1> *, ::Node<1> *)) &Edge1::ReplaceNode, 
            " " , py::arg("pOldNode"), py::arg("pNewNode") )
        .def(
            "GetNode", 
            (::Node<1> *(Edge1::*)(unsigned int) const ) &Edge1::GetNode, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetNumNodes", 
            (unsigned int(Edge1::*)()) &Edge1::GetNumNodes, 
            " "  )
        .def(
            "ContainsNode", 
            (bool(Edge1::*)(::Node<1> *) const ) &Edge1::ContainsNode, 
            " " , py::arg("pNode") )
        .def(
            "rGetCentreLocation", 
            (::boost::numeric::ublas::c_vector<double, 1>(Edge1::*)()) &Edge1::rGetCentreLocation, 
            " "  )
        .def(
            "rGetLength", 
            (double(Edge1::*)()) &Edge1::rGetLength, 
            " "  )
        .def(
            "GetOtherElements", 
            (::std::set<unsigned int>(Edge1::*)(unsigned int)) &Edge1::GetOtherElements, 
            " " , py::arg("elementIndex") )
        .def(
            "AddElement", 
            (void(Edge1::*)(unsigned int)) &Edge1::AddElement, 
            " " , py::arg("elementIndex") )
        .def(
            "RemoveElement", 
            (void(Edge1::*)(unsigned int)) &Edge1::RemoveElement, 
            " " , py::arg("elementIndex") )
        .def(
            "GetNeighbouringElementIndices", 
            (::std::set<unsigned int>(Edge1::*)()) &Edge1::GetNeighbouringElementIndices, 
            " "  )
        .def(
            "GetNumElements", 
            (unsigned int(Edge1::*)()) &Edge1::GetNumElements, 
            " "  )
        .def(
            "IsBoundaryEdge", 
            (bool(Edge1::*)() const ) &Edge1::IsBoundaryEdge, 
            " "  )
    ;
}
