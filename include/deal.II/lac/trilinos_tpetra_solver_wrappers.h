// ------------------------------------------------------------------------
//
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright (C) 2024 - 2026 by the deal.II authors
//
// This file is part of the deal.II library.
//
// Part of the source code is dual licensed under Apache-2.0 WITH
// LLVM-exception OR LGPL-2.1-or-later. Detailed license information
// governing the source code and code contributions can be found in
// LICENSE.md and CONTRIBUTING.md at the top level directory of deal.II.
//
// ------------------------------------------------------------------------

#ifndef dealii_trilinos_tpetra_solver_wrappers_h
#define dealii_trilinos_tpetra_solver_wrappers_h

#include <deal.II/base/config.h>

#ifndef DEAL_II_TRILINOS_WITH_EPETRA
#  include <deal.II/lac/trilinos_tpetra_vector.h>
#endif

DEAL_II_NAMESPACE_OPEN

#ifdef DEAL_II_WITH_TRILINOS

#  ifndef DEAL_II_TRILINOS_WITH_EPETRA
namespace TrilinosWrappers
{
  /**
   * Typedef for the CG solver type used.
   */
  using SolverCG = dealii::SolverCG<
    LinearAlgebra::TpetraWrappers::Vector<double, ::dealii::MemorySpace::Host>>;

  /**
   * Typedef for the GMRES solver type used.
   */
  using SolverGMRES = dealii::SolverGMRES<
    LinearAlgebra::TpetraWrappers::Vector<double, ::dealii::MemorySpace::Host>>;
} // namespace TrilinosWrappers
#  else
namespace TrilinosWrappers
{
  class SolverCG;
  class SolverGMRES;
} // namespace TrilinosWrappers
#  endif

#endif

DEAL_II_NAMESPACE_CLOSE

#endif
