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

#ifndef PYTHONPETSCOBJECTCONVERTERS_HPP_
#define PYTHONPETSCOBJECTCONVERTERS_HPP_

/*
#include <petsc/private/vecimpl.h>
#include <petsc/private/matimpl.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#define PYBIND11_PETSC_TYPECASTER(T)                  \
  namespace pybind11                                  \
  {                                                   \
    namespace detail                                  \
    {                                                 \
      template <>                                     \
      struct type_caster<_p_##T>                      \
      {                                               \
      public:                                         \
        PYBIND11_TYPE_CASTER(T, const_name(#T "_t")); \
        bool load(handle src, bool)                   \
        {                                             \
          value = _p_##T##.Get(src.ptr());            \
          return true;                                \
        }                                             \
      }                                               \
                                                      \
      static handle                                   \
      cast(const T &src,                              \
           return_value_policy policy,                \
           handle parent)                             \
      {                                               \
        auto obj = _p_##T##.New(src);                 \
        return handle(obj);                           \
      }                                               \
    };                                                \
  }

PYBIND11_PETSC_TYPECASTER(Mat);
PYBIND11_PETSC_TYPECASTER(Vec);
*/

#include <petsc4py/petsc4py.h>
#include <petscdm.h>
#include <petscis.h>
#include <petscksp.h>
#include <petscmat.h>
#include <petscsnes.h>
#include <petscvec.h>
#include <pybind11/pybind11.h>

// pybind11 casters for PETSc/petsc4py objects

namespace py = pybind11;

// Import petsc4py on demand
#define VERIFY_PETSC4PY(func)                                    \
  if (!func)                                                     \
  {                                                              \
    if (import_petsc4py() != 0)                                  \
      throw std::runtime_error("Error when importing petsc4py"); \
  }

// Macro for casting between PETSc and petsc4py objects
#define PETSC_CASTER_MACRO(TYPE, P4PYTYPE, NAME)                         \
  template <>                                                            \
  class type_caster<_p_##TYPE>                                           \
  {                                                                      \
  public:                                                                \
    PYBIND11_TYPE_CASTER(TYPE, _(#NAME));                                \
    bool load(handle src, bool)                                          \
    {                                                                    \
      VERIFY_PETSC4PY(PyPetsc##P4PYTYPE##_Get);                          \
      if (PyObject_TypeCheck(src.ptr(), &PyPetsc##P4PYTYPE##_Type) != 0) \
      {                                                                  \
        value = PyPetsc##P4PYTYPE##_Get(src.ptr());                      \
        return true;                                                     \
      }                                                                  \
                                                                         \
      return false;                                                      \
    }                                                                    \
                                                                         \
    static handle cast(TYPE src, py::return_value_policy policy,         \
                       handle parent)                                    \
    {                                                                    \
      VERIFY_PETSC4PY(PyPetsc##P4PYTYPE##_New);                          \
      auto obj = PyPetsc##P4PYTYPE##_New(src);                           \
      if (policy == py::return_value_policy::take_ownership)             \
        PetscObjectDereference((PetscObject)src);                        \
      else if (policy == py::return_value_policy::reference_internal)    \
        keep_alive_impl(obj, parent);                                    \
      return py::handle(obj);                                            \
    }                                                                    \
                                                                         \
    operator TYPE() { return value; }                                    \
  }

namespace pybind11::detail
{
  PETSC_CASTER_MACRO(DM, DM, dm);
  PETSC_CASTER_MACRO(IS, IS, is);
  PETSC_CASTER_MACRO(KSP, KSP, ksp);
  PETSC_CASTER_MACRO(Mat, Mat, mat);
  PETSC_CASTER_MACRO(SNES, SNES, snes);
  PETSC_CASTER_MACRO(Vec, Vec, vec);
} // namespace pybind11::detail

#undef PETSC_CASTER_MACRO

#endif /*PYTHONPETSCOBJECTCONVERTERS_HPP_*/
