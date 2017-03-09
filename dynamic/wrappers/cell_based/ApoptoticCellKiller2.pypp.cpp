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
#include "ApoptoticCellKiller2.pypp.hpp"

namespace bp = boost::python;

struct ApoptoticCellKiller_less__2__greater__wrapper : ApoptoticCellKiller< 2 >, bp::wrapper< ApoptoticCellKiller< 2 > > {

    ApoptoticCellKiller_less__2__greater__wrapper(ApoptoticCellKiller<2> const & arg )
    : ApoptoticCellKiller<2>( arg )
      , bp::wrapper< ApoptoticCellKiller< 2 > >(){
        // copy constructor
        
    }

    ApoptoticCellKiller_less__2__greater__wrapper(::AbstractCellPopulation< 2, 2 > * pCellPopulation )
    : ApoptoticCellKiller<2>( boost::python::ptr(pCellPopulation) )
      , bp::wrapper< ApoptoticCellKiller< 2 > >(){
        // constructor
    
    }

    virtual void CheckAndLabelCellsForApoptosisOrDeath(  ) {
        if( bp::override func_CheckAndLabelCellsForApoptosisOrDeath = this->get_override( "CheckAndLabelCellsForApoptosisOrDeath" ) )
            func_CheckAndLabelCellsForApoptosisOrDeath(  );
        else{
            this->ApoptoticCellKiller< 2 >::CheckAndLabelCellsForApoptosisOrDeath(  );
        }
    }
    
    void default_CheckAndLabelCellsForApoptosisOrDeath(  ) {
        ApoptoticCellKiller< 2 >::CheckAndLabelCellsForApoptosisOrDeath( );
    }

    virtual void OutputCellKillerParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellKillerParameters = this->get_override( "OutputCellKillerParameters" ) )
            func_OutputCellKillerParameters( boost::ref(rParamsFile) );
        else{
            this->ApoptoticCellKiller< 2 >::OutputCellKillerParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellKillerParameters( ::out_stream & rParamsFile ) {
        ApoptoticCellKiller< 2 >::OutputCellKillerParameters( boost::ref(rParamsFile) );
    }

};

void register_ApoptoticCellKiller2_class(){

    { //::ApoptoticCellKiller< 2 >
        typedef bp::class_< ApoptoticCellKiller_less__2__greater__wrapper, bp::bases< AbstractCellKiller< 2 > > > ApoptoticCellKiller2_exposer_t;
        ApoptoticCellKiller2_exposer_t ApoptoticCellKiller2_exposer = ApoptoticCellKiller2_exposer_t( "ApoptoticCellKiller2", bp::init< AbstractCellPopulation< 2, 2 > * >(( bp::arg("pCellPopulation") )) );
        bp::scope ApoptoticCellKiller2_scope( ApoptoticCellKiller2_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 2, 2 > *, ApoptoticCellKiller< 2 > >();
        { //::ApoptoticCellKiller< 2 >::CheckAndLabelCellsForApoptosisOrDeath
        
            typedef ApoptoticCellKiller< 2 > exported_class_t;
            typedef void ( exported_class_t::*CheckAndLabelCellsForApoptosisOrDeath_function_type)(  ) ;
            typedef void ( ApoptoticCellKiller_less__2__greater__wrapper::*default_CheckAndLabelCellsForApoptosisOrDeath_function_type)(  ) ;
            
            ApoptoticCellKiller2_exposer.def( 
                "CheckAndLabelCellsForApoptosisOrDeath"
                , CheckAndLabelCellsForApoptosisOrDeath_function_type(&::ApoptoticCellKiller< 2 >::CheckAndLabelCellsForApoptosisOrDeath)
                , default_CheckAndLabelCellsForApoptosisOrDeath_function_type(&ApoptoticCellKiller_less__2__greater__wrapper::default_CheckAndLabelCellsForApoptosisOrDeath) );
        
        }
        { //::ApoptoticCellKiller< 2 >::CheckAndLabelSingleCellForApoptosis
        
            typedef ApoptoticCellKiller< 2 > exported_class_t;
            typedef void ( exported_class_t::*CheckAndLabelSingleCellForApoptosis_function_type)( ::CellPtr ) ;
            
            ApoptoticCellKiller2_exposer.def( 
                "CheckAndLabelSingleCellForApoptosis"
                , CheckAndLabelSingleCellForApoptosis_function_type( &::ApoptoticCellKiller< 2 >::CheckAndLabelSingleCellForApoptosis )
                , ( bp::arg("pCell") ) );
        
        }
        { //::ApoptoticCellKiller< 2 >::OutputCellKillerParameters
        
            typedef ApoptoticCellKiller< 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputCellKillerParameters_function_type)( ::out_stream & ) ;
            typedef void ( ApoptoticCellKiller_less__2__greater__wrapper::*default_OutputCellKillerParameters_function_type)( ::out_stream & ) ;
            
            ApoptoticCellKiller2_exposer.def( 
                "OutputCellKillerParameters"
                , OutputCellKillerParameters_function_type(&::ApoptoticCellKiller< 2 >::OutputCellKillerParameters)
                , default_OutputCellKillerParameters_function_type(&ApoptoticCellKiller_less__2__greater__wrapper::default_OutputCellKillerParameters)
                , ( bp::arg("rParamsFile") ) );
        
        }
    }

}
