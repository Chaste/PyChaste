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

#include "NodeBasedCellPopulationWithParticles3.cppwg.hpp"

namespace py = pybind11;
typedef NodeBasedCellPopulationWithParticles<3 > NodeBasedCellPopulationWithParticles3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::CellPtr _CellPtr;

class NodeBasedCellPopulationWithParticles3_Overloads : public NodeBasedCellPopulationWithParticles3{
    public:
    using NodeBasedCellPopulationWithParticles3::NodeBasedCellPopulationWithParticles;
    void UpdateParticlesAfterReMesh(::NodeMap & rMap) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles3,
            UpdateParticlesAfterReMesh,
            rMap);
    }
    bool IsParticle(unsigned int index) override {
        PYBIND11_OVERRIDE(
            bool,
            NodeBasedCellPopulationWithParticles3,
            IsParticle,
            index);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            NodeBasedCellPopulationWithParticles3,
            AddCell,
            pNewCell, 
pParentCell);
    }
    void WriteVtkResultsToFile(::std::string const & rDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles3,
            WriteVtkResultsToFile,
            rDirectory);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles3,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    void Validate() override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles3,
            Validate,
            );
    }
    void AcceptCellWritersAcrossPopulation() override {
        PYBIND11_OVERRIDE(
            void,
            NodeBasedCellPopulationWithParticles3,
            AcceptCellWritersAcrossPopulation,
            );
    }

};
void register_NodeBasedCellPopulationWithParticles3_class(py::module &m){
py::class_<NodeBasedCellPopulationWithParticles3 , NodeBasedCellPopulationWithParticles3_Overloads , boost::shared_ptr<NodeBasedCellPopulationWithParticles3 >  , NodeBasedCellPopulation<3>  >(m, "NodeBasedCellPopulationWithParticles3")
        .def(py::init<::NodesOnlyMesh<3> &, ::std::vector<boost::shared_ptr<Cell>> &, ::std::vector<unsigned int> const, bool >(), py::arg("rMesh"), py::arg("rCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("deleteMesh") = false)
        .def(py::init<::NodesOnlyMesh<3> & >(), py::arg("rMesh"))
        .def(
            "UpdateParticlesAfterReMesh", 
            (void(NodeBasedCellPopulationWithParticles3::*)(::NodeMap &)) &NodeBasedCellPopulationWithParticles3::UpdateParticlesAfterReMesh, 
            " " , py::arg("rMap") )
        .def(
            "IsParticle", 
            (bool(NodeBasedCellPopulationWithParticles3::*)(unsigned int)) &NodeBasedCellPopulationWithParticles3::IsParticle, 
            " " , py::arg("index") )
        .def(
            "GetParticleIndices", 
            (::std::set<unsigned int>(NodeBasedCellPopulationWithParticles3::*)()) &NodeBasedCellPopulationWithParticles3::GetParticleIndices, 
            " "  )
        .def(
            "AddCell", 
            (::CellPtr(NodeBasedCellPopulationWithParticles3::*)(::CellPtr, ::CellPtr)) &NodeBasedCellPopulationWithParticles3::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") )
        .def(
            "WriteVtkResultsToFile", 
            (void(NodeBasedCellPopulationWithParticles3::*)(::std::string const &)) &NodeBasedCellPopulationWithParticles3::WriteVtkResultsToFile, 
            " " , py::arg("rDirectory") )
        .def(
            "OutputCellPopulationParameters", 
            (void(NodeBasedCellPopulationWithParticles3::*)(::out_stream &)) &NodeBasedCellPopulationWithParticles3::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def("AddCellWriterCellAgesWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellAgesWriter>)
        .def("AddCellWriterCellAncestorWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellAncestorWriter>)
        .def("AddCellWriterCellAppliedForceWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellAppliedForceWriter>)
        .def("AddCellWriterCellCycleModelProteinConcentrationsWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellCycleModelProteinConcentrationsWriter>)
        .def("AddCellWriterCellDataItemWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellDataItemWriter>)
        .def("AddCellWriterCellDeltaNotchWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellDeltaNotchWriter>)
        .def("AddCellWriterCellIdWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellIdWriter>)
        .def("AddCellWriterCellLabelWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellLabelWriter>)
        .def("AddCellWriterCellLocationIndexWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellLocationIndexWriter>)
        .def("AddCellWriterCellMutationStatesWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellMutationStatesWriter>)
        .def("AddCellWriterCellProliferativePhasesWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellProliferativePhasesWriter>)
        .def("AddCellWriterCellProliferativeTypesWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellProliferativeTypesWriter>)
        .def("AddCellWriterCellRadiusWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellRadiusWriter>)
        .def("AddCellWriterCellRosetteRankWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellRosetteRankWriter>)
        .def("AddCellWriterCellVolumesWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<CellVolumesWriter>)
        .def("AddCellWriterLegacyCellProliferativeTypesWriter", &NodeBasedCellPopulationWithParticles3::AddCellWriter<LegacyCellProliferativeTypesWriter>)
        .def("AddCellPopulationCountWriterCellMutationStatesCountWriter", &NodeBasedCellPopulationWithParticles3::AddCellPopulationCountWriter<CellMutationStatesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativeTypesCountWriter", &NodeBasedCellPopulationWithParticles3::AddCellPopulationCountWriter<CellProliferativeTypesCountWriter>)
        .def("AddCellPopulationCountWriterCellProliferativePhasesCountWriter", &NodeBasedCellPopulationWithParticles3::AddCellPopulationCountWriter<CellProliferativePhasesCountWriter>)
        .def("AddCellPopulationEventWriterCellDivisionLocationsWriter", &NodeBasedCellPopulationWithParticles3::AddCellPopulationEventWriter<CellDivisionLocationsWriter>)
        .def("AddCellPopulationEventWriterCellRemovalLocationsWriter", &NodeBasedCellPopulationWithParticles3::AddCellPopulationEventWriter<CellRemovalLocationsWriter>)
        .def("AddPopulationWriterBoundaryNodeWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<BoundaryNodeWriter>)
        .def("AddPopulationWriterCellPopulationAdjacencyMatrixWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<CellPopulationAdjacencyMatrixWriter>)
        .def("AddPopulationWriterCellPopulationAreaWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<CellPopulationAreaWriter>)
        .def("AddPopulationWriterCellPopulationElementWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<CellPopulationElementWriter>)
        .def("AddPopulationWriterHeterotypicBoundaryLengthWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<HeterotypicBoundaryLengthWriter>)
        .def("AddPopulationWriterNodeLocationWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<NodeLocationWriter>)
        .def("AddPopulationWriterNodeVelocityWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<NodeVelocityWriter>)
        .def("AddPopulationWriterRadialCellDataDistributionWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<RadialCellDataDistributionWriter>)
        .def("AddPopulationWriterVertexIntersectionSwapLocationsWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<VertexIntersectionSwapLocationsWriter>)
        .def("AddPopulationWriterVertexT1SwapLocationsWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<VertexT1SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT2SwapLocationsWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<VertexT2SwapLocationsWriter>)
        .def("AddPopulationWriterVertexT3SwapLocationsWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<VertexT3SwapLocationsWriter>)
        .def("AddPopulationWriterVoronoiDataWriter", &NodeBasedCellPopulationWithParticles3::AddPopulationWriter<VoronoiDataWriter>)
    ;
}
