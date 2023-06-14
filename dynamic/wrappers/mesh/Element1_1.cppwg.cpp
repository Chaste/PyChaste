#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "Element.hpp"

#include "Element1_1.cppwg.hpp"

namespace py = pybind11;
typedef Element<1,1 > Element1_1;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class Element1_1_Overloads : public Element1_1{
    public:
    using Element1_1::Element;
    void RegisterWithNodes() override {
        PYBIND11_OVERLOAD(
            void,
            Element1_1,
            RegisterWithNodes,
            );
    }
    void MarkAsDeleted() override {
        PYBIND11_OVERLOAD(
            void,
            Element1_1,
            MarkAsDeleted,
            );
    }
    void UpdateNode(unsigned int const & rIndex, ::Node<1> * pNode) override {
        PYBIND11_OVERLOAD(
            void,
            Element1_1,
            UpdateNode,
            rIndex, 
pNode);
    }

};
void register_Element1_1_class(py::module &m){
py::class_<Element1_1 , Element1_1_Overloads , boost::shared_ptr<Element1_1 >   >(m, "Element1_1")
        .def(py::init<unsigned int, ::std::vector<Node<1> *> const &, bool >(), py::arg("index"), py::arg("rNodes"), py::arg("registerWithNodes") = true)
        .def(py::init<::Element<1, 1> const &, unsigned int const >(), py::arg("rElement"), py::arg("index"))
        .def(
            "RegisterWithNodes", 
            (void(Element1_1::*)()) &Element1_1::RegisterWithNodes, 
            " "  )
        .def(
            "MarkAsDeleted", 
            (void(Element1_1::*)()) &Element1_1::MarkAsDeleted, 
            " "  )
        .def(
            "UpdateNode", 
            (void(Element1_1::*)(unsigned int const &, ::Node<1> *)) &Element1_1::UpdateNode, 
            " " , py::arg("rIndex"), py::arg("pNode") )
        .def(
            "ResetIndex", 
            (void(Element1_1::*)(unsigned int)) &Element1_1::ResetIndex, 
            " " , py::arg("index") )
        .def(
            "CalculateCircumsphere", 
            (::boost::numeric::ublas::c_vector<double, 2>(Element1_1::*)(::boost::numeric::ublas::c_matrix<double, 1, 1> &, ::boost::numeric::ublas::c_matrix<double, 1, 1> &)) &Element1_1::CalculateCircumsphere, 
            " " , py::arg("rJacobian"), py::arg("rInverseJacobian") )
        .def(
            "CalculateQuality", 
            (double(Element1_1::*)()) &Element1_1::CalculateQuality, 
            " "  )
        .def(
            "CalculateMinMaxEdgeLengths", 
            (::boost::numeric::ublas::c_vector<double, 2>(Element1_1::*)()) &Element1_1::CalculateMinMaxEdgeLengths, 
            " "  )
        .def(
            "CalculateInterpolationWeights", 
            (::boost::numeric::ublas::c_vector<double, 2>(Element1_1::*)(::ChastePoint<1> const &)) &Element1_1::CalculateInterpolationWeights, 
            " " , py::arg("rTestPoint") )
        .def(
            "CalculateInterpolationWeightsWithProjection", 
            (::boost::numeric::ublas::c_vector<double, 2>(Element1_1::*)(::ChastePoint<1> const &)) &Element1_1::CalculateInterpolationWeightsWithProjection, 
            " " , py::arg("rTestPoint") )
        .def(
            "CalculateXi", 
            (::boost::numeric::ublas::c_vector<double, 1>(Element1_1::*)(::ChastePoint<1> const &)) &Element1_1::CalculateXi, 
            " " , py::arg("rTestPoint") )
        .def(
            "IncludesPoint", 
            (bool(Element1_1::*)(::ChastePoint<1> const &, bool)) &Element1_1::IncludesPoint, 
            " " , py::arg("rTestPoint"), py::arg("strict") = false )
    ;
}
