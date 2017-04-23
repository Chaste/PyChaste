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
#include "FileFinder.pypp.hpp"

namespace bp = boost::python;

struct FileFinder_wrapper : FileFinder, bp::wrapper< FileFinder > {

    FileFinder_wrapper(FileFinder const & arg )
    : FileFinder( arg )
      , bp::wrapper< FileFinder >(){
        // copy constructor
        
    }

    FileFinder_wrapper( )
    : FileFinder( )
      , bp::wrapper< FileFinder >(){
        // null constructor
    
    }

    FileFinder_wrapper(::std::string const & rPath, ::RelativeTo::Value relativeTo )
    : FileFinder( rPath, relativeTo )
      , bp::wrapper< FileFinder >(){
        // constructor
    
    }

    FileFinder_wrapper(::std::string const & rLeafName, ::FileFinder const & rParentOrSibling )
    : FileFinder( rLeafName, boost::ref(rParentOrSibling) )
      , bp::wrapper< FileFinder >(){
        // constructor
    
    }

    FileFinder_wrapper(::boost::filesystem::path const & rPath )
    : FileFinder( boost::ref(rPath) )
      , bp::wrapper< FileFinder >(){
        // constructor
    
    }

    virtual void SetPath( ::std::string const & rPath, ::RelativeTo::Value relativeTo ) {
        if( bp::override func_SetPath = this->get_override( "SetPath" ) )
            func_SetPath( rPath, relativeTo );
        else{
            this->FileFinder::SetPath( rPath, relativeTo );
        }
    }
    
    void default_SetPath( ::std::string const & rPath, ::RelativeTo::Value relativeTo ) {
        FileFinder::SetPath( rPath, relativeTo );
    }

    virtual void SetPath( ::std::string const & rLeafName, ::FileFinder const & rParentOrSibling ) {
        if( bp::override func_SetPath = this->get_override( "SetPath" ) )
            func_SetPath( rLeafName, boost::ref(rParentOrSibling) );
        else{
            this->FileFinder::SetPath( rLeafName, boost::ref(rParentOrSibling) );
        }
    }
    
    void default_SetPath( ::std::string const & rLeafName, ::FileFinder const & rParentOrSibling ) {
        FileFinder::SetPath( rLeafName, boost::ref(rParentOrSibling) );
    }

};

