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
#include "AbstractPottsUpdateRule2.pypp.hpp"

namespace bp = boost::python;

struct AbstractPottsUpdateRule_less__2__greater__wrapper : AbstractPottsUpdateRule< 2 >, bp::wrapper< AbstractPottsUpdateRule< 2 > > {

    AbstractPottsUpdateRule_less__2__greater__wrapper( )
    : AbstractPottsUpdateRule<2>( )
      , bp::wrapper< AbstractPottsUpdateRule< 2 > >(){
        // null constructor
    
    }

    virtual double EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 2 > & rCellPopulation ){
        bp::override func_EvaluateHamiltonianContribution = this->get_override( "EvaluateHamiltonianContribution" );
        return func_EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
    }

    virtual void OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputUpdateRuleParameters = this->get_override( "OutputUpdateRuleParameters" ) )
            func_OutputUpdateRuleParameters( boost::ref(rParamsFile) );
        else{
            this->AbstractPottsUpdateRule< 2 >::OutputUpdateRuleParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        AbstractPottsUpdateRule< 2 >::OutputUpdateRuleParameters( boost::ref(rParamsFile) );
    }

};

void register_AbstractPottsUpdateRule2_class(){

    bp::class_< AbstractPottsUpdateRule_less__2__greater__wrapper, bp::bases< AbstractUpdateRule< 2 > >, boost::noncopyable >( "AbstractPottsUpdateRule2", bp::init< >() )    
        .def( 
            "EvaluateHamiltonianContribution"
            , bp::pure_virtual( (double ( ::AbstractPottsUpdateRule<2>::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 2 > & ))(&::AbstractPottsUpdateRule< 2 >::EvaluateHamiltonianContribution) )
            , ( bp::arg("currentNodeIndex"), bp::arg("targetNodeIndex"), bp::arg("rCellPopulation") ) )    
        .def( 
            "OutputUpdateRuleParameters"
            , (void ( ::AbstractPottsUpdateRule<2>::* )( ::out_stream & ))(&::AbstractPottsUpdateRule< 2 >::OutputUpdateRuleParameters)
            , (void ( AbstractPottsUpdateRule_less__2__greater__wrapper::* )( ::out_stream & ))(&AbstractPottsUpdateRule_less__2__greater__wrapper::default_OutputUpdateRuleParameters)
            , ( bp::arg("rParamsFile") ) );

}
