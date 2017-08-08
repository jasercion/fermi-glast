/** 
 * @file LogGaussian.h
 * @brief Declaration for the LogGaussian Function class
 * @author J. Chiang
 *
 * $Header: /glast/ScienceTools/glast/Likelihood/Likelihood/LogGaussian.h,v 1.1.1.1.6.6 2017/02/01 04:22:06 jasercio Exp $
 */

#ifndef Likelihood_LogGaussian_h
#define Likelihood_LogGaussian_h

#include "optimizers/Arg.h"
#include "optimizers/Function.h"

namespace Likelihood {

/** 
 * @class LogGaussian
 *
 * @brief A power-law function that uses integrated flux and index
 * as free parameters and upper and lower bounds of integration as 
 * fixed parameters.
 *
 */
    
class LogGaussian : public optimizers::Function {

public:

   LogGaussian(double norm=1, double mean=0, double sigma=1);

   double derivative(const optimizers::Arg & x) const;
   
   virtual Function * clone() const {
      return new LogGaussian(*this);
   }

protected:

   double value(const optimizers::Arg & arg) const;

   double derivByParamImp(const optimizers::Arg & x, 
                          const std::string & paramName) const;

private:

   double m_log_term;

};

} // namespace Likelihood

#endif // Likelihood_LogGaussian_h
