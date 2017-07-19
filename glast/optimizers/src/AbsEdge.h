/** 
 * @file AbsEdge.h
 * @brief AbsEdge class declaration
 * @author J. Chiang
 *
 * $Header: /nfs/slac/g/glast/ground/cvs/ScienceTools-scons/optimizers/src/AbsEdge.h,v 1.4 2015/03/21 05:36:46 jchiang Exp $
 */

#ifndef optimizers_AbsEdge_h
#define optimizers_AbsEdge_h

#include "optimizers/Function.h"

namespace optimizers {

class Arg;

/** 
 * @class AbsEdge
 *
 * @brief This Function models an absorption edge as a multiplicative 
 * spectral component.
 */
    
class AbsEdge : public Function {

public:

   AbsEdge(double Tau0=1, double E0=1, double Index=-3);

   virtual Function *clone() const {
      return new AbsEdge(*this);
   }

protected:

   double value(const Arg & xarg) const;

   double derivByParamImp(const Arg & xarg,
                          const std::string & paramName) const;

};

} // namespace optimizers

#endif // optimizers_AbsEdge_h

