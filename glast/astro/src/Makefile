HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_LIBRARY_ROOT         = astro

HD_LIBRARY_SRC_cxx      = EarthCoordinate.cxx \
                          EarthOrbit.cxx \
                          Geomag.cxx \
                          GPS.cxx \
                          HTM.cxx \
                          IGRField.cxx \
                          IGRF_data.cxx \
                          JulianDate.cxx \
			  HealpixProj.cxx \
                          PointingHistory.cxx \
                          PointingInfo.cxx \
                          PointingTransform.cxx \
                          Quaternion.cxx \
                          SkyDir.cxx \
                          SkyProj.cxx \
                          SkyStat.cxx \
                          SolarSystem.cxx \
                          igrf_sub/igrf_sub.cxx \
                          jplephem/bary.cxx \
                          jplephem/dpleph.cxx

HD_CFLAGS               = ${HD_STD_CFLAGS}

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS} -L${HC_BLD_EXEC_PFX}/lib -lwcs -lhealpix_cxx -lc_utils -lcxxsupport -lfftpack -lsharp -lgomp -lcfitsio

HD_INSTALL_LIBRARIES    = ${HD_LIBRARY_ROOT}

HD_CLEAN                = ${HD_LIBRARY_SRC_c:.c=.o} \
                          ${HD_LIBRARY_SRC_cxx:.cxx=.o}

include ${HD_STD_MAKEFILE}
