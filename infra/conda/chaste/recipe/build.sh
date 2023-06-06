#!/bin/bash

set -ex

BUILD_CONFIG=Release

# Ignore PETSc MPICH version warning (4.1.* installed but expected 4.0.*)
cd ${PREFIX}/include
patch -t -p1 < ${RECIPE_ROOT}/patches/petsc.patch

# Modify pip environment for chaste_codegen
export PIP_NO_DEPENDENCIES="False"
export PIP_NO_INDEX="False"

cd ${SRC_DIR}
mkdir build
cd build || exit

cmake .. \
    -DCMAKE_BUILD_TYPE=RELEASE \
    -DPYTHON_EXECUTABLE:FILEPATH=${PYTHON} \
    -DCMAKE_LIBRARY_PATH=${PREFIX}/lib \
    -DCMAKE_PREFIX_PATH=${PREFIX} \
    -DHDF5_C_COMPILER_EXECUTABLE:FILEPATH=${PREFIX}/bin/h5pcc \
    -DBUILD_SHARED_LIBS:BOOL=ON \
    -DCMAKE_INSTALL_PREFIX=${PREFIX} \
    -DBOOST_ROOT=${PREFIX} \
    -DVTK_DIR=${PREFIX} \
    -DXERCESC_LIBRARY=${PREFIX}/lib/libxerces-c.so \
    -DXERCESC_INCLUDE=${PREFIX}/include \
    -DXSD_EXECUTABLE=${PREFIX}/bin/xsd \
    -DChaste_ENABLE_TESTING=ON \
    -DChaste_UPDATE_PROVENANCE=OFF \
    -DChaste_ENABLE_heart_TESTING=OFF \
    -DChaste_ENABLE_lung_TESTING=OFF \
    -DChaste_ENABLE_crypt_TESTING=OFF \
    -DChaste_ENABLE_global_TESTING=OFF \
    -DChaste_ENABLE_linalg_TESTING=OFF \
    -DChaste_ENABLE_io_TESTING=OFF \
    -DChaste_ENABLE_mesh_TESTING=OFF \
    -DChaste_ENABLE_ode_TESTING=OFF \
    -DChaste_ENABLE_pde_TESTING=OFF \
    -DChaste_ENABLE_cell_based_TESTING=OFF \
    -DChaste_ENABLE_continuum_mechanics_TESTING=OFF \
    -DChaste_ENABLE_project_PyChaste_TESTING=OFF \
    -DChaste_ERROR_ON_WARNING=OFF

# Revert pip environment settings
export PIP_NO_DEPENDENCIES="True"
export PIP_NO_INDEX="True"

make chaste_project_PyChaste -j${CPU_COUNT}
make project_PyChaste_Python -j${CPU_COUNT}
make install

cd projects/PyChaste/python
${PYTHON} -m pip install . --prefix=${PREFIX}

# Cleanup
cd ${PREFIX}/build
rm -rf cell_based/CMakeFiles
rm -rf global/CMakeFiles
rm -rf io/CMakeFiles
rm -rf linalg/CMakeFiles
rm -rf mesh/CMakeFiles
rm -rf ode/CMakeFiles
rm -rf pde/CMakeFiles
rm -rf python
rm -rf projects/PyChaste/CMakeFiles
rm -rf projects/PyChaste/python

# The egg-info file is necessary because some packages,
# need pkg_resources to be able to find chaste.
# See https://setuptools.readthedocs.io/en/latest/pkg_resources.html#workingset-objects

cat > $SP_DIR/chaste-$PKG_VERSION.egg-info <<FAKE_EGG
Metadata-Version: 2.1
Name: chaste
Version: $PKG_VERSION
Summary: Chaste is a general purpose simulation package for computational biology.
Platform: UNKNOWN
FAKE_EGG
