/**
 * @brief Decorator class for restricting the underlying function
 * to a specified energy band.
 *
 * @author J. Chiang <jchiang@slac.stanford.edu>
 *
 * $Header: /heacvs/glast/ScienceTools/glast/Likelihood/Likelihood/EnergyBand.h,v 1.4 2016/11/08 21:05:51 jasercio Exp $
 */

#include "optimizers/Function.h"

namespace Likelihood {

class EnergyBand : public optimizers::Function {
   
public:

   EnergyBand();

   EnergyBand(const optimizers::Function & spectrum,
              double emin=100, double emax=3e5);

   EnergyBand(const EnergyBand & other);

   EnergyBand & operator=(const EnergyBand & rhs);

   ~EnergyBand() throw();

   virtual Function * clone() const {
      return new EnergyBand(*this);
   }

   /// Set a Parameter using a Parameter object.  This version
   /// preserves the references to the m_spectrum parameters.
   virtual void setParam(const optimizers::Parameter & param);

protected:

   virtual double value(const optimizers::Arg & x) const;

   virtual double derivByParamImp(const optimizers::Arg & x,
                                  const std::string & paramName) const;

private:
   
   optimizers::Function * m_spectrum;

   void init(double emin, double emax);

   void setParRefs();

};

} // namespace Likelihood
