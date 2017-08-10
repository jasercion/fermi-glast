HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = gtirfs

HD_CXXTASK_SRC_cxx      = gtirfs.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS}

HD_CXXLIBS              = ${HD_LFLAGS} \
			  -lgsl \
			  -lgslcblas \
                          -lirfLoader \
                          -lirfInterface \
                          -llatResponse \
                          -ldc1aResponse \
                          -ltestResponse \
			  -lirfUtil \
			  ${GT_STD_CXXLIBS} \
			  -L${EXT_BLD_EXEC_PFX}/lib -lwcs -lhealpix_cxx -lc_utils -lcxxsupport -lfftpack -lsharp -lgomp -lcfitsio -lgsl -lgslcblas

HD_INSTALL_TASKS        = ${HD_CXXTASK}

HD_INSTALL_HELP         = gtirfs.txt

include ${HD_STD_MAKEFILE}
