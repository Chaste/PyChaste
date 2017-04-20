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
#include "AttractingPlaneBoundaryCondition2_2.pypp.hpp"

namespace bp = boost::python;

struct AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper : AttractingPlaneBoundaryCondition< 2, 2 >, bp::wrapper< AttractingPlaneBoundaryCondition< 2, 2 > > {

    AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper(AttractingPlaneBoundaryCondition<2, 2> const & arg )
    : AttractingPlaneBoundaryCondition<2, 2>( arg )
      , bp::wrapper< AttractingPlaneBoundaryCondition< 2, 2 > >(){
        // copy constructor
        
    }

    AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper(::AbstractCellPopulation< 2, 2 > * pCellPopulation, ::boost::numeric::ublas::c_vector< double, 2 > point, ::boost::numeric::ublas::c_vector< double, 2 > normal )
    : AttractingPlaneBoundaryCondition<2, 2>( boost::python::ptr(pCellPopulation), point, normal )
      , bp::wrapper< AttractingPlaneBoundaryCondition< 2, 2 > >(){
        // constructor
    
    }

    virtual void ImposeBoundaryCondition( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > const & rOldLocations ) {
        if( bp::override func_ImposeBoundaryCondition = this->get_override( "ImposeBoundaryCondition" ) )
            func_ImposeBoundaryCondition( boost::ref(rOldLocations) );
        else{
            this->AttractingPlaneBoundaryCondition< 2, 2 >::ImposeBoundaryCondition( boost::ref(rOldLocations) );
        }
    }
    
    void default_ImposeBoundaryCondition( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > const & rOldLocations ) {
        AttractingPlaneBoundaryCondition< 2, 2 >::ImposeBoundaryCondition( boost::ref(rOldLocations) );
    }

    virtual void OutputCellPopulationBoundaryConditionParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellPopulationBoundaryConditionParameters = this->get_override( "OutputCellPopulationBoundaryConditionParameters" ) )
            func_OutputCellPopulationBoundaryConditionParameters( boost::ref(rParamsFile) );
        else{
            this->AttractingPlaneBoundaryCondition< 2, 2 >::OutputCellPopulationBoundaryConditionParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellPopulationBoundaryConditionParameters( ::out_stream & rParamsFile ) {
        AttractingPlaneBoundaryCondition< 2, 2 >::OutputCellPopulationBoundaryConditionParameters( boost::ref(rParamsFile) );
    }

    virtual bool VerifyBoundaryCondition(  ) {
        if( bp::override func_VerifyBoundaryCondition = this->get_override( "VerifyBoundaryCondition" ) )
            return func_VerifyBoundaryCondition(  );
        else{
            return this->AttractingPlaneBoundaryCondition< 2, 2 >::VerifyBoundaryCondition(  );
        }
    }
    
    bool default_VerifyBoundaryCondition(  ) {
        return AttractingPlaneBoundaryCondition< 2, 2 >::VerifyBoundaryCondition( );
    }

};

void register_AttractingPlaneBoundaryCondition2_2_class(){

    bp::class_< AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper, bp::bases< AbstractCellPopulationBoundaryCondition< 2, 2 > > >( "AttractingPlaneBoundaryCondition2_2", bp::init< AbstractCellPopulation< 2, 2 > *, boost::numeric::ublas::c_vector< double, 2 >, boost::numeric::ublas::c_vector< double, 2 > >(( bp::arg("pCellPopulation"), bp::arg("point"), bp::arg("normal") )) )    
        .def( 
            "GetUseJiggledNodesOnPlane"
            , (bool ( ::AttractingPlaneBoundaryCondition<2, 2>::* )(  ))( &::AttractingPlaneBoundaryCondition< 2, 2 >::GetUseJiggledNodesOnPlane ) )    
        .def( 
            "ImposeBoundaryCondition"
            , (void ( ::AttractingPlaneBoundaryCondition<2, 2>::* )( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > const & ))(&::AttractingPlaneBoundaryCondition< 2, 2 >::ImposeBoundaryCondition)
            , (void ( AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper::* )( ::std::map< Node<2> *, boost::numeric::ublas::c_vector<double, 2> > const & ))(&AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper::default_ImposeBoundaryCondition)
            , ( bp::arg("rOldLocations") ) )    
        .def( 
            "OutputCellPopulationBoundaryConditionParameters"
            , (void ( ::AttractingPlaneBoundaryCondition<2, 2>::* )( ::out_stream & ))(&::AttractingPlaneBoundaryCondition< 2, 2 >::OutputCellPopulationBoundaryConditionParameters)
            , (void ( AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper::* )( ::out_stream & ))(&AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper::default_OutputCellPopulationBoundaryConditionParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetAttractionThreshold"
            , (void ( ::AttractingPlaneBoundaryCondition<2, 2>::* )( double ))( &::AttractingPlaneBoundaryCondition< 2, 2 >::SetAttractionThreshold )
            , ( bp::arg("attractionThreshold") ) )    
        .def( 
            "SetPointOnPlane"
            , (void ( ::AttractingPlaneBoundaryCondition<2, 2>::* )( ::boost::numeric::ublas::c_vector< double, 2 > const & ))( &::AttractingPlaneBoundaryCondition< 2, 2 >::SetPointOnPlane )
            , ( bp::arg("rPoint") ) )    
        .def( 
            "SetUseJiggledNodesOnPlane"
            , (void ( ::AttractingPlaneBoundaryCondition<2, 2>::* )( bool ))( &::AttractingPlaneBoundaryCondition< 2, 2 >::SetUseJiggledNodesOnPlane )
            , ( bp::arg("useJiggledNodesOnPlane") ) )    
        .def( 
            "VerifyBoundaryCondition"
            , (bool ( ::AttractingPlaneBoundaryCondition<2, 2>::* )(  ))(&::AttractingPlaneBoundaryCondition< 2, 2 >::VerifyBoundaryCondition)
            , (bool ( AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper::* )(  ))(&AttractingPlaneBoundaryCondition_less__2_comma__2__greater__wrapper::default_VerifyBoundaryCondition) )    
        .def( 
            "rGetNormalToPlane"
            , (::boost::numeric::ublas::c_vector< double, 2 > const & ( ::AttractingPlaneBoundaryCondition<2, 2>::* )(  )const)( &::AttractingPlaneBoundaryCondition< 2, 2 >::rGetNormalToPlane )
            , bp::return_internal_reference< >() )    
        .def( 
            "rGetPointOnPlane"
            , (::boost::numeric::ublas::c_vector< double, 2 > const & ( ::AttractingPlaneBoundaryCondition<2, 2>::* )(  )const)( &::AttractingPlaneBoundaryCondition< 2, 2 >::rGetPointOnPlane )
            , bp::return_internal_reference< >() );

}