void register_FileFinder_class(){

    { //::FileFinder
        typedef bp::class_< FileFinder_wrapper > FileFinder_exposer_t;
        FileFinder_exposer_t FileFinder_exposer = FileFinder_exposer_t( "FileFinder", bp::init< >() );
        bp::scope FileFinder_scope( FileFinder_exposer );
        FileFinder_exposer.def( bp::init< std::string const &, RelativeTo::Value >(( bp::arg("rPath"), bp::arg("relativeTo") )) );
        FileFinder_exposer.def( bp::init< std::string const &, FileFinder const & >(( bp::arg("rLeafName"), bp::arg("rParentOrSibling") )) );
        FileFinder_exposer.def( bp::init< boost::filesystem::path const & >(( bp::arg("rPath") )) );
        bp::implicitly_convertible< boost::filesystem::path const &, FileFinder >();
        { //::FileFinder::CopyTo
        
            typedef ::FileFinder ( ::FileFinder::*CopyTo_function_type)( ::FileFinder const & ) const;
            
            FileFinder_exposer.def( 
                "CopyTo"
                , CopyTo_function_type( &::FileFinder::CopyTo )
                , ( bp::arg("rDest") ) );
        
        }
        { //::FileFinder::DangerousRemove
        
            typedef void ( ::FileFinder::*DangerousRemove_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "DangerousRemove"
                , DangerousRemove_function_type( &::FileFinder::DangerousRemove ) );
        
        }
        { //::FileFinder::Exists
        
            typedef bool ( ::FileFinder::*Exists_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "Exists"
                , Exists_function_type( &::FileFinder::Exists ) );
        
        }
        { //::FileFinder::FakePath
        
            typedef void ( *FakePath_function_type )( ::RelativeTo::Value,::std::string const & );
            
            FileFinder_exposer.def( 
                "FakePath"
                , FakePath_function_type( &::FileFinder::FakePath )
                , ( bp::arg("fakeWhat"), bp::arg("rFakePath") ) );
        
        }
        { //::FileFinder::FindMatches
        
            typedef ::std::vector< FileFinder > ( ::FileFinder::*FindMatches_function_type)( ::std::string const & ) const;
            
            FileFinder_exposer.def( 
                "FindMatches"
                , FindMatches_function_type( &::FileFinder::FindMatches )
                , ( bp::arg("rPattern") ) );
        
        }
        { //::FileFinder::GetAbsolutePath
        
            typedef ::std::string ( ::FileFinder::*GetAbsolutePath_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "GetAbsolutePath"
                , GetAbsolutePath_function_type( &::FileFinder::GetAbsolutePath ) );
        
        }
        { //::FileFinder::GetExtension
        
            typedef ::std::string ( ::FileFinder::*GetExtension_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "GetExtension"
                , GetExtension_function_type( &::FileFinder::GetExtension ) );
        
        }
        { //::FileFinder::GetLeafName
        
            typedef ::std::string ( ::FileFinder::*GetLeafName_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "GetLeafName"
                , GetLeafName_function_type( &::FileFinder::GetLeafName ) );
        
        }
        { //::FileFinder::GetLeafNameNoExtension
        
            typedef ::std::string ( ::FileFinder::*GetLeafNameNoExtension_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "GetLeafNameNoExtension"
                , GetLeafNameNoExtension_function_type( &::FileFinder::GetLeafNameNoExtension ) );
        
        }
        { //::FileFinder::GetParent
        
            typedef ::FileFinder ( ::FileFinder::*GetParent_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "GetParent"
                , GetParent_function_type( &::FileFinder::GetParent ) );
        
        }
        { //::FileFinder::GetRelativePath
        
            typedef ::std::string ( ::FileFinder::*GetRelativePath_function_type)( ::FileFinder const & ) const;
            
            FileFinder_exposer.def( 
                "GetRelativePath"
                , GetRelativePath_function_type( &::FileFinder::GetRelativePath )
                , ( bp::arg("rBasePath") ) );
        
        }
        { //::FileFinder::IsAbsolutePath
        
            typedef bool ( *IsAbsolutePath_function_type )( ::std::string const & );
            
            FileFinder_exposer.def( 
                "IsAbsolutePath"
                , IsAbsolutePath_function_type( &::FileFinder::IsAbsolutePath )
                , ( bp::arg("rPath") ) );
        
        }
        { //::FileFinder::IsDir
        
            typedef bool ( ::FileFinder::*IsDir_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "IsDir"
                , IsDir_function_type( &::FileFinder::IsDir ) );
        
        }
        { //::FileFinder::IsEmpty
        
            typedef bool ( ::FileFinder::*IsEmpty_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "IsEmpty"
                , IsEmpty_function_type( &::FileFinder::IsEmpty ) );
        
        }
        { //::FileFinder::IsFile
        
            typedef bool ( ::FileFinder::*IsFile_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "IsFile"
                , IsFile_function_type( &::FileFinder::IsFile ) );
        
        }
        { //::FileFinder::IsNewerThan
        
            typedef bool ( ::FileFinder::*IsNewerThan_function_type)( ::FileFinder const & ) const;
            
            FileFinder_exposer.def( 
                "IsNewerThan"
                , IsNewerThan_function_type( &::FileFinder::IsNewerThan )
                , ( bp::arg("rOtherEntity") ) );
        
        }
        { //::FileFinder::IsPathSet
        
            typedef bool ( ::FileFinder::*IsPathSet_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "IsPathSet"
                , IsPathSet_function_type( &::FileFinder::IsPathSet ) );
        
        }
        { //::FileFinder::Remove
        
            typedef void ( ::FileFinder::*Remove_function_type)(  ) const;
            
            FileFinder_exposer.def( 
                "Remove"
                , Remove_function_type( &::FileFinder::Remove ) );
        
        }
        { //::FileFinder::ReplaceSpacesWithUnderscores
        
            typedef void ( *ReplaceSpacesWithUnderscores_function_type )( ::std::string & );
            
            FileFinder_exposer.def( 
                "ReplaceSpacesWithUnderscores"
                , ReplaceSpacesWithUnderscores_function_type( &::FileFinder::ReplaceSpacesWithUnderscores )
                , ( bp::arg("rPath") ) );
        
        }
        { //::FileFinder::ReplaceUnderscoresWithSpaces
        
            typedef void ( *ReplaceUnderscoresWithSpaces_function_type )( ::std::string & );
            
            FileFinder_exposer.def( 
                "ReplaceUnderscoresWithSpaces"
                , ReplaceUnderscoresWithSpaces_function_type( &::FileFinder::ReplaceUnderscoresWithSpaces )
                , ( bp::arg("rPath") ) );
        
        }
        { //::FileFinder::SetPath
        
            typedef void ( ::FileFinder::*SetPath_function_type)( ::std::string const &,::RelativeTo::Value ) ;
            typedef void ( FileFinder_wrapper::*default_SetPath_function_type)( ::std::string const &,::RelativeTo::Value ) ;
            
            FileFinder_exposer.def( 
                "SetPath"
                , SetPath_function_type(&::FileFinder::SetPath)
                , default_SetPath_function_type(&FileFinder_wrapper::default_SetPath)
                , ( bp::arg("rPath"), bp::arg("relativeTo") ) );
        
        }
        { //::FileFinder::SetPath
        
            typedef void ( ::FileFinder::*SetPath_function_type)( ::std::string const &,::FileFinder const & ) ;
            typedef void ( FileFinder_wrapper::*default_SetPath_function_type)( ::std::string const &,::FileFinder const & ) ;
            
            FileFinder_exposer.def( 
                "SetPath"
                , SetPath_function_type(&::FileFinder::SetPath)
                , default_SetPath_function_type(&FileFinder_wrapper::default_SetPath)
                , ( bp::arg("rLeafName"), bp::arg("rParentOrSibling") ) );
        
        }
        { //::FileFinder::StopFaking
        
            typedef void ( *StopFaking_function_type )(  );
            
            FileFinder_exposer.def( 
                "StopFaking"
                , StopFaking_function_type( &::FileFinder::StopFaking ) );
        
        }
        FileFinder_exposer.staticmethod( "FakePath" );
        FileFinder_exposer.staticmethod( "IsAbsolutePath" );
        FileFinder_exposer.staticmethod( "ReplaceSpacesWithUnderscores" );
        FileFinder_exposer.staticmethod( "ReplaceUnderscoresWithSpaces" );
        FileFinder_exposer.staticmethod( "StopFaking" );
    }

}