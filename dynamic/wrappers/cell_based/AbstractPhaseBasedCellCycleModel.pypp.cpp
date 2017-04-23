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
#include "wrapper_header_collection.hpp"
#include "AbstractPhaseBasedCellCycleModel.pypp.hpp"

namespace bp = boost::python;

struct AbstractPhaseBasedCellCycleModel_wrapper : AbstractPhaseBasedCellCycleModel, bp::wrapper< AbstractPhaseBasedCellCycleModel > {

    AbstractPhaseBasedCellCycleModel_wrapper(::AbstractPhaseBasedCellCycleModel const & rModel )
    : AbstractPhaseBasedCellCycleModel( boost::ref(rModel) )
      , bp::wrapper< AbstractPhaseBasedCellCycleModel >(){
        // copy constructor
    
    }

    AbstractPhaseBasedCellCycleModel_wrapper( )
    : AbstractPhaseBasedCellCycleModel( )
      , bp::wrapper< AbstractPhaseBasedCellCycleModel >(){
        // null constructor
    
    }

    virtual double GetAverageStemCellCycleTime(  ) {
        if( bp::override func_GetAverageStemCellCycleTime = this->get_override( "GetAverageStemCellCycleTime" ) )
            return func_GetAverageStemCellCycleTime(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetAverageStemCellCycleTime(  );
        }
    }
    
    double default_GetAverageStemCellCycleTime(  ) {
        return AbstractPhaseBasedCellCycleModel::GetAverageStemCellCycleTime( );
    }

    virtual double GetAverageTransitCellCycleTime(  ) {
        if( bp::override func_GetAverageTransitCellCycleTime = this->get_override( "GetAverageTransitCellCycleTime" ) )
            return func_GetAverageTransitCellCycleTime(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetAverageTransitCellCycleTime(  );
        }
    }
    
    double default_GetAverageTransitCellCycleTime(  ) {
        return AbstractPhaseBasedCellCycleModel::GetAverageTransitCellCycleTime( );
    }

