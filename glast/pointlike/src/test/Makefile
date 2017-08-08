HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_TEST_TASKS           = test_pointlike

HD_TEST_CXXTASK         = ${HD_TEST_TASKS}

HD_TEST_CXXTASK_SRC_cxx	= PhotonList.cxx \
			  test_main.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS} -fpermissive

HD_CXXLIBS              = ${HD_LFLAGS} \
			  ${GT_SKYMAPS_LIBS} \
			  ${GT_EMBED_PYTHON_LIBS} \
			  ${GT_TIMESYSTEM_LIBS} \
			  ${GT_POINTLIKE_LIBS} \
                          ${GT_MAP_TOOLS_LIBS} \
                          ${GT_HEALPIX_LIBS} \
                          ${GT_STD_CXXLIBS}

include ${HD_STD_MAKEFILE}
