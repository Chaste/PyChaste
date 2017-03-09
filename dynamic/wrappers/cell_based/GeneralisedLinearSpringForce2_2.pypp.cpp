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
#include "cell_based_headers.hpp"
#include "GeneralisedLinearSpringForce2_2.pypp.hpp"

namespace bp = boost::python;

struct GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper : GeneralisedLinearSpringForce< 2, 2 >, bp::wrapper< GeneralisedLinearSpringForce< 2, 2 > > {

    GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper(GeneralisedLinearSpringForce<2, 2> const & arg )
    : GeneralisedLinearSpringForce<2, 2>( arg )
      , bp::wrapper< GeneralisedLinearSpringForce< 2, 2 > >(){
        // copy constructor
        
    }

    GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper( )
    : GeneralisedLinearSpringForce<2, 2>( )
      , bp::wrapper< GeneralisedLinearSpringForce< 2, 2 > >(){
        // null constructor
    
    }

    virtual ::boost::numeric::ublas::c_vector< double, 2 > CalculateForceBetweenNodes( unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_CalculateForceBetweenNodes = this->get_override( "CalculateForceBetweenNodes" ) )
            return func_CalculateForceBetweenNodes( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation) );
        else{
            return this->GeneralisedLinearSpringForce< 2, 2 >::CalculateForceBetweenNodes( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation) );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 2 > default_CalculateForceBetweenNodes( unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        return GeneralisedLinearSpringForce< 2, 2 >::CalculateForceBetweenNodes( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation) );
    }

    virtual void OutputForceParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputForceParameters = this->get_override( "OutputForceParameters" ) )
            func_OutputForceParameters( boost::ref(rParamsFile) );
        else{
            this->GeneralisedLinearSpringForce< 2, 2 >::OutputForceParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputForceParameters( ::out_stream & rParamsFile ) {
        GeneralisedLinearSpringForce< 2, 2 >::OutputForceParameters( boost::ref(rParamsFile) );
    }

    virtual double VariableSpringConstantMultiplicationFactor( unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation< 2, 2 > & rCellPopulation, bool isCloserThanRestLength ) {
        if( bp::override func_VariableSpringConstantMultiplicationFactor = this->get_override( "VariableSpringConstantMultiplicationFactor" ) )
            return func_VariableSpringConstantMultiplicationFactor( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation), isCloserThanRestLength );
        else{
            return this->GeneralisedLinearSpringForce< 2, 2 >::VariableSpringConstantMultiplicationFactor( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation), isCloserThanRestLength );
        }
    }
    
    double default_VariableSpringConstantMultiplicationFactor( unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation< 2, 2 > & rCellPopulation, bool isCloserThanRestLength ) {
        return GeneralisedLinearSpringForce< 2, 2 >::VariableSpringConstantMultiplicationFactor( nodeAGlobalIndex, nodeBGlobalIndex, boost::ref(rCellPopulation), isCloserThanRestLength );
    }

    virtual void AddForceContribution( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_AddForceContribution = this->get_override( "AddForceContribution" ) )
            func_AddForceContribution( boost::ref(rCellPopulation) );
        else{
            this->AbstractTwoBodyInteractionForce< 2, 2 >::AddForceContribution( boost::ref(rCellPopulation) );
        }
    }
    
    void default_AddForceContribution( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        AbstractTwoBodyInteractionForce< 2, 2 >::AddForceContribution( boost::ref(rCellPopulation) );
    }

    virtual void WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        if( bp::override func_WriteDataToVisualizerSetupFile = this->get_override( "WriteDataToVisualizerSetupFile" ) )
            func_WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        else{
            this->AbstractTwoBodyInteractionForce< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        }
    }
    
    void default_WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        AbstractTwoBodyInteractionForce< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
    }

};

