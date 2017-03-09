// This file has been generated by Py++.


/*

Copyright (c) 2005-2017, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "boost/python.hpp"
#include "mesh_headers.hpp"
#include "CylindricalHoneycombVertexMeshGenerator.pypp.hpp"

namespace bp = boost::python;

struct SharedCylindricalHoneycombVertexMeshGenerator_wrapper : SharedCylindricalHoneycombVertexMeshGenerator, bp::wrapper< SharedCylindricalHoneycombVertexMeshGenerator > {

    SharedCylindricalHoneycombVertexMeshGenerator_wrapper(SharedCylindricalHoneycombVertexMeshGenerator const & arg )
    : SharedCylindricalHoneycombVertexMeshGenerator( arg )
      , bp::wrapper< SharedCylindricalHoneycombVertexMeshGenerator >(){
        // copy constructor
        
    }

    SharedCylindricalHoneycombVertexMeshGenerator_wrapper(unsigned int numElementsAcross, unsigned int numElementsUp, bool isFlatBottom=false, double cellRearrangementThreshold=0.01, double t2Threshold=0.001 )
    : SharedCylindricalHoneycombVertexMeshGenerator( numElementsAcross, numElementsUp, isFlatBottom, cellRearrangementThreshold, t2Threshold )
      , bp::wrapper< SharedCylindricalHoneycombVertexMeshGenerator >(){
        // constructor
    
    }

    virtual ::boost::shared_ptr< MutableVertexMesh< 2, 2 > > GetMesh(  ) {
        if( bp::override func_GetMesh = this->get_override( "GetMesh" ) )
            return func_GetMesh(  );
        else{
            return this->SharedCylindricalHoneycombVertexMeshGenerator::GetMesh(  );
        }
    }
    
    ::boost::shared_ptr< MutableVertexMesh< 2, 2 > > default_GetMesh(  ) {
        return SharedCylindricalHoneycombVertexMeshGenerator::GetMesh( );
    }

};

void register_CylindricalHoneycombVertexMeshGenerator_class(){

    bp::class_< SharedCylindricalHoneycombVertexMeshGenerator_wrapper >( "CylindricalHoneycombVertexMeshGenerator", bp::init< unsigned int, unsigned int, bp::optional< bool, double, double > >(( bp::arg("numElementsAcross"), bp::arg("numElementsUp"), bp::arg("isFlatBottom")=(bool)(false), bp::arg("cellRearrangementThreshold")=0.01, bp::arg("t2Threshold")=0.001 )) )    
        .def( 
            "GetCylindricalMesh"
            , (::boost::shared_ptr< Cylindrical2dVertexMesh > ( ::SharedCylindricalHoneycombVertexMeshGenerator::* )(  ))( &::SharedCylindricalHoneycombVertexMeshGenerator::GetCylindricalMesh ) )    
        .def( 
            "GetMesh"
            , (::boost::shared_ptr< MutableVertexMesh< 2, 2 > > ( ::SharedCylindricalHoneycombVertexMeshGenerator::* )(  ))(&::SharedCylindricalHoneycombVertexMeshGenerator::GetMesh)
            , (::boost::shared_ptr< MutableVertexMesh< 2, 2 > > ( SharedCylindricalHoneycombVertexMeshGenerator_wrapper::* )(  ))(&SharedCylindricalHoneycombVertexMeshGenerator_wrapper::default_GetMesh) );

}
