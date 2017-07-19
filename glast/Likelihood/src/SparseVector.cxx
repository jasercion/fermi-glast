/**
 * @file SparseVector.cxx
 * @brief Implmentation of a sparse vector (similar to an std::map, but with less functionality, and using less memory)
 * @author E. Charles
 *
 * $Header: /heacvs/glast/ScienceTools/glast/Likelihood/src/SparseVector.cxx,v 1.1 2016/11/04 19:11:42 jasercio Exp $
 */


#include "Likelihood/SparseVector.h"

namespace Likelihood {

  static SparseVector<int> sparse_int;
  static SparseVector<float> sparse_float;
  static SparseVector<double> sparse_double;
 
} // namespace Likelihood
