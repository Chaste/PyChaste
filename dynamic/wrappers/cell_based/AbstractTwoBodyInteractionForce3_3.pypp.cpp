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
#include "AbstractTwoBodyInteractionForce3_3.pypp.hpp"

namespace bp = boost::python;

struct AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper : AbstractTwoBodyInteractionForce< 3, 3 >, bp::wrapper< AbstractTwoBodyInteractionForce< 3, 3 > > {

    AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper( )
    : AbstractTwoBodyInteractionForce<3, 3>( )
      , bp::wrapper< AbstractTwoBodyInteractionForce< 3, 3 > >(){
        // null constructor
    
    }

    virtual void AddForceContribution( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_AddForceContribution = this->get_override( "AddForceContribution" ) )
            func_AddForceContribution( boost::ref(rCellPopulation) );
        else{
            this->AbstractTwoBodyInteractionForce< 3, 3 >::AddForceContribution( boost::ref(rCellPopulation) );
        }
    }
    
    void default_AddForceContribution( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractTwoBodyInteractionForce< 3, 3 >::AddForceContribution( boost::ref(rCellPopulation) );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 3 > CalculateForceBetweenNodes( unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation< 3, 3 > & rCellPopulation ){
        bp::override func_CalculateForceBetweenNodes = this->get_override( "CalculateForceBetweenNodes" );
        return func_CalculateForceBetweenNodes( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation) );
    }

    virtual void OutputForceParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputForceParameters = this->get_override( "OutputForceParameters" ) )
            func_OutputForceParameters( boost::ref(rParamsFile) );
        else{
            this->AbstractTwoBodyInteractionForce< 3, 3 >::OutputForceParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputForceParameters( ::out_stream & rParamsFile ) {
        AbstractTwoBodyInteractionForce< 3, 3 >::OutputForceParameters( boost::ref(rParamsFile) );
    }

    virtual void WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        if( bp::override func_WriteDataToVisualizerSetupFile = this->get_override( "WriteDataToVisualizerSetupFile" ) )
            func_WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        else{
            this->AbstractTwoBodyInteractionForce< 3, 3 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        }
    }
    
    void default_WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        AbstractTwoBodyInteractionForce< 3, 3 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
    }

};

void register_AbstractTwoBodyInteractionForce3_3_class(){

    bp::class_< AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper, bp::bases< AbstractForce< 3, 3 > >, boost::noncopyable >( "AbstractTwoBodyInteractionForce3_3", bp::init< >() )    
        .def( 
            "AddForceContribution"
            , (void ( ::AbstractTwoBodyInteractionForce<3, 3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractTwoBodyInteractionForce< 3, 3 >::AddForceContribution)
            , (void ( AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper::default_AddForceContribution)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "CalculateForceBetweenNodes"
            , bp::pure_virtual( (::boost::numeric::ublas::c_vector< double, 3 > ( ::AbstractTwoBodyInteractionForce<3, 3>::* )( unsigned int,unsigned int,::AbstractCellPopulation< 3, 3 > & ))(&::AbstractTwoBodyInteractionForce< 3, 3 >::CalculateForceBetweenNodes) )
            , ( bp::arg("nodeAGlobalIndex"), bp::arg("nodeBGlobalIndex"), bp::arg("rCellPopulation") ) )    
        .def( 
            "GetCutOffLength"
            , (double ( ::AbstractTwoBodyInteractionForce<3, 3>::* )(  ))( &::AbstractTwoBodyInteractionForce< 3, 3 >::GetCutOffLength ) )    
        .def( 
            "GetUseCutOffLength"
            , (bool ( ::AbstractTwoBodyInteractionForce<3, 3>::* )(  ))( &::AbstractTwoBodyInteractionForce< 3, 3 >::GetUseCutOffLength ) )    
        .def( 
            "OutputForceParameters"
            , (void ( ::AbstractTwoBodyInteractionForce<3, 3>::* )( ::out_stream & ))(&::AbstractTwoBodyInteractionForce< 3, 3 >::OutputForceParameters)
            , (void ( AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper::* )( ::out_stream & ))(&AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper::default_OutputForceParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetCutOffLength"
            , (void ( ::AbstractTwoBodyInteractionForce<3, 3>::* )( double ))( &::AbstractTwoBodyInteractionForce< 3, 3 >::SetCutOffLength )
            , ( bp::arg("cutOffLength") ) )    
        .def( 
            "WriteDataToVisualizerSetupFile"
            , (void ( ::AbstractTwoBodyInteractionForce<3, 3>::* )( ::out_stream & ))(&::AbstractTwoBodyInteractionForce< 3, 3 >::WriteDataToVisualizerSetupFile)
            , (void ( AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper::* )( ::out_stream & ))(&AbstractTwoBodyInteractionForce_less__3_comma__3__greater__wrapper::default_WriteDataToVisualizerSetupFile)
            , ( bp::arg("pVizSetupFile") ) );

}
