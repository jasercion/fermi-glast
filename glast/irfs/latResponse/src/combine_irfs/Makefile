HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = combine_irfs

HD_CXXTASK_SRC_cxx      = combine_irfs.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS}

HD_CXXLIBS              = ${HD_LFLAGS} -L${HC_BLD_EXEC_PFX}/lib -l${HOOPS} -l${PIL} -l${PYTHON} -l${CLHEP} -lfacilities -lastro -lst_stream -lst_graph -lst_facilities -lst_app -ltip -lwcs -lhealpix_cxx -lc_utils -lcxxsupport -lfftpack -lsharp -lgomp -lcfitsio

HD_INSTALL_TASKS        = ${HD_CXXTASK}

include ${HD_STD_MAKEFILE}
