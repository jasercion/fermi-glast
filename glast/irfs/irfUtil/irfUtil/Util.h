/**
 * @file Util.h
 * @brief Utility functions used by response function classes and others.
 * @author J. Chiang
 *
 * $Header: /nfs/slac/g/glast/ground/cvs/ScienceTools-scons/irfs/irfUtil/irfUtil/Util.h,v 1.11 2015/04/07 05:20:12 jchiang Exp $
 */

#ifndef irfUtil_Util_h
#define irfUtil_Util_h

#include <string>
#include <map>
#include <vector>

namespace irfUtil {

/**
 * @class Util
 *
 */

class Util {

public:

   virtual ~Util() {}

   static void joinPaths(const std::string & components,
                         std::string & final_path);

   static void getCaldbFile(const std::string & detName, 
                            const std::string & respName,
                            const std::string & version,
                            std::string & filename,
                            long & extnum,
                            const std::string & telescope="GLAST",
                            const std::string & instrument="LAT",
                            const std::string & filter="NONE",
                            const std::string & date="-",
                            const std::string & time="-");

protected:

   Util() {}

};

} // namespace irfUtil

#endif // irfUtil_Util_h
