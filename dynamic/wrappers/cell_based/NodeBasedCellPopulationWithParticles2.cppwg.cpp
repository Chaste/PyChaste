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
#include "NodeBasedCellPopulationWithParticles.hpp"

#include "NodeBasedCellPopulationWithParticles2.cppwg.hpp"

namespace py = pybind11;
typedef NodeBasedCellPopulationWithParticles<2 > NodeBasedCellPopulationWithParticles2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::CellPtr _CellPtr;

class NodeBasedCellPopulationWithParticles2_Overloads : public NodeBasedCellPopulationWithParticles2{
    public:
    using NodeBasedCellPopulationWithParticles2::NodeBasedCellPopulationWithParticles;
    void UpdateParticlesAfterReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles2,
            UpdateParticlesAfterReMesh,
            rMap);
    }
    bool IsParticle(unsigned int index) override {
        PYBIND11_OVERRIDE(
            bool,
            NodeBasedCellPopulationWithParticles2,
            IsParticle,
            index);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            NodeBasedCellPopulationWithParticles2,
            AddCell,
            pNewCell, 
pParentCell);
    }
    void WriteVtkResultsToFile(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles2,
            WriteVtkResultsToFile,
            rDirectory);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles2,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void Validate() override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles2,
            Validate,
            );
    }
    void AcceptCellWritersAcrossPopulation() override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles2,
            AcceptCellWritersAcrossPopulation,
            );
    }

};
void register_NodeBasedCellPopulationWithParticles2_class(py::module &m){
py::class_<NodeBasedCellPopulationWithParticles2 , NodeBasedCellPopulationWithParticles2_Overloads , boost::shared_ptr<NodeBasedCellPopulationWithParticles2 >  , NodeBasedCellPopulation<2>  >(m, "NodeBasedCellPopulationWithParticles2")
        .def(py::init<::NodesOnlyMesh<2> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, bool >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false)
        .def(py::init<::NodesOnlyMesh<2> & >(), py::arg("rMesh"))
        .def(
            "UpdateParticlesAfterReMesh", 
            (void(NodeBasedCellPopulationWithParticles2::*)(::NodeMap &)) &NodeBasedCellPopulationWithParticles2::UpdateParticlesAfterReMesh, 
            " " , py::arg("rMap") )
        .def(
            "IsParticle", 
            (bool(NodeBasedCellPopulationWithParticles2::*)(unsigned int)) &NodeBasedCellPopulationWithParticles2::IsParticle, 
            " " , py::arg("index") )
        .def(
            "GetParticleIndices", 
            (::std::set<unsigned int>(NodeBasedCellPopulationWithParticles2::*)()) &NodeBasedCellPopulationWithParticles2::GetParticleIndices, 
            " "  )
        .def(
            "AddCell", 
            (::CellPtr(NodeBasedCellPopulationWithParticles2::*)(::CellPtr, ::CellPtr)) &NodeBasedCellPopulationWithParticles2::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") )
        .def(
            "WriteVtkResultsToFile", 
            (void(NodeBasedCellPopulationWithParticles2::*)(::std::string const &)) &NodeBasedCellPopulationWithParticles2::WriteVtkResultsToFile, 
            " " , py::arg("rDirectory") )
        .def(
            "OutputCellPopulationParameters", 
            (void(NodeBasedCellPopulationWithParticles2::*)(::out_stream &)) &NodeBasedCellPopulationWithParticles2::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def("AddCellWriterCellAgesWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &NodeBasedCellPopulationWithParticles2::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &NodeBasedCellPopulationWithParticles2::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &NodeBasedCellPopulationWithParticles2::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &NodeBasedCellPopulationWithParticles2::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &NodeBasedCellPopulationWithParticles2::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &NodeBasedCellPopulationWithParticles2::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &NodeBasedCellPopulationWithParticles2::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
