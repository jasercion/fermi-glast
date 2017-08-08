HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = pointfind

HD_CXXTASK_SRC_cxx      = finder_main.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS} -fpermissive

HD_CXXLIBS              = ${HD_LFLAGS} \
			  ${GT_POINTLIKE_LIBS} \
			  ${GT_SKYMAPS_LIBS} \
			  ${GT_HEALPIX_LIBS} \
			  ${GT_TIMESYSTEM_LIBS} \
                          ${GT_MAP_TOOLS_LIBS} \
                          ${GT_STD_CXXLIBS} \
			  ${GT_EMBED_PYTHON_LIBS}

HD_INSTALL_TASKS        = ${HD_CXXTASK}

include ${HD_STD_MAKEFILE}