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
#include "PlaneBasedCellKiller3.pypp.hpp"

namespace bp = boost::python;

struct PlaneBasedCellKiller_less__3__greater__wrapper : PlaneBasedCellKiller< 3 >, bp::wrapper< PlaneBasedCellKiller< 3 > > {

    PlaneBasedCellKiller_less__3__greater__wrapper(PlaneBasedCellKiller<3> const & arg )
    : PlaneBasedCellKiller<3>( arg )
      , bp::wrapper< PlaneBasedCellKiller< 3 > >(){
        // copy constructor
        
    }

    PlaneBasedCellKiller_less__3__greater__wrapper(::AbstractCellPopulation< 3, 3 > * pCellPopulation, ::boost::numeric::ublas::c_vector< double, 3 > point, ::boost::numeric::ublas::c_vector< double, 3 > normal )
    : PlaneBasedCellKiller<3>( boost::python::ptr(pCellPopulation), point, normal )
      , bp::wrapper< PlaneBasedCellKiller< 3 > >(){
        // constructor
    
    }

    virtual void CheckAndLabelCellsForApoptosisOrDeath(  ) {
        if( bp::override func_CheckAndLabelCellsForApoptosisOrDeath = this->get_override( "CheckAndLabelCellsForApoptosisOrDeath" ) )
            func_CheckAndLabelCellsForApoptosisOrDeath(  );
        else{
            this->PlaneBasedCellKiller< 3 >::CheckAndLabelCellsForApoptosisOrDeath(  );
        }
    }
    
    void default_CheckAndLabelCellsForApoptosisOrDeath(  ) {
        PlaneBasedCellKiller< 3 >::CheckAndLabelCellsForApoptosisOrDeath( );
    }

    virtual void OutputCellKillerParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellKillerParameters = this->get_override( "OutputCellKillerParameters" ) )
            func_OutputCellKillerParameters( boost::ref(rParamsFile) );
        else{
            this->PlaneBasedCellKiller< 3 >::OutputCellKillerParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellKillerParameters( ::out_stream & rParamsFile ) {
        PlaneBasedCellKiller< 3 >::OutputCellKillerParameters( boost::ref(rParamsFile) );
    }

};

void register_PlaneBasedCellKiller3_class(){

    bp::class_< PlaneBasedCellKiller_less__3__greater__wrapper, bp::bases< AbstractCellKiller< 3 > > >( "PlaneBasedCellKiller3", bp::init< AbstractCellPopulation< 3, 3 > *, boost::numeric::ublas::c_vector< double, 3 >, boost::numeric::ublas::c_vector< double, 3 > >(( bp::arg("pCellPopulation"), bp::arg("point"), bp::arg("normal") )) )    
        .def( 
            "CheckAndLabelCellsForApoptosisOrDeath"
            , (void ( ::PlaneBasedCellKiller<3>::* )(  ))(&::PlaneBasedCellKiller< 3 >::CheckAndLabelCellsForApoptosisOrDeath)
            , (void ( PlaneBasedCellKiller_less__3__greater__wrapper::* )(  ))(&PlaneBasedCellKiller_less__3__greater__wrapper::default_CheckAndLabelCellsForApoptosisOrDeath) )    
        .def( 
            "OutputCellKillerParameters"
            , (void ( ::PlaneBasedCellKiller<3>::* )( ::out_stream & ))(&::PlaneBasedCellKiller< 3 >::OutputCellKillerParameters)
            , (void ( PlaneBasedCellKiller_less__3__greater__wrapper::* )( ::out_stream & ))(&PlaneBasedCellKiller_less__3__greater__wrapper::default_OutputCellKillerParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "rGetNormalToPlane"
            , (::boost::numeric::ublas::c_vector< double, 3 > const & ( ::PlaneBasedCellKiller<3>::* )(  )const)( &::PlaneBasedCellKiller< 3 >::rGetNormalToPlane )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "rGetPointOnPlane"
            , (::boost::numeric::ublas::c_vector< double, 3 > const & ( ::PlaneBasedCellKiller<3>::* )(  )const)( &::PlaneBasedCellKiller< 3 >::rGetPointOnPlane )
            , bp::return_value_policy< bp::copy_const_reference >() );

}
