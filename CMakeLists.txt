# Copyright (c) 2005-2024, University of Oxford.
# All rights reserved.
# 
# University of Oxford means the Chancellor, Masters and Scholars of the
# University of Oxford, having an administrative office at Wellington
# Square, Oxford OX1 2JD, UK.
# 
# This file is part of Chaste.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#  * Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#  * Neither the name of the University of Oxford nor the names of its
#    contributors may be used to endorse or promote products derived from this
#    software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
# GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
# OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# 

find_package(Chaste COMPONENTS cell_based)

# PyChaste needs some additional VTK libraries
if(VTK_MAJOR_VERSION LESS_EQUAL 6)
    find_package(VTK COMPONENTS vtkWrappingPythonCore vtkIOImage vtkIOMovie vtkRenderingAnnotation vtkRenderingFreeType 
                vtkRenderingFreeTypeOpenGL vtkRenderingCore 
                vtkRenderingOpenGL vtkInteractionStyle  REQUIRED)
else()
    find_package(VTK COMPONENTS vtkWrappingPythonCore vtkParallelCore vtkParallelMPI vtkIOImage vtkIOMovie vtkRenderingAnnotation
            vtkRenderingFreeType vtkRenderingOpenGL2 vtkRenderingCore vtkFiltersProgrammable vtkFiltersVerdict vtkInteractionStyle REQUIRED)
endif()

list(APPEND Chaste_INCLUDES ${VTK_INCLUDE_DIRS})
list(APPEND Chaste_project_PyChaste_INCLUDE_DIRS ${VTK_INCLUDE_DIRS})
list(APPEND Chaste_THIRD_PARTY_LIBRARIES ${VTK_LIBRARIES})
chaste_do_project(PyChaste)

# Include the Python wrapping build logic
include(${CMAKE_CURRENT_SOURCE_DIR}/WrapPython.cmake)
