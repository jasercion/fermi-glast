/** 
 * @file dArg.h
 * @brief Declaration of dArg class
 * @author J. Chiang
 *
 * $Header: /nfs/slac/g/glast/ground/cvs/ScienceTools-scons/optimizers/optimizers/dArg.h,v 1.2 2015/03/21 05:36:46 jchiang Exp $
 */

#ifndef optimizers_dArg_h
#define optimizers_dArg_h

#include "optimizers/Arg.h"

namespace optimizers {

/** 
 * @class dArg
 *
 * @brief Concrete Arg subclass for encapsulating data of type double.
 *
 */

class dArg : public Arg {
    
public:
   
   dArg(double x) : m_val(x) {}
   virtual ~dArg() {}

   double getValue() const {
      return m_val;
   }

private:

   double m_val;

};

} // namespace optimizers

#endif // optimizers_dArg_h
