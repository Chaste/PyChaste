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
#include "RandomNumberGenerator.pypp.hpp"

namespace bp = boost::python;

struct RandomNumberGenerator_wrapper : RandomNumberGenerator, bp::wrapper< RandomNumberGenerator > {

    RandomNumberGenerator_wrapper( )
    : RandomNumberGenerator( )
      , bp::wrapper< RandomNumberGenerator >(){
        // null constructor
    
    }

};

void register_RandomNumberGenerator_class(){

    bp::class_< RandomNumberGenerator_wrapper, boost::noncopyable >( "RandomNumberGenerator", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "Destroy"
            , (void (*)(  ))( &::RandomNumberGenerator::Destroy ) )    
        .def( 
            "ExponentialRandomDeviate"
            , (double ( ::RandomNumberGenerator::* )( double ))( &::RandomNumberGenerator::ExponentialRandomDeviate )
            , ( bp::arg("scale") ) )    
        .def( 
            "GammaRandomDeviate"
            , (double ( ::RandomNumberGenerator::* )( double,double ))( &::RandomNumberGenerator::GammaRandomDeviate )
            , ( bp::arg("shape"), bp::arg("scale") ) )    
        .def( 
            "Instance"
            , (::RandomNumberGenerator * (*)(  ))( &::RandomNumberGenerator::Instance )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "NormalRandomDeviate"
            , (double ( ::RandomNumberGenerator::* )( double,double ))( &::RandomNumberGenerator::NormalRandomDeviate )
            , ( bp::arg("mean"), bp::arg("stdDev") ) )    
        .def( 
            "Reseed"
            , (void ( ::RandomNumberGenerator::* )( unsigned int ))( &::RandomNumberGenerator::Reseed )
            , ( bp::arg("seed") ) )    
        .def( 
            "Shuffle"
            , (void ( ::RandomNumberGenerator::* )( unsigned int,::std::vector< unsigned int > & ))( &::RandomNumberGenerator::Shuffle )
            , ( bp::arg("num"), bp::arg("rValues") ) )    
        .def( 
            "StandardNormalRandomDeviate"
            , (double ( ::RandomNumberGenerator::* )(  ))( &::RandomNumberGenerator::StandardNormalRandomDeviate ) )    
        .def( 
            "randMod"
            , (unsigned int ( ::RandomNumberGenerator::* )( unsigned int ))( &::RandomNumberGenerator::randMod )
            , ( bp::arg("base") ) )    
        .def( 
            "ranf"
            , (double ( ::RandomNumberGenerator::* )(  ))( &::RandomNumberGenerator::ranf ) )    
        .staticmethod( "Destroy" )    
        .staticmethod( "Instance" );

}
