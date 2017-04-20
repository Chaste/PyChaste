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
#include "AbstractVertexBasedDivisionRule3.pypp.hpp"

namespace bp = boost::python;

struct AbstractVertexBasedDivisionRule_less__3__greater__wrapper : AbstractVertexBasedDivisionRule< 3 >, bp::wrapper< AbstractVertexBasedDivisionRule< 3 > > {

    AbstractVertexBasedDivisionRule_less__3__greater__wrapper( )
    : AbstractVertexBasedDivisionRule<3>( )
      , bp::wrapper< AbstractVertexBasedDivisionRule< 3 > >(){
        // null constructor
    
    }

    virtual ::boost::numeric::ublas::c_vector< double, 3 > CalculateCellDivisionVector( ::CellPtr pParentCell, ::VertexBasedCellPopulation< 3 > & rCellPopulation ){
        bp::override func_CalculateCellDivisionVector = this->get_override( "CalculateCellDivisionVector" );
        return func_CalculateCellDivisionVector( pParentCell, boost::ref(rCellPopulation) );
    }

    virtual void OutputCellVertexBasedDivisionRuleParameters( ::out_stream & rParamsFile ){
        if( bp::override func_OutputCellVertexBasedDivisionRuleParameters = this->get_override( "OutputCellVertexBasedDivisionRuleParameters" ) )
            func_OutputCellVertexBasedDivisionRuleParameters( boost::ref(rParamsFile) );
        else{
            this->AbstractVertexBasedDivisionRule< 3 >::OutputCellVertexBasedDivisionRuleParameters( boost::ref(rParamsFile) );
        }
    }
    
    virtual void default_OutputCellVertexBasedDivisionRuleParameters( ::out_stream & rParamsFile ){
        AbstractVertexBasedDivisionRule< 3 >::OutputCellVertexBasedDivisionRuleParameters( boost::ref(rParamsFile) );
    }

};

void register_AbstractVertexBasedDivisionRule3_class(){

    { //::AbstractVertexBasedDivisionRule< 3 >
        typedef bp::class_< AbstractVertexBasedDivisionRule_less__3__greater__wrapper, boost::noncopyable > AbstractVertexBasedDivisionRule3_exposer_t;
        AbstractVertexBasedDivisionRule3_exposer_t AbstractVertexBasedDivisionRule3_exposer = AbstractVertexBasedDivisionRule3_exposer_t( "AbstractVertexBasedDivisionRule3", bp::init< >() );
        bp::scope AbstractVertexBasedDivisionRule3_scope( AbstractVertexBasedDivisionRule3_exposer );
        { //::AbstractVertexBasedDivisionRule< 3 >::CalculateCellDivisionVector
        
            typedef AbstractVertexBasedDivisionRule< 3 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector<double, 3> ( exported_class_t::*CalculateCellDivisionVector_function_type)( ::CellPtr,::VertexBasedCellPopulation<3> & ) ;
            
            AbstractVertexBasedDivisionRule3_exposer.def( 
                "CalculateCellDivisionVector"
                , bp::pure_virtual( CalculateCellDivisionVector_function_type(&::AbstractVertexBasedDivisionRule< 3 >::CalculateCellDivisionVector) )
                , ( bp::arg("pParentCell"), bp::arg("rCellPopulation") ) );
        
        }
        { //::AbstractVertexBasedDivisionRule< 3 >::OutputCellVertexBasedDivisionRuleInfo
        
            typedef AbstractVertexBasedDivisionRule< 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputCellVertexBasedDivisionRuleInfo_function_type)( ::out_stream & ) ;
            
            AbstractVertexBasedDivisionRule3_exposer.def( 
                "OutputCellVertexBasedDivisionRuleInfo"
                , OutputCellVertexBasedDivisionRuleInfo_function_type( &::AbstractVertexBasedDivisionRule< 3 >::OutputCellVertexBasedDivisionRuleInfo )
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::AbstractVertexBasedDivisionRule< 3 >::OutputCellVertexBasedDivisionRuleParameters
        
            typedef AbstractVertexBasedDivisionRule< 3 > exported_class_t;
            typedef void ( AbstractVertexBasedDivisionRule_less__3__greater__wrapper::*OutputCellVertexBasedDivisionRuleParameters_function_type)( ::out_stream & ) ;
            
            AbstractVertexBasedDivisionRule3_exposer.def( 
                "OutputCellVertexBasedDivisionRuleParameters"
                , OutputCellVertexBasedDivisionRuleParameters_function_type( &AbstractVertexBasedDivisionRule_less__3__greater__wrapper::default_OutputCellVertexBasedDivisionRuleParameters )
                , ( bp::arg("rParamsFile") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< AbstractVertexBasedDivisionRule<3> > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractVertexBasedDivisionRule< 3 > >, boost::shared_ptr< Identifiable > >();
    }

}
