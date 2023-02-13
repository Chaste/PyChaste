export PIP_NO_DEPENDENCIES="False"
export PIP_NO_INDEX="False"

export LIBRARY_PATH=${PREFIX}/lib
export INCLUDE_PATH=${PREFIX}/include

sed -i 's#/home/conda/feedstock_root/build_artifacts/vtk_.*_build_env/x86_64-conda_cos6-linux-gnu/sysroot/usr/lib.*;##g' ${PREFIX}/lib/cmake/vtk-8.2/Modules/vtkhdf5.cmake 
sed -i 's#/home/conda/feedstock_root/build_artifacts/vtk_.*_build_env/x86_64-conda_cos6-linux-gnu/sysroot/usr/lib.*;##g' ${PREFIX}/lib/cmake/vtk-8.2/VTKTargets-release.cmake 

sed -i "s#/usr/lib64/libXext\.so;#${PREFIX}/lib/libXext\.so;#g" ${PREFIX}/lib/cmake/vtk-8.2/VTKTargets-release.cmake
sed -i "s#/usr/lib64/libXext\.so;#${PREFIX}/lib/libXext\.so;#g" ${PREFIX}/lib/cmake/vtk-8.2/VTKTargets.cmake

mkdir ${PREFIX}/build
cd ${PREFIX}/build

echo "source: ${SRC_DIR}"

cmake \
    -DCMAKE_BUILD_TYPE=RELEASE \
    -DPYTHON_EXECUTABLE:FILEPATH=${PYTHON} \
    -DCMAKE_LIBRARY_PATH=${PREFIX}/lib \
    -DCMAKE_PREFIX_PATH=${PREFIX} \
    -DHDF5_C_COMPILER_EXECUTABLE:FILEPATH=${PREFIX}/bin/h5pcc \
    -DBUILD_SHARED_LIBS:BOOL=ON \
    -DBUILD_TESTING:BOOL=OFF \
    -DCMAKE_INSTALL_PREFIX=${PREFIX} \
    -DBOOST_ROOT=${PREFIX} \
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
    -DChaste_ERROR_ON_WARNING=OFF \
    -DVTK_DIR=${PREFIX} \
    -DXERCESC_LIBRARY=${LIBRARY_PATH}/libxerces-c.so \
    -DXERCESC_INCLUDE=${INCLUDE_PATH} \
    -DXSD_EXECUTABLE=${PREFIX}/bin/xsd \
    ${SRC_DIR}
    
make chaste_project_PyChaste -j ${CPU_COUNT}
make project_PyChaste_Python -j ${CPU_COUNT}
make install -j ${CPU_COUNT}

cd ${PREFIX}/build/projects/PyChaste/python
python setup.py install --prefix=${PREFIX}

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

export PIP_NO_DEPENDENCIES="True"
export PIP_NO_INDEX="True"