void register_GeneralisedLinearSpringForce2_2_class(){

    bp::class_< GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper, bp::bases< AbstractTwoBodyInteractionForce< 2, 2 > > >( "GeneralisedLinearSpringForce2_2", bp::init< >() )    
        .def( 
            "CalculateForceBetweenNodes"
            , (::boost::numeric::ublas::c_vector< double, 2 > ( ::GeneralisedLinearSpringForce<2, 2>::* )( unsigned int,unsigned int,::AbstractCellPopulation< 2, 2 > & ))(&::GeneralisedLinearSpringForce< 2, 2 >::CalculateForceBetweenNodes)
            , (::boost::numeric::ublas::c_vector< double, 2 > ( GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::* )( unsigned int,unsigned int,::AbstractCellPopulation< 2, 2 > & ))(&GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::default_CalculateForceBetweenNodes)
            , ( bp::arg("nodeAGlobalIndex"), bp::arg("nodeBGlobalIndex"), bp::arg("rCellPopulation") ) )    
        .def( 
            "GetMeinekeDivisionRestingSpringLength"
            , (double ( ::GeneralisedLinearSpringForce<2, 2>::* )(  ))( &::GeneralisedLinearSpringForce< 2, 2 >::GetMeinekeDivisionRestingSpringLength ) )    
        .def( 
            "GetMeinekeSpringGrowthDuration"
            , (double ( ::GeneralisedLinearSpringForce<2, 2>::* )(  ))( &::GeneralisedLinearSpringForce< 2, 2 >::GetMeinekeSpringGrowthDuration ) )    
        .def( 
            "GetMeinekeSpringStiffness"
            , (double ( ::GeneralisedLinearSpringForce<2, 2>::* )(  ))( &::GeneralisedLinearSpringForce< 2, 2 >::GetMeinekeSpringStiffness ) )    
        .def( 
            "OutputForceParameters"
            , (void ( ::GeneralisedLinearSpringForce<2, 2>::* )( ::out_stream & ))(&::GeneralisedLinearSpringForce< 2, 2 >::OutputForceParameters)
            , (void ( GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::* )( ::out_stream & ))(&GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::default_OutputForceParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetMeinekeDivisionRestingSpringLength"
            , (void ( ::GeneralisedLinearSpringForce<2, 2>::* )( double ))( &::GeneralisedLinearSpringForce< 2, 2 >::SetMeinekeDivisionRestingSpringLength )
            , ( bp::arg("divisionRestingSpringLength") ) )    
        .def( 
            "SetMeinekeSpringGrowthDuration"
            , (void ( ::GeneralisedLinearSpringForce<2, 2>::* )( double ))( &::GeneralisedLinearSpringForce< 2, 2 >::SetMeinekeSpringGrowthDuration )
            , ( bp::arg("springGrowthDuration") ) )    
        .def( 
            "SetMeinekeSpringStiffness"
            , (void ( ::GeneralisedLinearSpringForce<2, 2>::* )( double ))( &::GeneralisedLinearSpringForce< 2, 2 >::SetMeinekeSpringStiffness )
            , ( bp::arg("springStiffness") ) )    
        .def( 
            "VariableSpringConstantMultiplicationFactor"
            , (double ( ::GeneralisedLinearSpringForce<2, 2>::* )( unsigned int,unsigned int,::AbstractCellPopulation< 2, 2 > &,bool ))(&::GeneralisedLinearSpringForce< 2, 2 >::VariableSpringConstantMultiplicationFactor)
            , (double ( GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::* )( unsigned int,unsigned int,::AbstractCellPopulation< 2, 2 > &,bool ))(&GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::default_VariableSpringConstantMultiplicationFactor)
            , ( bp::arg("nodeAGlobalIndex"), bp::arg("nodeBGlobalIndex"), bp::arg("rCellPopulation"), bp::arg("isCloserThanRestLength") ) )    
        .def( 
            "AddForceContribution"
            , (void ( ::AbstractTwoBodyInteractionForce<2, 2>::* )( ::AbstractCellPopulation< 2, 2 > & ))(&::AbstractTwoBodyInteractionForce< 2, 2 >::AddForceContribution)
            , (void ( GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::* )( ::AbstractCellPopulation< 2, 2 > & ))(&GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::default_AddForceContribution)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "WriteDataToVisualizerSetupFile"
            , (void ( ::AbstractTwoBodyInteractionForce<2, 2>::* )( ::out_stream & ))(&::AbstractTwoBodyInteractionForce< 2, 2 >::WriteDataToVisualizerSetupFile)
            , (void ( GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::* )( ::out_stream & ))(&GeneralisedLinearSpringForce_less__2_comma__2__greater__wrapper::default_WriteDataToVisualizerSetupFile)
            , ( bp::arg("pVizSetupFile") ) );

}
