// This file has been generated by Py++.


/*

Copyright (c) 2005-2016, University of Oxford.
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
#include "VtkSceneModifier3.pypp.hpp"

namespace bp = boost::python;

struct VtkSceneModifier_less__3__greater__wrapper : VtkSceneModifier< 3 >, bp::wrapper< VtkSceneModifier< 3 > > {

    VtkSceneModifier_less__3__greater__wrapper(VtkSceneModifier<3> const & arg )
    : VtkSceneModifier<3>( arg )
      , bp::wrapper< VtkSceneModifier< 3 > >(){
        // copy constructor
        
    }

    VtkSceneModifier_less__3__greater__wrapper( )
    : VtkSceneModifier<3>( )
      , bp::wrapper< VtkSceneModifier< 3 > >(){
        // null constructor
    
    }

    virtual void OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationModifierParameters = this->get_override( "OutputSimulationModifierParameters" ) )
            func_OutputSimulationModifierParameters( boost::ref(rParamsFile) );
        else{
            this->VtkSceneModifier< 3 >::OutputSimulationModifierParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        VtkSceneModifier< 3 >::OutputSimulationModifierParameters( boost::ref(rParamsFile) );
    }

    virtual void SetupSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation, ::std::string outputDirectory ) {
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        else{
            this->VtkSceneModifier< 3 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        }
    }
    
    void default_SetupSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation, ::std::string outputDirectory ) {
        VtkSceneModifier< 3 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
    }

    virtual void UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfTimeStep = this->get_override( "UpdateAtEndOfTimeStep" ) )
            func_UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
        else{
            this->VtkSceneModifier< 3 >::UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        VtkSceneModifier< 3 >::UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfOutputTimeStep = this->get_override( "UpdateAtEndOfOutputTimeStep" ) )
            func_UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        else{
            this->AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfSolve = this->get_override( "UpdateAtEndOfSolve" ) )
            func_UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        else{
            this->AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
    }

};

void register_VtkSceneModifier3_class(){

    bp::class_< VtkSceneModifier_less__3__greater__wrapper, bp::bases< AbstractCellBasedSimulationModifier< 3, 3 > > >( "VtkSceneModifier3", bp::init< >() )    
        .def( 
            "OutputSimulationModifierParameters"
            , (void ( ::VtkSceneModifier<3>::* )( ::out_stream & ))(&::VtkSceneModifier< 3 >::OutputSimulationModifierParameters)
            , (void ( VtkSceneModifier_less__3__greater__wrapper::* )( ::out_stream & ))(&VtkSceneModifier_less__3__greater__wrapper::default_OutputSimulationModifierParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetVtkScene"
            , (void ( ::VtkSceneModifier<3>::* )( ::boost::shared_ptr< VtkScene< 3 > > ))( &::VtkSceneModifier< 3 >::SetVtkScene )
            , ( bp::arg("pScene") ) )    
        .def( 
            "SetupSolve"
            , (void ( ::VtkSceneModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > &,::std::string ))(&::VtkSceneModifier< 3 >::SetupSolve)
            , (void ( VtkSceneModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > &,::std::string ))(&VtkSceneModifier_less__3__greater__wrapper::default_SetupSolve)
            , ( bp::arg("rCellPopulation"), bp::arg("outputDirectory") ) )    
        .def( 
            "UpdateAtEndOfTimeStep"
            , (void ( ::VtkSceneModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::VtkSceneModifier< 3 >::UpdateAtEndOfTimeStep)
            , (void ( VtkSceneModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&VtkSceneModifier_less__3__greater__wrapper::default_UpdateAtEndOfTimeStep)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateCellData"
            , (void ( ::VtkSceneModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))( &::VtkSceneModifier< 3 >::UpdateCellData )
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateAtEndOfOutputTimeStep"
            , (void ( ::AbstractCellBasedSimulationModifier<3, 3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfOutputTimeStep)
            , (void ( VtkSceneModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&VtkSceneModifier_less__3__greater__wrapper::default_UpdateAtEndOfOutputTimeStep)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateAtEndOfSolve"
            , (void ( ::AbstractCellBasedSimulationModifier<3, 3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfSolve)
            , (void ( VtkSceneModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&VtkSceneModifier_less__3__greater__wrapper::default_UpdateAtEndOfSolve)
            , ( bp::arg("rCellPopulation") ) );

}