    virtual double GetG1Duration(  ) const  {
        if( bp::override func_GetG1Duration = this->get_override( "GetG1Duration" ) )
            return func_GetG1Duration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetG1Duration(  );
        }
    }
    
    double default_GetG1Duration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetG1Duration( );
    }

    virtual double GetG2Duration(  ) const  {
        if( bp::override func_GetG2Duration = this->get_override( "GetG2Duration" ) )
            return func_GetG2Duration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetG2Duration(  );
        }
    }
    
    double default_GetG2Duration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetG2Duration( );
    }

    virtual double GetMDuration(  ) const  {
        if( bp::override func_GetMDuration = this->get_override( "GetMDuration" ) )
            return func_GetMDuration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetMDuration(  );
        }
    }
    
    double default_GetMDuration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetMDuration( );
    }

    virtual double GetSDuration(  ) const  {
        if( bp::override func_GetSDuration = this->get_override( "GetSDuration" ) )
            return func_GetSDuration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetSDuration(  );
        }
    }
    
    double default_GetSDuration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetSDuration( );
    }

    virtual void OutputCellCycleModelParameters( ::out_stream & rParamsFile ){
        bp::override func_OutputCellCycleModelParameters = this->get_override( "OutputCellCycleModelParameters" );
        func_OutputCellCycleModelParameters( boost::ref(rParamsFile) );
    }

    virtual bool ReadyToDivide(  ) {
        if( bp::override func_ReadyToDivide = this->get_override( "ReadyToDivide" ) )
            return func_ReadyToDivide(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::ReadyToDivide(  );
        }
    }
    
    bool default_ReadyToDivide(  ) {
        return AbstractPhaseBasedCellCycleModel::ReadyToDivide( );
    }

    virtual void ResetForDivision(  ) {
        if( bp::override func_ResetForDivision = this->get_override( "ResetForDivision" ) )
            func_ResetForDivision(  );
        else{
            this->AbstractPhaseBasedCellCycleModel::ResetForDivision(  );
        }
    }
    
    void default_ResetForDivision(  ) {
        AbstractPhaseBasedCellCycleModel::ResetForDivision( );
    }

    virtual void SetStemCellG1Duration( double stemCellG1Duration ) {
        if( bp::override func_SetStemCellG1Duration = this->get_override( "SetStemCellG1Duration" ) )
            func_SetStemCellG1Duration( stemCellG1Duration );
        else{
            this->AbstractPhaseBasedCellCycleModel::SetStemCellG1Duration( stemCellG1Duration );
        }
    }
    
    void default_SetStemCellG1Duration( double stemCellG1Duration ) {
        AbstractPhaseBasedCellCycleModel::SetStemCellG1Duration( stemCellG1Duration );
    }

    virtual void SetTransitCellG1Duration( double transitCellG1Duration ) {
        if( bp::override func_SetTransitCellG1Duration = this->get_override( "SetTransitCellG1Duration" ) )
            func_SetTransitCellG1Duration( transitCellG1Duration );
        else{
            this->AbstractPhaseBasedCellCycleModel::SetTransitCellG1Duration( transitCellG1Duration );
        }
    }
    
    void default_SetTransitCellG1Duration( double transitCellG1Duration ) {
        AbstractPhaseBasedCellCycleModel::SetTransitCellG1Duration( transitCellG1Duration );
    }

    virtual void UpdateCellCyclePhase(  ){
        bp::override func_UpdateCellCyclePhase = this->get_override( "UpdateCellCyclePhase" );
        func_UpdateCellCyclePhase(  );
    }

    virtual bool CanCellTerminallyDifferentiate(  ) {
        if( bp::override func_CanCellTerminallyDifferentiate = this->get_override( "CanCellTerminallyDifferentiate" ) )
            return func_CanCellTerminallyDifferentiate(  );
        else{
            return this->AbstractCellCycleModel::CanCellTerminallyDifferentiate(  );
        }
    }
    
    bool default_CanCellTerminallyDifferentiate(  ) {
        return AbstractCellCycleModel::CanCellTerminallyDifferentiate( );
    }

    virtual ::AbstractCellCycleModel * CreateCellCycleModel(  ){
        bp::override func_CreateCellCycleModel = this->get_override( "CreateCellCycleModel" );
        return func_CreateCellCycleModel(  );
    }

    virtual void Initialise(  ) {
        if( bp::override func_Initialise = this->get_override( "Initialise" ) )
            func_Initialise(  );
        else{
            this->AbstractCellCycleModel::Initialise(  );
        }
    }
    
    void default_Initialise(  ) {
        AbstractCellCycleModel::Initialise( );
    }

    virtual void InitialiseDaughterCell(  ) {
        if( bp::override func_InitialiseDaughterCell = this->get_override( "InitialiseDaughterCell" ) )
            func_InitialiseDaughterCell(  );
        else{
            this->AbstractCellCycleModel::InitialiseDaughterCell(  );
        }
    }
    
    void default_InitialiseDaughterCell(  ) {
        AbstractCellCycleModel::InitialiseDaughterCell( );
    }

    virtual void SetBirthTime( double birthTime ) {
        if( bp::override func_SetBirthTime = this->get_override( "SetBirthTime" ) )
            func_SetBirthTime( birthTime );
        else{
            this->AbstractCellCycleModel::SetBirthTime( birthTime );
        }
    }
    
    void default_SetBirthTime( double birthTime ) {
        AbstractCellCycleModel::SetBirthTime( birthTime );
    }

};

