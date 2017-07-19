HD_COMPONENT_NAME       = glast

HD_COMPONENT_VERS       =

HD_LIBRARY_ROOT         = skymaps

HD_LIBRARY_SRC_cxx      = Background.cxx \
			  BandBackground.cxx \
			  Band.cxx \
			  BinnedPhotonData.cxx \
			  ComplexSkySpectrum.cxx \
			  CompositeSkyFunction.cxx \
			  CompositeSkySpectrum.cxx \
			  Convolution.cxx \
			  DiffuseFunction.cxx \
			  EffectiveArea.cxx \
			  Exposure.cxx \
			  ExposureWeighter.cxx \
			  GtiBase.cxx \
			  Gti.cxx \
			  HealpixDiffuseFunc.cxx \
			  IParams.cxx \
			  IsotropicConstant.cxx \
			  IsotropicPowerLaw.cxx \
			  IsotropicSpectrum.cxx \
			  LivetimeCube.cxx \
			  PhotonBinner.cxx \
			  PhotonMap.cxx \
			  PsfFunction.cxx \
			  PsfSkyFunction.cxx \
			  PsfSkySpectrum.cxx \
			  PySkyFunction.cxx \
			  PySkySpectrum.cxx \
			  PythonPsf.cxx \
			  PythonUtilities.cxx \
			  SkyImage.cxx \
			  SkyImageSpectrum.cxx \
			  SkyIntegrator.cxx \
			  SkySpectrum.cxx \
			  SmoothedSkySpectrum.cxx \
			  SpectralFunction.cxx \
			  WeightedSkyDir.cxx \
			  swig_setup_wrap.cxx

HD_SUBDIRS              =

HD_CXXFLAGS             = ${HD_STD_CXXFLAGS} \
			  ${PYTHON_LIB} \
			  ${PYTHON_INC} \
			  ${GT_HEALPIX_LIBS} \
			  ${GT_TIMESYSTEM_LIBS} \

HD_INSTALL_LIBRARIES    = ${HD_LIBRARY_ROOT}

include ${HD_STD_MAKEFILE}

swig_setup_wrap.cxx: swig_setup.i
	@PATH=${EXT_BLD_EXEC_PFX}/bin:${EXT_BLD_EXEC_PFX}/lib:${HD_TOP_BIN}:${HD_TOP_LIB}:${PATH}; \
	LD_LIBRARY_PATH=${EXT_BLD_EXEC_PFX}/lib:${HD_TOP_LIB}:${LD_LIBRARY_PATH}; \
	DYLD_LIBRARY_PATH=${EXT_BLD_EXEC_PFX}/lib:${HD_TOP_LIB}:${DYLD_LIBRARY_PATH}; \
	ROOTSYS=${shell ${HD_BUILD_DIR}/hd_scanenv ${HD_SRC}/../external/BUILD_DIR/hmakerc HD_BLD_EXEC_PFX}; \
	export PATH; \
	export LD_LIBRARY_PATH; \
	export DYLD_LIBRARY_PATH; \
	export ROOTSYS; \
	SWIG_VERSION=${shell echo $${SWIG} | sed s/swig//}; \
	export SWIG_VERSION; \
	swig -python -c++ \
	-I${EXT_BLD_EXEC_PFX}/include \
	-I${HD_BLD_EXEC_PFX}/include \
	-I${EXT_BLD_EXEC_PFX}/share/swig/$${SWIG_VERSION}/python \
	-I${EXT_BLD_EXEC_PFX}/share/swig/$${SWIG_VERSION} -I.. \
	-interface libskymaps swig_setup.i