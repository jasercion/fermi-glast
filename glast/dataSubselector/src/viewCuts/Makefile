HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = gtvcut

HD_CXXTASK_SRC_cxx      = viewCuts.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS}

HD_CXXLIBS              = ${HD_LFLAGS} \
                          ${GT_DATASUBSELECTOR_LIBS} \
                          ${GT_EVTBIN_LIBS} \
                          -lirfUtil \
                          ${GT_STD_CXXLIBS} \
			  -lwcs-5.16 \
			  -lhealpix_cxx -lc_utils -lcxxsupport -lfftpack -lsharp -lgomp

HD_INSTALL_TASKS        = ${HD_CXXTASK}

HD_INSTALL_HELP         = gtvcut.txt

include ${HD_STD_MAKEFILE}
