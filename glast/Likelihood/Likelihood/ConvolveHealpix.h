/**
 * @file Convolve.h
 * @brief Functions to perform convolutions of HEALPix maps
 * @author E. Charles
 *
 * $Header: /glast/ScienceTools/glast/Likelihood/Likelihood/ConvolveHealpix.h,v 1.2.2.1 2017/02/01 04:21:56 jasercio Exp $
 */

#ifndef Likelihood_ConvolveHealpix_h
#define Likelihood_ConvolveHealpix_h

#include "healpix_cxx/healpix_map.h"
#include "Likelihood/MeanPsf.h"

namespace Likelihood {

  namespace ConvolveHealpix {
    
    void fillMapWithPSF_pole(const MeanPsf & psf, 
			     const double& energy, 
			     Healpix_Map<float>& outMap);
    
    void fillMapWithPSF_refDir(const MeanPsf& psf, 
			       const double& energy, 			       
			       const astro::SkyDir& refDir,
			       bool use_lb,
			       Healpix_Map<float>& outMap);

    void convolve(const Healpix_Map<float>& inMap,
		  const Healpix_Map<float>& psf,
		  Healpix_Map<float>& outMap);

    double psfMinPixSize(double energy);
    
  };

} // namespace Likelihood

#endif // Likelihood_ConvolveHealpix_h
