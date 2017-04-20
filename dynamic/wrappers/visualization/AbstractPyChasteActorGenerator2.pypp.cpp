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
#include "classes_to_be_wrapped.hpp"
#include "AbstractPyChasteActorGenerator2.pypp.hpp"

namespace bp = boost::python;

struct AbstractPyChasteActorGenerator_less__2__greater__wrapper : AbstractPyChasteActorGenerator< 2 >, bp::wrapper< AbstractPyChasteActorGenerator< 2 > > {

    virtual void AddActor( ::vtkSmartPointer< vtkRenderer > pRenderer ){
        bp::override func_AddActor = this->get_override( "AddActor" );
        func_AddActor( pRenderer );
    }

};

void register_AbstractPyChasteActorGenerator2_class(){

    bp::class_< AbstractPyChasteActorGenerator_less__2__greater__wrapper, boost::noncopyable >( "AbstractPyChasteActorGenerator2" )    
        .def( 
            "AddActor"
            , bp::pure_virtual( (void ( ::AbstractPyChasteActorGenerator<2>::* )( ::vtkSmartPointer< vtkRenderer > ))(&::AbstractPyChasteActorGenerator< 2 >::AddActor) )
            , ( bp::arg("pRenderer") ) )    
        .def( 
            "GetColorTransferFunction"
            , (::vtkSmartPointer< vtkColorTransferFunction > ( ::AbstractPyChasteActorGenerator<2>::* )(  ))( &::AbstractPyChasteActorGenerator< 2 >::GetColorTransferFunction ) )    
        .def( 
            "GetDiscreteColorTransferFunction"
            , (::vtkSmartPointer< vtkColorTransferFunction > ( ::AbstractPyChasteActorGenerator<2>::* )(  ))( &::AbstractPyChasteActorGenerator< 2 >::GetDiscreteColorTransferFunction ) )    
        .def( 
            "GetScaleBar"
            , (::vtkSmartPointer< vtkScalarBarActor > ( ::AbstractPyChasteActorGenerator<2>::* )(  ))( &::AbstractPyChasteActorGenerator< 2 >::GetScaleBar ) )    
        .def( 
            "SetDataLabel"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( ::std::string const & ))( &::AbstractPyChasteActorGenerator< 2 >::SetDataLabel )
            , ( bp::arg("rLabel") ) )    
        .def( 
            "SetEdgeColor"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( ::boost::numeric::ublas::c_vector< double, 3 > const & ))( &::AbstractPyChasteActorGenerator< 2 >::SetEdgeColor )
            , ( bp::arg("rColor") ) )    
        .def( 
            "SetEdgeSize"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( double ))( &::AbstractPyChasteActorGenerator< 2 >::SetEdgeSize )
            , ( bp::arg("size") ) )    
        .def( 
            "SetPointColor"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( ::boost::numeric::ublas::c_vector< double, 3 > const & ))( &::AbstractPyChasteActorGenerator< 2 >::SetPointColor )
            , ( bp::arg("rColor") ) )    
        .def( 
            "SetPointSize"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( double ))( &::AbstractPyChasteActorGenerator< 2 >::SetPointSize )
            , ( bp::arg("size") ) )    
        .def( 
            "SetShowEdges"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( bool ))( &::AbstractPyChasteActorGenerator< 2 >::SetShowEdges )
            , ( bp::arg("show") ) )    
        .def( 
            "SetShowPoints"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( bool ))( &::AbstractPyChasteActorGenerator< 2 >::SetShowPoints )
            , ( bp::arg("show") ) )    
        .def( 
            "SetShowScaleBar"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( double ))( &::AbstractPyChasteActorGenerator< 2 >::SetShowScaleBar )
            , ( bp::arg("show") ) )    
        .def( 
            "SetShowVolume"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( bool ))( &::AbstractPyChasteActorGenerator< 2 >::SetShowVolume )
            , ( bp::arg("show") ) )    
        .def( 
            "SetVolumeColor"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( ::boost::numeric::ublas::c_vector< double, 3 > const & ))( &::AbstractPyChasteActorGenerator< 2 >::SetVolumeColor )
            , ( bp::arg("rColor") ) )    
        .def( 
            "SetVolumeOpacity"
            , (void ( ::AbstractPyChasteActorGenerator<2>::* )( double ))( &::AbstractPyChasteActorGenerator< 2 >::SetVolumeOpacity )
            , ( bp::arg("opacity") ) );

}
