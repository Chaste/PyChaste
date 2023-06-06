#!/bin/bash

set -ex

BUILD_CONFIG=Release

mkdir build
cd build || exit

export CFLAGS="${CFLAGS} -isystem ${PREFIX}/lib/python${PY_VER}/site-packages/mpi4py/include"
export CXXFLAGS="${CXXFLAGS} -isystem ${PREFIX}/lib/python${PY_VER}/site-packages/mpi4py/include"

cmake .. \
    -Wno-dev \
    -DCMAKE_BUILD_TYPE=$BUILD_CONFIG \
    -DCMAKE_PREFIX_PATH:PATH="${PREFIX}" \
    -DCMAKE_INSTALL_PREFIX:PATH="${PREFIX}" \
    -DCMAKE_INSTALL_RPATH:PATH="${PREFIX}/lib" \
    -DBUILD_DOCUMENTATION:BOOL=OFF \
    -DBUILD_TESTING:BOOL=OFF \
    -DBUILD_EXAMPLES:BOOL=OFF \
    -DBUILD_SHARED_LIBS:BOOL=ON \
    -DVTK_ENABLE_VTKPYTHON:BOOL=OFF \
    -DVTK_WRAP_PYTHON:BOOL=ON \
    -DVTK_PYTHON_VERSION:STRING="${PY_VER}" \
    -DVTK_INSTALL_PYTHON_MODULE_DIR:PATH="${SP_DIR}" \
    -DVTK_HAS_FEENABLEEXCEPT:BOOL=OFF \
    -DVTK_RENDERING_BACKEND=OpenGL2 \
    -DModule_vtkRenderingMatplotlib=ON \
    -DVTK_USE_SYSTEM_ZLIB:BOOL=ON \
    -DVTK_USE_SYSTEM_FREETYPE:BOOL=ON \
    -DVTK_USE_SYSTEM_LIBXML2:BOOL=ON \
    -DVTK_USE_SYSTEM_PNG:BOOL=ON \
    -DVTK_USE_SYSTEM_JPEG:BOOL=ON \
    -DVTK_USE_SYSTEM_TIFF:BOOL=ON \
    -DVTK_USE_SYSTEM_EXPAT:BOOL=ON \
    -DVTK_USE_SYSTEM_HDF5:BOOL=ON \
    -DVTK_USE_SYSTEM_JSONCPP:BOOL=ON \
    -DVTK_USE_X:BOOL=ON \
    -DVTK_USE_CXX11_FEATURES=ON \
    -DVTK_Group_MPI=ON \
    -DMPIEXEC="${PREFIX}/bin/mpiexec"

make -j${CPU_COUNT}
make install

# The egg-info file is necessary because some packages,
# like mayavi, have a __requires__ in their __invtkRenderWindow::New()it__.py,
# which means pkg_resources needs to be able to find vtk.
# See https://setuptools.readthedocs.io/en/latest/pkg_resources.html#workingset-objects

cat > $SP_DIR/vtk-$PKG_VERSION.egg-info <<FAKE_EGG
Metadata-Version: 2.1
Name: vtk
Version: $PKG_VERSION
Summary: VTK is an open-source toolkit for 3D computer graphics, image processing, and visualization
Platform: UNKNOWN
FAKE_EGG
