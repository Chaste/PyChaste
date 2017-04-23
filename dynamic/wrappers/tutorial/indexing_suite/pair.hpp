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

// This file has been generated by Py++.

// Header file pair.hpp
//
// Exposes std::pair< key, value > class
//
// Copyright (c) 2007 Roman Yakovenko
//
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy
// at http://www.boost.org/LICENSE_1_0.txt)
//
// History
// =======
// 2007/2/11   rmg     File creation
// 2008/12/08   Roman   Change indexing suite layout
//

#ifndef BOOST_PYTHON_STD_PAIR_KEY_VALUE_11_02_2007_HPP
#define BOOST_PYTHON_STD_PAIR_KEY_VALUE_11_02_2007_HPP

#include <boost/config.hpp>
#include <indexing_suite/container_traits.hpp>
#include <indexing_suite/container_suite.hpp>
#include <indexing_suite/registry_utils.hpp>
#include <indexing_suite/algorithms.hpp>
#include <boost/detail/workaround.hpp>

namespace boost { namespace python { namespace indexing { namespace mapping{

namespace details{

template< typename TValueType, typename TValueCallPolicies >
struct pair_exposer_t{

    typedef TValueType pair_type;
    typedef BOOST_DEDUCED_TYPENAME pair_type::first_type key_type;
    typedef BOOST_DEDUCED_TYPENAME pair_type::second_type mapped_type;
    typedef pair_exposer_t< TValueType, TValueCallPolicies > exposer_type;

    pair_exposer_t(const std::string& name){
        if( boost::python::registry::utils::is_registered< pair_type >() ){
            boost::python::registry::utils::register_alias<pair_type>( name.c_str() );
        }
        else{
            class_< pair_type >( name.c_str() )
                .def( "__len__", &exposer_type::len )
                .def( "__getitem__", &exposer_type::get_item )
                .add_property( "key", &exposer_type::get_key )
                .add_property( "value", &exposer_type::get_mapped );
        }
    }

private:

    static size_t len( const pair_type& ){
        return 2;
    }

    static object get_item( pair_type& p, size_t index ){
        switch( index ){
            case 0:{
                return get_key( p );
            }
            case 1:{
                return get_mapped( p );
            }
            case 2:{
                objects::stop_iteration_error();
                return object(); //will not reach this line
            }
            default:{
                PyErr_SetString( PyExc_IndexError, "the only valid index numbers are: 0 and 1");
                throw_error_already_set();
                return object(); //will not reach this line
            }
        }
    }

    static object get_key( const pair_type& p ){
        return object( p.first );
    }

    static object get_mapped( pair_type& p ){
        typedef BOOST_DEDUCED_TYPENAME TValueCallPolicies::result_converter rc_type;
        typedef BOOST_DEDUCED_TYPENAME rc_type:: template apply< mapped_type >::type converter_type;
        converter_type converter;
        return object( handle<>( converter( p.second ) ) );
    }

};
} //details

template< typename TPythonClass, typename TValueType, typename TValueCallPolicies >
inline void register_value_type(TPythonClass &pyClass){
    typedef details::pair_exposer_t< TValueType, TValueCallPolicies > exposer_type;

    object class_name(pyClass.attr("__name__"));
    extract<std::string> class_name_extractor(class_name);
    std::string pair_name = class_name_extractor() + "_entry";

    exposer_type expose( pair_name );
}

} } } }

#endif // BOOST_PYTHON_STD_PAIR_KEY_VALUE_11_02_2007_HPP


