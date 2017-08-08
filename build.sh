cd BUILD_DIR
export CFLAGS='-I${PREFIX}/include -O2 -Wall --pedantic -Wno-comment -Wno-long-long -g  -ffloat-store -fPIC'
export CXXFLAGS='-I${PREFIX}/include -O2 -Wall --pedantic -Wno-comment -Wno-long-long -g  -ffloat-store -fPIC'
export CPPFLAGS="-I${PREFIX}/include"
export LDFLAGS="-L${PREFIX}/lib"
export PYTHON="python2.7"
export PYTHON_DIR="-I${PREFIX}/include/${PYTHON}"
export PYTHON_INC="-I${PREFIX}/include/${PYTHON}"
export CLHEP="CLHEP"
export CPPUNIT="cppunit"
export FFTW="fftw3"
export XERCES="xerces-c"
./configure --prefix=${PREFIX} --exec_prefix=${PREFIX} \
    LDFLAGS="-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib"
./hmake EXT_BLD_EXEC_PFX=${PREFIX} \
    HD_EXEC_PFX=${PREFIX} \
    HD_TOP_EXEC_PFX=${PREFIX} \
    CLHEP=${CLHEP} \
    CPPUNIT=${CPPUNIT} \
    FFTW=${FFTW} \
    XERCES=${XERCES} \
    PYTHON_INC="-I${PREFIX}/include/${PYTHON}"

./hmake install HD_EXEC_PFX=${PREFIX} HD_TOP_EXEC_PFX=${PREFIX}
