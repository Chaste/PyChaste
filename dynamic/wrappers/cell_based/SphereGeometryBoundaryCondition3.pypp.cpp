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
#include "SphereGeometryBoundaryCondition3.pypp.hpp"

namespace bp = boost::python;

struct SphereGeometryBoundaryCondition_less__3__greater__wrapper : SphereGeometryBoundaryCondition< 3 >, bp::wrapper< SphereGeometryBoundaryCondition< 3 > > {

    SphereGeometryBoundaryCondition_less__3__greater__wrapper(SphereGeometryBoundaryCondition<3> const & arg )
    : SphereGeometryBoundaryCondition<3>( arg )
      , bp::wrapper< SphereGeometryBoundaryCondition< 3 > >(){
        // copy constructor
        
    }

    SphereGeometryBoundaryCondition_less__3__greater__wrapper(::AbstractCellPopulation< 3, 3 > * pCellPopulation, ::boost::numeric::ublas::c_vector< double, 3 > centre, double radius, double distance=1.0000000000000001E-5 )
    : SphereGeometryBoundaryCondition<3>( boost::python::ptr(pCellPopulation), centre, radius, distance )
      , bp::wrapper< SphereGeometryBoundaryCondition< 3 > >(){
        // constructor
    
    }

    virtual void ImposeBoundaryCondition( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > const & rOldLocations ) {
        if( bp::override func_ImposeBoundaryCondition = this->get_override( "ImposeBoundaryCondition" ) )
            func_ImposeBoundaryCondition( boost::ref(rOldLocations) );
        else{
            this->SphereGeometryBoundaryCondition< 3 >::ImposeBoundaryCondition( boost::ref(rOldLocations) );
        }
    }
    
    void default_ImposeBoundaryCondition( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > const & rOldLocations ) {
        SphereGeometryBoundaryCondition< 3 >::ImposeBoundaryCondition( boost::ref(rOldLocations) );
    }

    virtual void OutputCellPopulationBoundaryConditionParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellPopulationBoundaryConditionParameters = this->get_override( "OutputCellPopulationBoundaryConditionParameters" ) )
            func_OutputCellPopulationBoundaryConditionParameters( boost::ref(rParamsFile) );
        else{
            this->SphereGeometryBoundaryCondition< 3 >::OutputCellPopulationBoundaryConditionParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellPopulationBoundaryConditionParameters( ::out_stream & rParamsFile ) {
        SphereGeometryBoundaryCondition< 3 >::OutputCellPopulationBoundaryConditionParameters( boost::ref(rParamsFile) );
    }

    virtual bool VerifyBoundaryCondition(  ) {
        if( bp::override func_VerifyBoundaryCondition = this->get_override( "VerifyBoundaryCondition" ) )
            return func_VerifyBoundaryCondition(  );
        else{
            return this->SphereGeometryBoundaryCondition< 3 >::VerifyBoundaryCondition(  );
        }
    }
    
    bool default_VerifyBoundaryCondition(  ) {
        return SphereGeometryBoundaryCondition< 3 >::VerifyBoundaryCondition( );
    }

};

void register_SphereGeometryBoundaryCondition3_class(){

    bp::class_< SphereGeometryBoundaryCondition_less__3__greater__wrapper, bp::bases< AbstractCellPopulationBoundaryCondition< 3, 3 > > >( "SphereGeometryBoundaryCondition3", bp::init< AbstractCellPopulation< 3, 3 > *, boost::numeric::ublas::c_vector< double, 3 >, double, bp::optional< double > >(( bp::arg("pCellPopulation"), bp::arg("centre"), bp::arg("radius"), bp::arg("distance")=1.0000000000000001E-5 )) )    
        .def( 
            "GetRadiusOfSphere"
            , (double ( ::SphereGeometryBoundaryCondition<3>::* )(  )const)( &::SphereGeometryBoundaryCondition< 3 >::GetRadiusOfSphere ) )    
        .def( 
            "ImposeBoundaryCondition"
            , (void ( ::SphereGeometryBoundaryCondition<3>::* )( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > const & ))(&::SphereGeometryBoundaryCondition< 3 >::ImposeBoundaryCondition)
            , (void ( SphereGeometryBoundaryCondition_less__3__greater__wrapper::* )( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > const & ))(&SphereGeometryBoundaryCondition_less__3__greater__wrapper::default_ImposeBoundaryCondition)
            , ( bp::arg("rOldLocations") ) )    
        .def( 
            "OutputCellPopulationBoundaryConditionParameters"
            , (void ( ::SphereGeometryBoundaryCondition<3>::* )( ::out_stream & ))(&::SphereGeometryBoundaryCondition< 3 >::OutputCellPopulationBoundaryConditionParameters)
            , (void ( SphereGeometryBoundaryCondition_less__3__greater__wrapper::* )( ::out_stream & ))(&SphereGeometryBoundaryCondition_less__3__greater__wrapper::default_OutputCellPopulationBoundaryConditionParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "VerifyBoundaryCondition"
            , (bool ( ::SphereGeometryBoundaryCondition<3>::* )(  ))(&::SphereGeometryBoundaryCondition< 3 >::VerifyBoundaryCondition)
            , (bool ( SphereGeometryBoundaryCondition_less__3__greater__wrapper::* )(  ))(&SphereGeometryBoundaryCondition_less__3__greater__wrapper::default_VerifyBoundaryCondition) )    
        .def( 
            "rGetCentreOfSphere"
            , (::boost::numeric::ublas::c_vector< double, 3 > const & ( ::SphereGeometryBoundaryCondition<3>::* )(  )const)( &::SphereGeometryBoundaryCondition< 3 >::rGetCentreOfSphere )
            , bp::return_value_policy< bp::copy_const_reference >() );

}
