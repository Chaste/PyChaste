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

//
// Header file shared_proxy_impl.hpp
//
// The shared implementation of the element proxy (const and non-const
// versions).  Multiple proxy pointers can refer to the same shared
// implementation, meaning that only one object requires updating to
// affect all proxy pointers that ultimately refer to the same index
// in the container.
//
// Copyright (c) 2003 Raoul M. Gough
//
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy
// at http://www.boost.org/LICENSE_1_0.txt)
//
// History
// =======
// 2003/ 8/29   rmg     File creation from container_proxy.hh
// 2008/12/08   Roman   Change indexing suite layout
//
// $Id: shared_proxy_impl.hpp,v 1.1.2.8 2003/11/24 14:28:31 raoulgough Exp $
//

#ifndef BOOST_PYTHON_INDEXING_SHARED_PROXY_IMPL_HPP
#define BOOST_PYTHON_INDEXING_SHARED_PROXY_IMPL_HPP

#include <memory>
#include <indexing_suite/workaround.hpp>

namespace boost { namespace python { namespace indexing {
  template<class ContainerProxy>
  class shared_proxy_impl
  {
  public:
    typedef typename ContainerProxy::raw_value_type value_type;
    typedef value_type &reference;
    typedef value_type *pointer;
    typedef void iterator_category;  // Fudge for boost::indirect_iterator
    typedef void difference_type;    // Fudge for boost::indirect_iterator

    reference operator*() const;
    pointer operator->() const { return &(**this); }

    ContainerProxy *owner() const { return m_owner_ptr; }
    size_t index() const { return m_index; }

    shared_proxy_impl (value_type const &copy);
    // Creates value-only (detached) proxy

#if defined (BOOST_NO_MEMBER_TEMPLATE_FRIENDS)
  public:
#else
  private:
    template<class C, class A, class G> friend class container_proxy;
#endif

    shared_proxy_impl (ContainerProxy *, size_t);
    void detach ();

    ContainerProxy *m_owner_ptr;             // When attached
    size_t m_index;                          // When attached
    std::auto_ptr<value_type> m_element_ptr; // When detached

  private:
    // Not implemented
    shared_proxy_impl (shared_proxy_impl const &);
    shared_proxy_impl &operator= (shared_proxy_impl const &);
  };

  template<class ContainerProxy>
  shared_proxy_impl<ContainerProxy>::shared_proxy_impl (ContainerProxy *owner,
                                                        size_t index)
    : m_owner_ptr (owner),
    m_index (index),
    m_element_ptr ()
  {
  }

  template<class ContainerProxy>
  shared_proxy_impl<ContainerProxy>::shared_proxy_impl (value_type const &val)
    : m_owner_ptr (0),
    m_index (static_cast<size_t>(-1)),
    m_element_ptr (new value_type (val))
  {
  }

  template<class ContainerProxy>
  typename shared_proxy_impl<ContainerProxy>::reference
  shared_proxy_impl<ContainerProxy>::operator* () const
  {
    return m_owner_ptr
      ? m_owner_ptr->raw_container().BOOST_PYTHON_INDEXING_AT (m_index)
      : *m_element_ptr;
  }

  template<class ContainerProxy>
  void shared_proxy_impl<ContainerProxy>::detach ()
  {
    BOOST_PYTHON_INDEXING_RESET_AUTO_PTR(
        m_element_ptr, new value_type (**this));
    m_owner_ptr = 0;
    m_index = static_cast<size_t>(-1);
  }
} } }

#endif // BOOST_PYTHON_INDEXING_SHARED_PROXY_IMPL_HPP



