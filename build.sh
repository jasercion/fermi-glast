cd BUILD_DIR
export CFLAGS='-I${PREFIX}/include -O2 -Wall --pedantic -Wno-comment -Wno-long-long -g  -ffloat-store -fPIC'
export CXXFLAGS='-I${PREFIX}/include -O2 -Wall --pedantic -Wno-comment -Wno-long-long -g  -ffloat-store -fPIC'
export CPPFLAGS="-I${PREFIX}/include"
export LDFLAGS="-L${PREFIX}/lib"
export PYTHON="python2.7"
export PYTHON_DIR="${PREFIX}/include/${PYTHON}"
./configure --prefix=${PREFIX} --exec_prefix=${PREFIX} LDFLAGS="-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib"
./hmake EXT_BLD_EXEC_PFX=${PREFIX} HD_EXEC_PFX=${PREFIX} HD_TOP_EXEC_PFX=${PREFIX}
./hmake install HD_EXEC_PFX=${PREFIX} HD_TOP_EXEC_PFX=${PREFIX}
