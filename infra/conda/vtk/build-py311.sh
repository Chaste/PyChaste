#!/usr/bin/env bash

set -xeo pipefail

export CONFIG='linux_64_python3.11.____cpython'
export UPLOAD_PACKAGES='False'
export BUILD_WITH_CONDA_DEBUG='0'
export DOCKER_IMAGE='quay.io/condaforge/linux-anvil-cos7-x86_64'
export CPU_COUNT=4

.scripts/run_docker_build.sh
