#!/usr/bin/env bash

set -xeo pipefail

RECIPE_ROOT="$( cd "$( dirname "$0" )" >/dev/null && pwd )"

docker info

HOST_USER_ID=$(id -u)

ARTIFACTS="${RECIPE_ROOT}/build_artifacts"
mkdir -p "$ARTIFACTS"

UPLOAD_PACKAGES="${UPLOAD_PACKAGES:-False}"

docker pull "${DOCKER_IMAGE}"
docker run --rm -it \
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
