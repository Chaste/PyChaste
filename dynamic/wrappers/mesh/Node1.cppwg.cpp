#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "Node.hpp"

#include "Node1.cppwg.hpp"

namespace py = pybind11;
typedef Node<1 > Node1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_Node1_class(py::module &m){
py::class_<Node1  , boost::shared_ptr<Node1 >   >(m, "Node1")
        .def(py::init<unsigned int, ::ChastePoint<1>, bool >(), py::arg("index"), py::arg("point"), py::arg("isBoundaryNode") = false)
        .def(py::init<unsigned int, ::std::vector<double>, bool >(), py::arg("index"), py::arg("coords"), py::arg("isBoundaryNode") = false)
        .def(py::init<unsigned int, ::boost::numeric::ublas::c_vector<double, 1>, bool >(), py::arg("index"), py::arg("location"), py::arg("isBoundaryNode") = false)
        .def(py::init<unsigned int, bool, double, double, double >(), py::arg("index"), py::arg("isBoundaryNode") = false, py::arg("v1") = 0, py::arg("v2") = 0, py::arg("v3") = 0)
        .def(py::init<unsigned int, double *, bool >(), py::arg("index"), py::arg("location"), py::arg("isBoundaryNode") = false)
        .def(
            "SetPoint", 
            (void(Node1::*)(::ChastePoint<1>)) &Node1::SetPoint, 
            " " , py::arg("point") )
        .def(
            "SetIndex", 
            (void(Node1::*)(unsigned int)) &Node1::SetIndex, 
            " " , py::arg("index") )
        .def(
            "AddNodeAttribute", 
            (void(Node1::*)(double)) &Node1::AddNodeAttribute, 
            " " , py::arg("attribute") )
        .def(
            "SetAsBoundaryNode", 
            (void(Node1::*)(bool)) &Node1::SetAsBoundaryNode, 
            " " , py::arg("value") = true )
        .def(
            "GetPoint", 
            (::ChastePoint<1>(Node1::*)() const ) &Node1::GetPoint, 
            " "  )
        .def(
            "rGetLocation", 
            (::boost::numeric::ublas::c_vector<double, 1> const &(Node1::*)() const ) &Node1::rGetLocation, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetModifiableLocation", 
            (::boost::numeric::ublas::c_vector<double, 1> &(Node1::*)()) &Node1::rGetModifiableLocation, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetIndex", 
            (unsigned int(Node1::*)() const ) &Node1::GetIndex, 
            " "  )
        .def(
            "IsBoundaryNode", 
            (bool(Node1::*)() const ) &Node1::IsBoundaryNode, 
            " "  )
        .def(
            "AddElement", 
            (void(Node1::*)(unsigned int)) &Node1::AddElement, 
            " " , py::arg("index") )
        .def(
            "RemoveElement", 
            (void(Node1::*)(unsigned int)) &Node1::RemoveElement, 
            " " , py::arg("index") )
        .def(
            "RemoveBoundaryElement", 
            (void(Node1::*)(unsigned int)) &Node1::RemoveBoundaryElement, 
            " " , py::arg("index") )
        .def(
            "AddBoundaryElement", 
            (void(Node1::*)(unsigned int)) &Node1::AddBoundaryElement, 
            " " , py::arg("index") )
        .def(
            "AddNeighbour", 
            (void(Node1::*)(unsigned int)) &Node1::AddNeighbour, 
            " " , py::arg("index") )
        .def(
            "ClearNeighbours", 
            (void(Node1::*)()) &Node1::ClearNeighbours, 
            " "  )
        .def(
            "RemoveDuplicateNeighbours", 
            (void(Node1::*)()) &Node1::RemoveDuplicateNeighbours, 
            " "  )
        .def(
            "NeighboursIsEmpty", 
            (bool(Node1::*)()) &Node1::NeighboursIsEmpty, 
            " "  )
        .def(
            "SetNeighboursSetUp", 
            (void(Node1::*)(bool)) &Node1::SetNeighboursSetUp, 
            " " , py::arg("flag") )
        .def(
            "GetNeighboursSetUp", 
            (bool(Node1::*)()) &Node1::GetNeighboursSetUp, 
            " "  )
        .def(
            "rGetNeighbours", 
            (::std::vector<unsigned int> &(Node1::*)()) &Node1::rGetNeighbours, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetContainingElementIndices", 
            (::std::set<unsigned int> &(Node1::*)()) &Node1::rGetContainingElementIndices, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetNodeAttributes", 
            (::std::vector<double> &(Node1::*)()) &Node1::rGetNodeAttributes, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetNumNodeAttributes", 
            (unsigned int(Node1::*)()) &Node1::GetNumNodeAttributes, 
            " "  )
        .def(
            "HasNodeAttributes", 
            (bool(Node1::*)()) &Node1::HasNodeAttributes, 
            " "  )
        .def(
            "rGetContainingBoundaryElementIndices", 
            (::std::set<unsigned int> &(Node1::*)()) &Node1::rGetContainingBoundaryElementIndices, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetNumContainingElements", 
            (unsigned int(Node1::*)() const ) &Node1::GetNumContainingElements, 
            " "  )
        .def(
            "GetNumBoundaryElements", 
            (unsigned int(Node1::*)() const ) &Node1::GetNumBoundaryElements, 
            " "  )
        .def(
            "rGetAppliedForce", 
            (::boost::numeric::ublas::c_vector<double, 1> &(Node1::*)()) &Node1::rGetAppliedForce, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "ClearAppliedForce", 
            (void(Node1::*)()) &Node1::ClearAppliedForce, 
            " "  )
        .def(
            "AddAppliedForceContribution", 
            (void(Node1::*)(::boost::numeric::ublas::c_vector<double, 1> const &)) &Node1::AddAppliedForceContribution, 
            " " , py::arg("rForceContribution") )
        .def(
            "IsParticle", 
            (bool(Node1::*)()) &Node1::IsParticle, 
            " "  )
        .def(
            "SetIsParticle", 
            (void(Node1::*)(bool)) &Node1::SetIsParticle, 
            " " , py::arg("isParticle") )
        .def(
            "GetRadius", 
            (double(Node1::*)()) &Node1::GetRadius, 
            " "  )
        .def(
            "SetRadius", 
            (void(Node1::*)(double)) &Node1::SetRadius, 
            " " , py::arg("radius") )
        .def(
            "MarkAsDeleted", 
            (void(Node1::*)()) &Node1::MarkAsDeleted, 
            " "  )
        .def(
            "IsDeleted", 
            (bool(Node1::*)() const ) &Node1::IsDeleted, 
            " "  )
        .def(
            "MarkAsInternal", 
            (void(Node1::*)()) &Node1::MarkAsInternal, 
            " "  )
        .def(
            "IsInternal", 
            (bool(Node1::*)() const ) &Node1::IsInternal, 
            " "  )
        .def(
            "SetRegion", 
            (void(Node1::*)(unsigned int)) &Node1::SetRegion, 
            " " , py::arg("region") )
        .def(
            "GetRegion", 
            (unsigned int(Node1::*)() const ) &Node1::GetRegion, 
            " "  )
        .def(
            "ContainingElementsBegin", 
            (::Node<1>::ContainingElementIterator(Node1::*)() const ) &Node1::ContainingElementsBegin, 
            " "  )
        .def(
            "ContainingElementsEnd", 
            (::Node<1>::ContainingElementIterator(Node1::*)() const ) &Node1::ContainingElementsEnd, 
            " "  )
        .def(
            "ContainingBoundaryElementsBegin", 
            (::Node<1>::ContainingBoundaryElementIterator(Node1::*)() const ) &Node1::ContainingBoundaryElementsBegin, 
            " "  )
        .def(
            "ContainingBoundaryElementsEnd", 
            (::Node<1>::ContainingBoundaryElementIterator(Node1::*)() const ) &Node1::ContainingBoundaryElementsEnd, 
            " "  )
    ;
}
