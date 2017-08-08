HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = gtephem

HD_CXXTASK_SRC_cxx      = gtephem.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS}

HD_CXXLIBS              = ${HD_LFLAGS} \
                          ${GT_PULSARDB_LIBS} \
                          ${GT_TIMESYSTEM_LIBS} \
                          ${GT_STD_CXXLIBS} \
			  -lwcs-5.16 -lgsl -lgslcblas -lhealpix_cxx

HD_INSTALL_TASKS        = ${HD_CXXTASK}

HD_INSTALL_HELP         = gtephem.txt

include ${HD_STD_MAKEFILE}
