
import cppwg.templates.custom


class PopulationWriter_custom(cppwg.templates.custom.Custom):

    def __init__(self):
        pass

    def get_class_cpp_def_code(self, class_name):

        cell_writers = [
            "CellAgesWriter", 
            "CellAncestorWriter", 
            "CellAppliedForceWriter",
            "CellCycleModelProteinConcentrationsWriter",
            "CellDataItemWriter",
            "CellDeltaNotchWriter",
            "CellIdWriter",
            "CellLabelWriter",
            "CellLocationIndexWriter",
            "CellMutationStatesWriter",
            "CellProliferativePhasesWriter",
            "CellProliferativeTypesWriter",
            "CellRadiusWriter",
            "CellRosetteRankWriter",
            "CellVolumesWriter",
            "LegacyCellProliferativeTypesWriter",
            ]
        
        for eachWriter in cell_writers:
            local_reps = {"class_name": class_name,
                          "writer": eachWriter}
            local_code = """\
        .def("AddCellWriter{writer}", &{class_name}::AddCellWriter<{writer}>)
"""
            code += local_code.format(**local_reps)

        cell_population_count_writers = [
            "CellMutationStatesCountWriter",
            "CellProliferativeTypesCountWriter",
            "CellProliferativePhasesCountWriter",
            ]
        
        for eachWriter in cell_population_count_writers:
            local_reps = {"class_name": class_name,
                          "writer": eachWriter}
            local_code = """\
        .def("AddCellPopulationCountWriter{writer}", &{class_name}::AddCellPopulationCountWriter<{writer}>)
"""
            code += local_code.format(**local_reps)

        cell_population_event_writers = [
            "CellDivisionLocationsWriter",
            "CellRemovalLocationsWriter",
            ]
        for eachWriter in cell_population_event_writers:
            local_reps = {"class_name": class_name,
                          "writer": eachWriter}
            local_code = """\
        .def("AddCellPopulationEventWriter{writer}", &{class_name}::AddCellPopulationEventWriter<{writer}>)
"""
            code += local_code.format(**local_reps)

        code = ""
        population_writers = [
            "BoundaryNodeWriter",
            "CellPopulationAdjacencyMatrixWriter",
            "CellPopulationAreaWriter",
            "CellPopulationElementWriter",
            "HeterotypicBoundaryLengthWriter",
            "NodeLocationWriter",
            "NodeVelocityWriter",
            "RadialCellDataDistributionWriter",
            "VertexIntersectionSwapLocationsWriter",
            "VertexT1SwapLocationsWriter",
            "VertexT2SwapLocationsWriter",
            "VertexT3SwapLocationsWriter",
            "VoronoiDataWriter",
            ]
        for eachWriter in population_writers:
            local_reps = {"class_name": class_name,
                          "writer": eachWriter}
            local_code = """\
        .def("AddPopulationWriter{writer}", &{class_name}::AddPopulationWriter<{writer}>)
"""
            code += local_code.format(**local_reps)

        return code
