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
#include "core_headers.hpp"
#include "ChasteBuildInfo.pypp.hpp"

namespace bp = boost::python;

void register_ChasteBuildInfo_class(){

    bp::class_< ChasteBuildInfo >( "ChasteBuildInfo" )    
        .def( 
            "GetBuildInformation"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetBuildInformation ) )    
        .def( 
            "GetBuildTime"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetBuildTime ) )    
        .def( 
            "GetBuilderUnameInfo"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetBuilderUnameInfo ) )    
        .def( 
            "GetCompilerFlags"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetCompilerFlags ) )    
        .def( 
            "GetCompilerType"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetCompilerType ) )    
        .def( 
            "GetCompilerVersion"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetCompilerVersion ) )    
        .def( 
            "GetCurrentTime"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetCurrentTime ) )    
        .def( 
            "GetLicenceText"
            , (::std::string (*)(  ))( &::ChasteBuildInfo::GetLicenceText ) )    
        .def( 
            "GetMajorReleaseNumber"
            , (unsigned int (*)(  ))( &::ChasteBuildInfo::GetMajorReleaseNumber ) )    
        .def( 
            "GetMinorReleaseNumber"
            , (unsigned int (*)(  ))( &::ChasteBuildInfo::GetMinorReleaseNumber ) )    
        .def( 
            "GetProvenanceString"
            , (::std::string (*)(  ))( &::ChasteBuildInfo::GetProvenanceString ) )    
        .def( 
            "GetRevisionNumber"
            , (unsigned int (*)(  ))( &::ChasteBuildInfo::GetRevisionNumber ) )    
        .def( 
            "GetRootDir"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetRootDir ) )    
        .def( 
            "GetVersionString"
            , (::std::string (*)(  ))( &::ChasteBuildInfo::GetVersionString ) )    
        .def( 
            "GetXsdVersion"
            , (char const * (*)(  ))( &::ChasteBuildInfo::GetXsdVersion ) )    
        .def( 
            "IsWorkingCopyModified"
            , (bool (*)(  ))( &::ChasteBuildInfo::IsWorkingCopyModified ) )    
        .def( 
            "rGetProjectVersions"
            , (::std::map< std::string, std::string > const & (*)(  ))( &::ChasteBuildInfo::rGetProjectVersions )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .staticmethod( "GetBuildInformation" )    
        .staticmethod( "GetBuildTime" )    
        .staticmethod( "GetBuilderUnameInfo" )    
        .staticmethod( "GetCompilerFlags" )    
        .staticmethod( "GetCompilerType" )    
        .staticmethod( "GetCompilerVersion" )    
        .staticmethod( "GetCurrentTime" )    
        .staticmethod( "GetLicenceText" )    
        .staticmethod( "GetMajorReleaseNumber" )    
        .staticmethod( "GetMinorReleaseNumber" )    
        .staticmethod( "GetProvenanceString" )    
        .staticmethod( "GetRevisionNumber" )    
        .staticmethod( "GetRootDir" )    
        .staticmethod( "GetVersionString" )    
        .staticmethod( "GetXsdVersion" )    
        .staticmethod( "IsWorkingCopyModified" )    
        .staticmethod( "rGetProjectVersions" );

}
