HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_CXXTASK              = alignment

HD_CXXTASK_SRC_cxx      = alignment_main.cxx

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS} -fpermissive

HD_CXXLIBS              = ${HD_LFLAGS} \
			  -lmicroQuasar \
			  ${GT_CPPUNIT_LIBS} \
			  -lgenericSources \
			  ${GT_ROOT_SOURCE_LIBS} \
			  ${GT_FLUX_LIBS} \
			  -leblAtten \
			  -lirfUtil \
			  -llatResponse \
			  -lirfLoader \
			  -ldc1aResponse \
			  ${GT_LATRESPONSE_LIBS} \
			  -lirfInterface \
			  -lfftw3 \
			  -ltestResponse \
			  ${GT_GGTW_LIBS} \
			  ${GT_XERCES_LIBS} \
			  ${GT_IRFUTIL_LIBS} \
			  ${GT_LIKELIHOOD_LIBS} \
			  ${GT_XMLBASE_LIBS} \
			  ${GT_EMBED_PYTHON_LIBS} \
			  ${GT_TIMESYSTEM_LIBS} \
			  ${GT_SKYMAPS_LIBS} \
                          ${GT_LIKELIHOOD_LIBS} \
			  ${GT_MAP_TOOLS_LIBS} \
                          ${GT_DATASUBSELECTOR_LIBS} \
                          ${GT_EVTBIN_LIBS} \
                          ${GT_OPT_LIBS} \
                          ${GT_HEALPIX_LIBS} \
                          ${GT_MAP_TOOLS_LIBS} \
                          ${GT_STD_CXXLIBS} \
			  ${GT_CELESTIALSOURCES_LIBS} \
			  -lpointlike



HD_INSTALL_TASKS	= ${HD_CXXTASK}

include ${HD_STD_MAKEFILE}
