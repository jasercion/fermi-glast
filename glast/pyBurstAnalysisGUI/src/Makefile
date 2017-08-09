HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       = 

HD_CXXTASK              = gtburst

HD_CXXTASK_SRC_cxx      = gtburst.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS}

HD_CXXLIBS              = ${HD_LFLAGS} \
                          ${GT_STD_CXXLIBS} \
                          ${GT_OPT_LIBS} \
                          ${GT_XML_LIBS} \
			  -lwcs-5.16 -lgsl -lgslcblas -lhealpix_cxx -lc_utils -lcxxsupport -lfftpack -lsharp -lgomp

HD_INSTALL_HELP         = 

HD_INSTALL_TASKS        = ${HD_CXXTASK}

include ${HD_STD_MAKEFILE}
