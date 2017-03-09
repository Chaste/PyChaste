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

// Copyright (c) 2003 Raoul M. Gough
//
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy
// at http://www.boost.org/LICENSE_1_0.txt)
//
// Header file vector.hpp
//
// Indexing algorithms support for std::vector instances
//
// History
// =======
// 2003/10/28   rmg     File creation from algo_selector.hpp
// 2008/12/08   Roman   Change indexing suite layout
//
// $Id: vector.hpp,v 1.1.2.6 2004/02/08 18:57:42 raoulgough Exp $
//

#ifndef BOOST_PYTHON_INDEXING_VECTOR_HPP
#define BOOST_PYTHON_INDEXING_VECTOR_HPP

#include <indexing_suite/container_traits.hpp>
#include <indexing_suite/container_suite.hpp>
#include <indexing_suite/algorithms.hpp>
#include <vector>

namespace boost { namespace python { namespace indexing {
#if !defined(BOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION)
  namespace detail {
    ///////////////////////////////////////////////////////////////////////
    // algorithms support for std::vector instances
    ///////////////////////////////////////////////////////////////////////

    template <class T, class Allocator>
    class algorithms_selector<std::vector<T, Allocator> >
    {
      typedef std::vector<T, Allocator> Container;

      typedef random_access_sequence_traits<Container>       mutable_traits;
      typedef random_access_sequence_traits<Container const> const_traits;

    public:
      typedef default_algorithms<mutable_traits> mutable_algorithms;
      typedef default_algorithms<const_traits>   const_algorithms;
    };
  }
#endif

  template<
    class Container,
    method_set_type MethodMask = all_methods,
    class Traits = random_access_sequence_traits<Container>
  >
  struct vector_suite
    : container_suite<Container, MethodMask, default_algorithms<Traits> >
  {
  };

} } }

#endif // BOOST_PYTHON_INDEXING_VECTOR_HPP



