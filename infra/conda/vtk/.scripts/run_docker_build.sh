#!/usr/bin/env bash

set -xeo pipefail

FEEDSTOCK_ROOT="$( cd "$( dirname "$0" )/.." >/dev/null && pwd )"
RECIPE_ROOT="${FEEDSTOCK_ROOT}/recipe"

cp "${FEEDSTOCK_ROOT}/LICENSE.txt" "${RECIPE_ROOT}/recipe-scripts-license.txt"

ARTIFACTS="${FEEDSTOCK_ROOT}/build_artifacts"
mkdir -p "${ARTIFACTS}"

DONE_CANARY="${ARTIFACTS}/conda-forge-build-done-${CONFIG}"
rm -f "${DONE_CANARY}"

docker info

DOCKER_IMAGE="${DOCKER_IMAGE:-quay.io/condaforge/linux-anvil-cos7-x86_64}"
docker pull "${DOCKER_IMAGE}"

export HOST_USER_ID=$(id -u)

docker run --rm -it \
  -v "${RECIPE_ROOT}":/home/conda/recipe_root:rw,z,delegated \
  -v "${FEEDSTOCK_ROOT}":/home/conda/feedstock_root:rw,z,delegated \
  -e CONFIG="${CONFIG}" \
  -e BUILD_WITH_CONDA_DEBUG="${BUILD_WITH_CONDA_DEBUG}" \
  -e CPU_COUNT="${CPU_COUNT}" \
  -e HOST_USER_ID="${HOST_USER_ID}" \
  "${DOCKER_IMAGE}" \
  bash "/home/conda/feedstock_root/.scripts/build_steps.sh"

test -f "${DONE_CANARY}"
