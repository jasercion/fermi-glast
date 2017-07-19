/** 
 * @file Arg.h
 * @brief Declaration of Arg class
 * @author J. Chiang
 * $Header: /nfs/slac/g/glast/ground/cvs/ScienceTools-scons/optimizers/optimizers/Arg.h,v 1.2 2015/03/21 05:36:46 jchiang Exp $
 */

#ifndef optimizers_Arg_h
#define optimizers_Arg_h

namespace optimizers {

/** 
 * @class Arg
 *
 * @brief An abstract class that encapsulates argument type
 * information so that Function's value() and Parameter passing
 * methods can be overloaded transparently.
 *
 */

class Arg {
    
public:

   Arg() {}
   
   virtual ~Arg() {}

protected:

//   Arg() {}

};

} // namespace optimizers

#endif // optimizers_Arg_h
