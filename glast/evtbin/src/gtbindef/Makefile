HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = gtbindef

HD_CXXTASK_SRC_cxx      = gtbindef.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS}

HD_CXXLIBS              = ${HD_LFLAGS} \
                          ${GT_EVTBIN_LIBS} \
                          ${GT_STD_CXXLIBS} \
			  -lwcs \
			  -lhealpix_cxx -lc_utils -lcxxsupport -lfftpack -lsharp -lgomp

HD_INSTALL_TASKS        = ${HD_CXXTASK}

HD_INSTALL_HELP         = gtbindef.txt

include ${HD_STD_MAKEFILE}
