/**
 * @file SparseVector.cxx
 * @brief Implmentation of a sparse vector (similar to an std::map, but with less functionality, and using less memory)
 * @author E. Charles
 *
 * $Header: /glast/ScienceTools/glast/Likelihood/src/SparseVector.cxx,v 1.1.2.1 2017/02/01 04:19:57 jasercio Exp $
 */


#include "Likelihood/SparseVector.h"

namespace Likelihood {

  static SparseVector<int> sparse_int;
  static SparseVector<float> sparse_float;
  static SparseVector<double> sparse_double;
 
} // namespace Likelihood
