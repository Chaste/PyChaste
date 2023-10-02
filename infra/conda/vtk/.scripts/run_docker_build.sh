#!/usr/bin/env bash

set -xeo pipefail

THISDIR="$( cd "$( dirname "$0" )" >/dev/null && pwd )"
PROVIDER_DIR="$(basename $THISDIR)"

FEEDSTOCK_ROOT="$( cd "$( dirname "$0" )/.." >/dev/null && pwd )"
RECIPE_ROOT="${FEEDSTOCK_ROOT}/recipe"

docker info

HOST_USER_ID=$(id -u)

ARTIFACTS="${FEEDSTOCK_ROOT}/build_artifacts"
mkdir -p "${ARTIFACTS}"

DONE_CANARY="${ARTIFACTS}/conda-forge-build-done-${CONFIG}"
rm -f "${DONE_CANARY}"

UPLOAD_PACKAGES="${UPLOAD_PACKAGES:-False}"

docker pull "${DOCKER_IMAGE}"
docker run --rm -it \
  -v "${RECIPE_ROOT}":/home/conda/recipe_root:rw,z,delegated \
  -v "${FEEDSTOCK_ROOT}":/home/conda/feedstock_root:rw,z,delegated \
  -e CONFIG \
  -e UPLOAD_PACKAGES \
  -e BUILD_WITH_CONDA_DEBUG \
  -e CPU_COUNT \
  -e RECIPE_NAME \
  -e HOST_USER_ID \
  "${DOCKER_IMAGE}" \
  bash \
  "/home/conda/feedstock_root/${PROVIDER_DIR}/build_steps.sh"

test -f "${DONE_CANARY}"
