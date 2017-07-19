/** 
 * @file Npred.h
 * @brief Declaration of Npred class
 * @author J. Chiang
 *
 * $Header: /nfs/slac/g/glast/ground/cvs/ScienceTools-scons/Likelihood/Likelihood/Npred.h,v 1.15 2015/03/21 05:38:02 jchiang Exp $
 */

#ifndef Likelihood_Npred_h
#define Likelihood_Npred_h

#include "optimizers/Function.h"
#include "Likelihood/Source.h"
#include "Likelihood/SrcArg.h"

namespace Likelihood {

/** 
 * @class Npred
 *
 * @brief This class encapsulates the Npred methods of Sources in a
 * Function context.
 *  
 */

class Npred : public optimizers::Function {
    
public:

   Npred();

   virtual ~Npred() {}

protected:

   double value(const optimizers::Arg &) const;

   double derivByParamImp(const optimizers::Arg &, const std::string &) const;

   optimizers::Function * clone() const {
      return new Npred(*this);
   }

private:

   void fetchDerivs(const optimizers::Arg &, std::vector<double> &derivs, 
                    bool getFree) const;
   void buildParameterVector(const optimizers::Arg &);

};

} // namespace Likelihood

#endif // Likelihood_Npred_h
