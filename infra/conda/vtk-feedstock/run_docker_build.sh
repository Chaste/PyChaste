#!/usr/bin/env bash

set -xeo pipefail

export RECIPE_ROOT="$( cd "$( dirname "$0" )" >/dev/null && pwd )"
export RECIPE_NAME=$(basename ${RECIPE_ROOT})

docker info

export HOST_USER_ID=$(id -u)

export ARTIFACTS="${RECIPE_ROOT}/build_artifacts"
mkdir -p "$ARTIFACTS"

export UPLOAD_PACKAGES="${UPLOAD_PACKAGES:-False}"

docker pull "${DOCKER_IMAGE}"
docker run --rm -it --cpus="${CPU_COUNT}" \
           -v "${RECIPE_ROOT}":/home/conda/recipe_root:rw,z,delegated \
           -e CONFIG \
           -e UPLOAD_PACKAGES \
           -e BUILD_WITH_CONDA_DEBUG \
           -e CPU_COUNT \
           -e RECIPE_NAME \
           -e HOST_USER_ID \
           "${DOCKER_IMAGE}" \
           bash \
           "/home/conda/recipe_root/build_steps.sh"
