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
#include "AbstractForce2_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractForce_less__2_comma__2__greater__wrapper : AbstractForce< 2, 2 >, bp::wrapper< AbstractForce< 2, 2 > > {

    AbstractForce_less__2_comma__2__greater__wrapper( )
    : AbstractForce<2, 2>( )
      , bp::wrapper< AbstractForce< 2, 2 > >(){
        // null constructor
    
    }

    virtual void AddForceContribution( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ){
        bp::override func_AddForceContribution = this->get_override( "AddForceContribution" );
        func_AddForceContribution( boost::ref(rCellPopulation) );
    }

    virtual void OutputForceParameters( ::out_stream & rParamsFile ){
        bp::override func_OutputForceParameters = this->get_override( "OutputForceParameters" );
        func_OutputForceParameters( boost::ref(rParamsFile) );
    }

    virtual void WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        if( bp::override func_WriteDataToVisualizerSetupFile = this->get_override( "WriteDataToVisualizerSetupFile" ) )
            func_WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        else{
            this->AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        }
    }
    
    void default_WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
    }

};

void register_AbstractForce2_2_class(){

    { //::AbstractForce< 2, 2 >
        typedef bp::class_< AbstractForce_less__2_comma__2__greater__wrapper, boost::noncopyable > AbstractForce2_2_exposer_t;
        AbstractForce2_2_exposer_t AbstractForce2_2_exposer = AbstractForce2_2_exposer_t( "AbstractForce2_2", bp::init< >() );
        bp::scope AbstractForce2_2_scope( AbstractForce2_2_exposer );
        { //::AbstractForce< 2, 2 >::AddForceContribution
        
            typedef AbstractForce< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*AddForceContribution_function_type)( ::AbstractCellPopulation<2, 2> & ) ;
            
            AbstractForce2_2_exposer.def( 
                "AddForceContribution"
                , bp::pure_virtual( AddForceContribution_function_type(&::AbstractForce< 2, 2 >::AddForceContribution) )
                , ( bp::arg("rCellPopulation") ) );
        
        }
        { //::AbstractForce< 2, 2 >::OutputForceInfo
        
            typedef AbstractForce< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputForceInfo_function_type)( ::out_stream & ) ;
            
            AbstractForce2_2_exposer.def( 
                "OutputForceInfo"
                , OutputForceInfo_function_type( &::AbstractForce< 2, 2 >::OutputForceInfo )
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::AbstractForce< 2, 2 >::OutputForceParameters
        
            typedef AbstractForce< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputForceParameters_function_type)( ::out_stream & ) ;
            
            AbstractForce2_2_exposer.def( 
                "OutputForceParameters"
                , bp::pure_virtual( OutputForceParameters_function_type(&::AbstractForce< 2, 2 >::OutputForceParameters) )
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile
        
            typedef AbstractForce< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*WriteDataToVisualizerSetupFile_function_type)( ::out_stream & ) ;
            typedef void ( AbstractForce_less__2_comma__2__greater__wrapper::*default_WriteDataToVisualizerSetupFile_function_type)( ::out_stream & ) ;
            
            AbstractForce2_2_exposer.def( 
                "WriteDataToVisualizerSetupFile"
                , WriteDataToVisualizerSetupFile_function_type(&::AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile)
                , default_WriteDataToVisualizerSetupFile_function_type(&AbstractForce_less__2_comma__2__greater__wrapper::default_WriteDataToVisualizerSetupFile)
                , ( bp::arg("pVizSetupFile") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< AbstractForce<2, 2> > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractForce< 2, 2 > >, boost::shared_ptr< Identifiable > >();
        bp::implicitly_convertible< boost::shared_ptr< NagaiHondaForce< 2 > >, boost::shared_ptr< AbstractForce< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractTwoBodyInteractionForce< 2, 2 > >, boost::shared_ptr< AbstractForce< 2, 2 > > >();
        bp::implicitly_convertible< boost::shared_ptr< GeneralisedLinearSpringForce< 2, 2 > >, boost::shared_ptr< AbstractForce< 2, 2 > > >();
    }

}
