# docker build -t pychaste .
# docker run -it --init --rm -p 8888:8888 pychaste

FROM mambaorg/micromamba:2.8.1-ubuntu24.04

ARG CHASTE_VERSION=2026.1
ARG JUPYTERLAB_VERSION=4.*
ARG IMAGE_VERSION=unspecified
ARG IMAGE_REVISION=unspecified

LABEL maintainer="Kwabena Amponsah <kwabenantim@gmail.com>" \
    author.orcid="https://orcid.org/0000-0002-7506-9040" \
    org.opencontainers.image.authors="Kwabena Amponsah" \
    org.opencontainers.image.url="https://github.com/Chaste/PyChaste" \
    org.opencontainers.image.source="https://github.com/Chaste/PyChaste" \
    org.opencontainers.image.licenses="3-Clause BSD" \
    org.opencontainers.image.title="PyChaste Docker Image" \
    org.opencontainers.image.description="PyChaste: Python Bindings for Chaste" \
    org.opencontainers.image.documentation="https://chaste.github.io/pychaste/" \
    org.opencontainers.image.version="${IMAGE_VERSION}" \
    org.opencontainers.image.revision="${IMAGE_REVISION}"

USER root
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        curl \
        libgl1 \
        libxt6 \
        xvfb && \
    apt-get -y clean && \
    rm -rf /var/cache/apt && \
    rm -rf /var/lib/apt/lists/* && \
    rm -rf /var/tmp/* && \
    rm -rf /tmp/*

ENV ENV_NAME=pychaste-env
USER $MAMBA_USER
RUN micromamba create -y -n $ENV_NAME -c pychaste -c conda-forge \
        python=3.12 \
        "chaste=${CHASTE_VERSION}" \
        "jupyterlab=${JUPYTERLAB_VERSION}" && \
    micromamba clean --all --yes && \
    rm -rf $HOME/micromamba/pkgs/* && \
    rm -rf /opt/conda/pkgs/*

WORKDIR /home/$MAMBA_USER/work
EXPOSE 8888
HEALTHCHECK --interval=30s --timeout=5s --start-period=30s \
    CMD curl -f http://localhost:8888/api || exit 1

CMD xvfb-run --server-args="-screen 0 1024x768x24" jupyter lab --port=8888 --no-browser --ip=0.0.0.0