void register_AbstractPhaseBasedCellCycleModel_class(){

    bp::class_< AbstractPhaseBasedCellCycleModel_wrapper, bp::bases< AbstractCellCycleModel >, boost::noncopyable >( "AbstractPhaseBasedCellCycleModel", bp::init< AbstractPhaseBasedCellCycleModel const & >(( bp::arg("rModel") )) )    
        .def( bp::init< >() )    
        .def( 
            "GetAverageStemCellCycleTime"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::GetAverageStemCellCycleTime)
            , (double ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_GetAverageStemCellCycleTime) )    
        .def( 
            "GetAverageTransitCellCycleTime"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::GetAverageTransitCellCycleTime)
            , (double ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_GetAverageTransitCellCycleTime) )    
        .def( 
            "GetCurrentCellCyclePhase"
            , (::CellCyclePhase ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)( &::AbstractPhaseBasedCellCycleModel::GetCurrentCellCyclePhase ) )    
        .def( 
            "GetG1Duration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetG1Duration)
            , (double ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractPhaseBasedCellCycleModel_wrapper::default_GetG1Duration) )    
        .def( 
            "GetG2Duration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetG2Duration)
            , (double ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractPhaseBasedCellCycleModel_wrapper::default_GetG2Duration) )    
        .def( 
            "GetMDuration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetMDuration)
            , (double ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractPhaseBasedCellCycleModel_wrapper::default_GetMDuration) )    
        .def( 
            "GetMinimumGapDuration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)( &::AbstractPhaseBasedCellCycleModel::GetMinimumGapDuration ) )    
        .def( 
            "GetSDuration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetSDuration)
            , (double ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractPhaseBasedCellCycleModel_wrapper::default_GetSDuration) )    
        .def( 
            "GetSG2MDuration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)( &::AbstractPhaseBasedCellCycleModel::GetSG2MDuration ) )    
        .def( 
            "GetStemCellG1Duration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)( &::AbstractPhaseBasedCellCycleModel::GetStemCellG1Duration ) )    
        .def( 
            "GetTransitCellG1Duration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)( &::AbstractPhaseBasedCellCycleModel::GetTransitCellG1Duration ) )    
        .def( 
            "OutputCellCycleModelParameters"
            , bp::pure_virtual( (void ( ::AbstractPhaseBasedCellCycleModel::* )( ::out_stream & ))(&::AbstractPhaseBasedCellCycleModel::OutputCellCycleModelParameters) )
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "ReadyToDivide"
            , (bool ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::ReadyToDivide)
            , (bool ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_ReadyToDivide) )    
        .def( 
            "ResetForDivision"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::ResetForDivision)
            , (void ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_ResetForDivision) )    
        .def( 
            "SetG2Duration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))( &::AbstractPhaseBasedCellCycleModel::SetG2Duration )
            , ( bp::arg("g2Duration") ) )    
        .def( 
            "SetMDuration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))( &::AbstractPhaseBasedCellCycleModel::SetMDuration )
            , ( bp::arg("mDuration") ) )    
        .def( 
            "SetMinimumGapDuration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))( &::AbstractPhaseBasedCellCycleModel::SetMinimumGapDuration )
            , ( bp::arg("minimumGapDuration") ) )    
        .def( 
            "SetSDuration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))( &::AbstractPhaseBasedCellCycleModel::SetSDuration )
            , ( bp::arg("sDuration") ) )    
        .def( 
            "SetStemCellG1Duration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))(&::AbstractPhaseBasedCellCycleModel::SetStemCellG1Duration)
            , (void ( AbstractPhaseBasedCellCycleModel_wrapper::* )( double ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_SetStemCellG1Duration)
            , ( bp::arg("stemCellG1Duration") ) )    
        .def( 
            "SetTransitCellG1Duration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))(&::AbstractPhaseBasedCellCycleModel::SetTransitCellG1Duration)
            , (void ( AbstractPhaseBasedCellCycleModel_wrapper::* )( double ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_SetTransitCellG1Duration)
            , ( bp::arg("transitCellG1Duration") ) )    
        .def( 
            "UpdateCellCyclePhase"
            , bp::pure_virtual( (void ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::UpdateCellCyclePhase) ) )    
        .def( 
            "CanCellTerminallyDifferentiate"
            , (bool ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::CanCellTerminallyDifferentiate)
            , (bool ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_CanCellTerminallyDifferentiate) )    
        .def( 
            "CreateCellCycleModel"
            , bp::pure_virtual( (::AbstractCellCycleModel * ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::CreateCellCycleModel) )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "Initialise"
            , (void ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::Initialise)
            , (void ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_Initialise) )    
        .def( 
            "InitialiseDaughterCell"
            , (void ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::InitialiseDaughterCell)
            , (void ( AbstractPhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_InitialiseDaughterCell) )    
        .def( 
            "SetBirthTime"
            , (void ( ::AbstractCellCycleModel::* )( double ))(&::AbstractCellCycleModel::SetBirthTime)
            , (void ( AbstractPhaseBasedCellCycleModel_wrapper::* )( double ))(&AbstractPhaseBasedCellCycleModel_wrapper::default_SetBirthTime)
            , ( bp::arg("birthTime") ) );

}