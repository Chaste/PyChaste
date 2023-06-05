#!/usr/bin/env bash

set -xeuo pipefail
export PYTHONUNBUFFERED=1

export RECIPE_ROOT='/home/conda/recipe_root'
export CONFIG_FILE="${RECIPE_ROOT}/${CONFIG}.yaml"
export CONDA_BLD_PATH=${RECIPE_ROOT}/build_artifacts

cat > ~/.condarc <<CONDARC
conda-build:
  root-dir: ${RECIPE_ROOT}/build_artifacts
pkgs_dirs:
  - ${RECIPE_ROOT}/build_artifacts/pkg_cache
  - /opt/conda/pkgs
CONDARC

mamba install --update-specs --yes --quiet --channel conda-forge \
    conda-build pip boa liblief=0.11.5 conda-forge-ci-setup=3
mamba update --update-specs --yes --quiet --channel conda-forge \
    conda-build pip boa liblief=0.11.5 conda-forge-ci-setup=3

conda config --add channels conda-forge
conda config --env --set show_channel_urls true
conda config --env --set auto_update_conda false
conda config --env --set add_pip_as_python_dependency false
conda config --env --append aggressive_update_packages ca-certificates
conda config --env --remove-key aggressive_update_packages
conda config --env --append aggressive_update_packages ca-certificates
conda config --env --append aggressive_update_packages certifi
conda config --env --set channel_priority strict

cat ${CONFIG_FILE}

mkdir -p "${CONDA_PREFIX}/etc/conda/activate.d"

cat > ${CONDA_PREFIX}/etc/conda/activate.d/conda-forge-ci-setup-activate.sh <<CONDAACTIVATE
export CONDA_BLD_PATH='${RECIPE_ROOT}/build_artifacts'
export CPU_COUNT='${CPU_COUNT:-}'
export PYTHONUNBUFFERED='1'
CONDAACTIVATE

conda info
conda config --env --show-sources
conda list --show-channel-urls

/usr/bin/sudo -n yum install -y libXt-devel mesa-libGLU-devel

if [[ "${BUILD_WITH_CONDA_DEBUG:-0}" == 1 ]]; then
    conda debug "${RECIPE_ROOT}" -m "${CONFIG_FILE}"

    /bin/bash
else
    conda mambabuild "${RECIPE_ROOT}" -m "${CONFIG_FILE}"

    # if [[ "${UPLOAD_PACKAGES}" != 'False' ]]; then
    #   anaconda -q --show-traceback -t ${anaconda_token} upload \
    #   -u 'pychaste' \
    #   ${RECIPE_ROOT}/build_artifacts/linux-64/${CONFIG}.conda
    # fi
fi

touch "${RECIPE_ROOT}/build_artifacts/conda-forge-build-done-${CONFIG}"
