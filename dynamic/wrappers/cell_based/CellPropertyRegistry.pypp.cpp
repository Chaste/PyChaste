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
#include "CellPropertyRegistry.pypp.hpp"

namespace bp = boost::python;

void register_CellPropertyRegistry_class(){

    { //::CellPropertyRegistry
        typedef bp::class_< CellPropertyRegistry, boost::noncopyable > CellPropertyRegistry_exposer_t;
        CellPropertyRegistry_exposer_t CellPropertyRegistry_exposer = CellPropertyRegistry_exposer_t( "CellPropertyRegistry", bp::no_init );
        bp::scope CellPropertyRegistry_scope( CellPropertyRegistry_exposer );
        { //::CellPropertyRegistry::Clear
        
            typedef void ( ::CellPropertyRegistry::*Clear_function_type)(  ) ;
            
            CellPropertyRegistry_exposer.def( 
                "Clear"
                , Clear_function_type( &::CellPropertyRegistry::Clear ) );
        
        }
        { //::CellPropertyRegistry::HasOrderingBeenSpecified
        
            typedef bool ( ::CellPropertyRegistry::*HasOrderingBeenSpecified_function_type)(  ) ;
            
            CellPropertyRegistry_exposer.def( 
                "HasOrderingBeenSpecified"
                , HasOrderingBeenSpecified_function_type( &::CellPropertyRegistry::HasOrderingBeenSpecified ) );
        
        }
        { //::CellPropertyRegistry::Instance
        
            typedef ::CellPropertyRegistry * ( *Instance_function_type )(  );
            
            CellPropertyRegistry_exposer.def( 
                "Instance"
                , Instance_function_type( &::CellPropertyRegistry::Instance )
                , bp::return_value_policy< bp::manage_new_object >() );
        
        }
        { //::CellPropertyRegistry::SpecifyOrdering
        
            typedef void ( ::CellPropertyRegistry::*SpecifyOrdering_function_type)( ::std::vector< boost::shared_ptr<AbstractCellProperty> > const & ) ;
            
            CellPropertyRegistry_exposer.def( 
                "SpecifyOrdering"
                , SpecifyOrdering_function_type( &::CellPropertyRegistry::SpecifyOrdering )
                , ( bp::arg("rOrdering") ) );
        
        }
        CellPropertyRegistry_exposer.staticmethod( "Instance" );
        bp::register_ptr_to_python< boost::shared_ptr< CellPropertyRegistry > >();
    }

}
