#!/usr/bin/env bash

set -xeo pipefail

export CONFIG='linux_64_python3.10.____cpython'
export CHASTE_GIT_BRANCH='develop'
export PYCHASTE_GIT_BRANCH='develop'
export BUILD_WITH_CONDA_DEBUG='0'
export DOCKER_IMAGE='quay.io/condaforge/linux-anvil-cos7-x86_64'
export CPU_COUNT=2

.scripts/run_docker_build.sh
