#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "NodeAttributes.hpp"

#include "NodeAttributes1.cppwg.hpp"

namespace py = pybind11;
typedef NodeAttributes<1 > NodeAttributes1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_NodeAttributes1_class(py::module &m){
py::class_<NodeAttributes1  , boost::shared_ptr<NodeAttributes1 >   >(m, "NodeAttributes1")
        .def(py::init< >())
        .def(
            "rGetAttributes", 
            (::std::vector<double> &(NodeAttributes1::*)()) &NodeAttributes1::rGetAttributes, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "AddAttribute", 
            (void(NodeAttributes1::*)(double)) &NodeAttributes1::AddAttribute, 
            " " , py::arg("attribute") )
        .def(
            "GetRegion", 
            (unsigned int(NodeAttributes1::*)()) &NodeAttributes1::GetRegion, 
            " "  )
        .def(
            "SetRegion", 
            (void(NodeAttributes1::*)(unsigned int)) &NodeAttributes1::SetRegion, 
            " " , py::arg("region") )
        .def(
            "rGetAppliedForce", 
            (::boost::numeric::ublas::c_vector<double, 1> &(NodeAttributes1::*)()) &NodeAttributes1::rGetAppliedForce, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "AddAppliedForceContribution", 
            (void(NodeAttributes1::*)(::boost::numeric::ublas::c_vector<double, 1> const &)) &NodeAttributes1::AddAppliedForceContribution, 
            " " , py::arg("rForceContribution") )
        .def(
            "ClearAppliedForce", 
            (void(NodeAttributes1::*)()) &NodeAttributes1::ClearAppliedForce, 
            " "  )
        .def(
            "AddNeighbour", 
            (void(NodeAttributes1::*)(unsigned int)) &NodeAttributes1::AddNeighbour, 
            " " , py::arg("index") )
        .def(
            "ClearNeighbours", 
            (void(NodeAttributes1::*)()) &NodeAttributes1::ClearNeighbours, 
            " "  )
        .def(
            "RemoveDuplicateNeighbours", 
            (void(NodeAttributes1::*)()) &NodeAttributes1::RemoveDuplicateNeighbours, 
            " "  )
        .def(
            "NeighboursIsEmpty", 
            (bool(NodeAttributes1::*)()) &NodeAttributes1::NeighboursIsEmpty, 
            " "  )
        .def(
            "SetNeighboursSetUp", 
            (void(NodeAttributes1::*)(bool)) &NodeAttributes1::SetNeighboursSetUp, 
            " " , py::arg("flag") )
        .def(
            "GetNeighboursSetUp", 
            (bool(NodeAttributes1::*)()) &NodeAttributes1::GetNeighboursSetUp, 
            " "  )
        .def(
            "rGetNeighbours", 
            (::std::vector<unsigned int> &(NodeAttributes1::*)()) &NodeAttributes1::rGetNeighbours, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "IsParticle", 
            (bool(NodeAttributes1::*)()) &NodeAttributes1::IsParticle, 
            " "  )
        .def(
            "SetIsParticle", 
            (void(NodeAttributes1::*)(bool)) &NodeAttributes1::SetIsParticle, 
            " " , py::arg("isParticle") )
        .def(
            "GetRadius", 
            (double(NodeAttributes1::*)()) &NodeAttributes1::GetRadius, 
            " "  )
        .def(
            "SetRadius", 
            (void(NodeAttributes1::*)(double)) &NodeAttributes1::SetRadius, 
            " " , py::arg("radius") )
    ;
}
