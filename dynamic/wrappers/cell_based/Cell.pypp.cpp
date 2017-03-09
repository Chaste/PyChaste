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
#include "Cell.pypp.hpp"

namespace bp = boost::python;

void register_Cell_class(){

    { //::Cell
        typedef bp::class_< Cell, boost::shared_ptr< Cell >, boost::noncopyable > Cell_exposer_t;
        Cell_exposer_t Cell_exposer = Cell_exposer_t( "Cell", bp::init< boost::shared_ptr< AbstractCellProperty >, AbstractCellCycleModel *, bp::optional< AbstractSrnModel *, bool, CellPropertyCollection > >(( bp::arg("pMutationState"), bp::arg("pCellCycleModel"), bp::arg("pSrnModel")=__null, bp::arg("archiving")=(bool)(false), bp::arg("cellPropertyCollection")=::CellPropertyCollection( ) )) );
        bp::scope Cell_scope( Cell_exposer );
        { //::Cell::AddCellProperty
        
            typedef void ( ::Cell::*AddCellProperty_function_type)( ::boost::shared_ptr< AbstractCellProperty > const & ) ;
            
            Cell_exposer.def( 
                "AddCellProperty"
                , AddCellProperty_function_type( &::Cell::AddCellProperty )
                , ( bp::arg("rProperty") ) );
        
        }
        { //::Cell::Divide
        
            typedef ::CellPtr ( ::Cell::*Divide_function_type)(  ) ;
            
            Cell_exposer.def( 
                "Divide"
                , Divide_function_type( &::Cell::Divide ) );
        
        }
        { //::Cell::GetAge
        
            typedef double ( ::Cell::*GetAge_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetAge"
                , GetAge_function_type( &::Cell::GetAge ) );
        
        }
        { //::Cell::GetAncestor
        
            typedef unsigned int ( ::Cell::*GetAncestor_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetAncestor"
                , GetAncestor_function_type( &::Cell::GetAncestor ) );
        
        }
        { //::Cell::GetApoptosisTime
        
            typedef double ( ::Cell::*GetApoptosisTime_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetApoptosisTime"
                , GetApoptosisTime_function_type( &::Cell::GetApoptosisTime ) );
        
        }
        { //::Cell::GetBirthTime
        
            typedef double ( ::Cell::*GetBirthTime_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetBirthTime"
                , GetBirthTime_function_type( &::Cell::GetBirthTime ) );
        
        }
        { //::Cell::GetCellCycleModel
        
            typedef ::AbstractCellCycleModel * ( ::Cell::*GetCellCycleModel_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetCellCycleModel"
                , GetCellCycleModel_function_type( &::Cell::GetCellCycleModel )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::Cell::GetCellData
        
            typedef ::boost::shared_ptr< CellData > ( ::Cell::*GetCellData_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetCellData"
                , GetCellData_function_type( &::Cell::GetCellData ) );
        
        }
        { //::Cell::GetCellId
        
            typedef unsigned int ( ::Cell::*GetCellId_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetCellId"
                , GetCellId_function_type( &::Cell::GetCellId ) );
        
        }
        { //::Cell::GetCellProliferativeType
        
            typedef ::boost::shared_ptr< AbstractCellProliferativeType > ( ::Cell::*GetCellProliferativeType_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetCellProliferativeType"
                , GetCellProliferativeType_function_type( &::Cell::GetCellProliferativeType ) );
        
        }
        { //::Cell::GetCellVecData
        
            typedef ::boost::shared_ptr< CellVecData > ( ::Cell::*GetCellVecData_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetCellVecData"
                , GetCellVecData_function_type( &::Cell::GetCellVecData ) );
        
        }
        { //::Cell::GetMutationState
        
            typedef ::boost::shared_ptr< AbstractCellMutationState > ( ::Cell::*GetMutationState_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetMutationState"
                , GetMutationState_function_type( &::Cell::GetMutationState ) );
        
        }
        { //::Cell::GetStartOfApoptosisTime
        
            typedef double ( ::Cell::*GetStartOfApoptosisTime_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetStartOfApoptosisTime"
                , GetStartOfApoptosisTime_function_type( &::Cell::GetStartOfApoptosisTime ) );
        
        }
        { //::Cell::GetTimeUntilDeath
        
            typedef double ( ::Cell::*GetTimeUntilDeath_function_type)(  ) const;
            
            Cell_exposer.def( 
                "GetTimeUntilDeath"
                , GetTimeUntilDeath_function_type( &::Cell::GetTimeUntilDeath ) );
        
        }
        { //::Cell::HasApoptosisBegun
        
            typedef bool ( ::Cell::*HasApoptosisBegun_function_type)(  ) const;
            
            Cell_exposer.def( 
                "HasApoptosisBegun"
                , HasApoptosisBegun_function_type( &::Cell::HasApoptosisBegun ) );
        
        }
        { //::Cell::HasCellVecData
        
            typedef bool ( ::Cell::*HasCellVecData_function_type)(  ) const;
            
            Cell_exposer.def( 
                "HasCellVecData"
                , HasCellVecData_function_type( &::Cell::HasCellVecData ) );
        
        }
        { //::Cell::InitialiseCellCycleModel
        
            typedef void ( ::Cell::*InitialiseCellCycleModel_function_type)(  ) ;
            
            Cell_exposer.def( 
                "InitialiseCellCycleModel"
                , InitialiseCellCycleModel_function_type( &::Cell::InitialiseCellCycleModel ) );
        
        }
        { //::Cell::InitialiseSrnModel
        
            typedef void ( ::Cell::*InitialiseSrnModel_function_type)(  ) ;
            
            Cell_exposer.def( 
                "InitialiseSrnModel"
                , InitialiseSrnModel_function_type( &::Cell::InitialiseSrnModel ) );
        
        }
        { //::Cell::IsDead
        
            typedef bool ( ::Cell::*IsDead_function_type)(  ) ;
            
            Cell_exposer.def( 
                "IsDead"
                , IsDead_function_type( &::Cell::IsDead ) );
        
        }
        { //::Cell::IsLogged
        
            typedef bool ( ::Cell::*IsLogged_function_type)(  ) ;
            
            Cell_exposer.def( 
                "IsLogged"
                , IsLogged_function_type( &::Cell::IsLogged ) );
        
        }
        { //::Cell::Kill
        
            typedef void ( ::Cell::*Kill_function_type)(  ) ;
            
            Cell_exposer.def( 
                "Kill"
                , Kill_function_type( &::Cell::Kill ) );
        
        }
        { //::Cell::ReadyToDivide
        
            typedef bool ( ::Cell::*ReadyToDivide_function_type)(  ) ;
            
            Cell_exposer.def( 
                "ReadyToDivide"
                , ReadyToDivide_function_type( &::Cell::ReadyToDivide ) );
        
        }
        { //::Cell::SetAncestor
        
            typedef void ( ::Cell::*SetAncestor_function_type)( ::boost::shared_ptr< AbstractCellProperty > ) ;
            
            Cell_exposer.def( 
                "SetAncestor"
                , SetAncestor_function_type( &::Cell::SetAncestor )
                , ( bp::arg("pCellAncestor") ) );
        
        }
        { //::Cell::SetApoptosisTime
        
            typedef void ( ::Cell::*SetApoptosisTime_function_type)( double ) ;
            
            Cell_exposer.def( 
                "SetApoptosisTime"
                , SetApoptosisTime_function_type( &::Cell::SetApoptosisTime )
                , ( bp::arg("apoptosisTime") ) );
        
        }
        { //::Cell::SetBirthTime
        
            typedef void ( ::Cell::*SetBirthTime_function_type)( double ) ;
            
            Cell_exposer.def( 
                "SetBirthTime"
                , SetBirthTime_function_type( &::Cell::SetBirthTime )
                , ( bp::arg("birthTime") ) );
        
        }
        { //::Cell::SetCellCycleModel
        
            typedef void ( ::Cell::*SetCellCycleModel_function_type)( ::AbstractCellCycleModel * ) ;
            
            Cell_exposer.def( 
                "SetCellCycleModel"
                , SetCellCycleModel_function_type( &::Cell::SetCellCycleModel )
                , ( bp::arg("pCellCycleModel") ) );
        
        }
        { //::Cell::SetCellProliferativeType
        
            typedef void ( ::Cell::*SetCellProliferativeType_function_type)( ::boost::shared_ptr< AbstractCellProperty > ) ;
            
            Cell_exposer.def( 
                "SetCellProliferativeType"
                , SetCellProliferativeType_function_type( &::Cell::SetCellProliferativeType )
                , ( bp::arg("pProliferativeType") ) );
        
        }
        { //::Cell::SetLogged
        
            typedef void ( ::Cell::*SetLogged_function_type)(  ) ;
            
            Cell_exposer.def( 
                "SetLogged"
                , SetLogged_function_type( &::Cell::SetLogged ) );
        
        }
        { //::Cell::SetMutationState
        
            typedef void ( ::Cell::*SetMutationState_function_type)( ::boost::shared_ptr< AbstractCellProperty > ) ;
            
            Cell_exposer.def( 
                "SetMutationState"
                , SetMutationState_function_type( &::Cell::SetMutationState )
                , ( bp::arg("pMutationState") ) );
        
        }
        { //::Cell::SetSrnModel
        
            typedef void ( ::Cell::*SetSrnModel_function_type)( ::AbstractSrnModel * ) ;
            
            Cell_exposer.def( 
                "SetSrnModel"
                , SetSrnModel_function_type( &::Cell::SetSrnModel )
                , ( bp::arg("pSrnModel") ) );
        
        }
        { //::Cell::StartApoptosis
        
            typedef void ( ::Cell::*StartApoptosis_function_type)( bool ) ;
            
            Cell_exposer.def( 
                "StartApoptosis"
                , StartApoptosis_function_type( &::Cell::StartApoptosis )
                , ( bp::arg("setDeathTime")=(bool)(true) ) );
        
        }
        bp::implicitly_convertible< boost::shared_ptr< Cell >, boost::shared_ptr< boost::enable_shared_from_this< Cell > > >();
    }

}
