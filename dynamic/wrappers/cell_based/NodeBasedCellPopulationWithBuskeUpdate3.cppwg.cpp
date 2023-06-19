#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "AbstractCellBasedSimulation.hpp"
#include "AbstractVertexBasedDivisionRule.hpp"
#include "BoundaryNodeWriter.hpp"
#include "CellAgesWriter.hpp"
#include "CellAncestorWriter.hpp"
#include "CellAppliedForceWriter.hpp"
#include "CellCycleModelProteinConcentrationsWriter.hpp"
#include "CellDataItemWriter.hpp"
#include "CellDeltaNotchWriter.hpp"
#include "CellDivisionLocationsWriter.hpp"
#include "CellIdWriter.hpp"
#include "CellLabelWriter.hpp"
#include "CellLocationIndexWriter.hpp"
#include "CellMutationStatesCountWriter.hpp"
#include "CellMutationStatesWriter.hpp"
#include "CellPopulationAdjacencyMatrixWriter.hpp"
#include "CellPopulationAreaWriter.hpp"
#include "CellPopulationElementWriter.hpp"
#include "CellProliferativePhasesCountWriter.hpp"
#include "CellProliferativePhasesWriter.hpp"
#include "CellProliferativeTypesCountWriter.hpp"
#include "CellProliferativeTypesWriter.hpp"
#include "CellRadiusWriter.hpp"
#include "CellRemovalLocationsWriter.hpp"
#include "CellRosetteRankWriter.hpp"
#include "CellVolumesWriter.hpp"
#include "HeterotypicBoundaryLengthWriter.hpp"
#include "LegacyCellProliferativeTypesWriter.hpp"
#include "NodeLocationWriter.hpp"
#include "NodeVelocityWriter.hpp"
#include "PottsMeshWriter.hpp"
#include "RadialCellDataDistributionWriter.hpp"
#include "VertexIntersectionSwapLocationsWriter.hpp"
#include "VertexT1SwapLocationsWriter.hpp"
#include "VertexT2SwapLocationsWriter.hpp"
#include "VertexT3SwapLocationsWriter.hpp"
#include "VoronoiDataWriter.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "NodeBasedCellPopulationWithBuskeUpdate.hpp"

#include "NodeBasedCellPopulationWithBuskeUpdate3.cppwg.hpp"

namespace py = pybind11;
typedef NodeBasedCellPopulationWithBuskeUpdate<3 > NodeBasedCellPopulationWithBuskeUpdate3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class NodeBasedCellPopulationWithBuskeUpdate3_Overloads : public NodeBasedCellPopulationWithBuskeUpdate3{
    public:
    using NodeBasedCellPopulationWithBuskeUpdate3::NodeBasedCellPopulationWithBuskeUpdate;
    void UpdateNodeLocations(double dt) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithBuskeUpdate3,
            UpdateNodeLocations,
            dt);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithBuskeUpdate3,
            OutputCellPopulationParameters,
            rParamsFile);
    }

};
void register_NodeBasedCellPopulationWithBuskeUpdate3_class(py::module &m){
py::class_<NodeBasedCellPopulationWithBuskeUpdate3 , NodeBasedCellPopulationWithBuskeUpdate3_Overloads , boost::shared_ptr<NodeBasedCellPopulationWithBuskeUpdate3 >  , NodeBasedCellPopulation<3>  >(m, "NodeBasedCellPopulationWithBuskeUpdate3")
        .def(py::init<::NodesOnlyMesh<3> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, bool >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false)
        .def(py::init<::NodesOnlyMesh<3> & >(), py::arg("rMesh"))
        .def(
            "UpdateNodeLocations", 
            (void(NodeBasedCellPopulationWithBuskeUpdate3::*)(double)) &NodeBasedCellPopulationWithBuskeUpdate3::UpdateNodeLocations, 
            " " , py::arg("dt") )
        .def(
            "OutputCellPopulationParameters", 
            (void(NodeBasedCellPopulationWithBuskeUpdate3::*)(::out_stream &)) &NodeBasedCellPopulationWithBuskeUpdate3::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def("AddCellWriterCellAgesWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &NodeBasedCellPopulationWithBuskeUpdate3::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
