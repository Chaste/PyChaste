# docker build -t pychaste .
# docker run -it --init --rm -p 8888:8888 pychaste

FROM mambaorg/micromamba:1.5-jammy
LABEL maintainer="Kwabena N. Amponsah <kwabenantim@gmail.com>" \
    author.orcid="https://orcid.org/0000-0002-7506-9040" \
    org.opencontainers.image.authors="Kwabena N. Amponsah" \
    org.opencontainers.image.url="https://github.com/Chaste/PyChaste" \
    org.opencontainers.image.licenses="3-Clause BSD" \
    org.opencontainers.image.title="PyChaste Docker Image" \
    org.opencontainers.image.description="PyChaste: Python Bindings for Chaste" \
    org.opencontainers.image.documentation="https://chaste.github.io/pychaste/"

USER root
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        libgl1-mesa-dev \
        libxt-dev \
        xvfb && \
    apt-get -y clean && \
    rm -rf /var/cache/apt && \
    rm -rf /var/lib/apt/lists/* && \
    rm -rf /var/tmp/* && \
    rm -rf /tmp/*

USER $MAMBA_USER
RUN micromamba install -y -n base -c pychaste -c conda-forge -c bioconda chaste boost-cpp=1.74 jupyterlab && \
    micromamba clean --all --yes && \
    rm -rf $HOME/micromamba/pkgs/* && \
    rm -rf /opt/conda/pkgs/*

CMD xvfb-run --server-args="-screen 0 1024x768x24" jupyter lab --port=8888 --no-browser --ip=0.0.0.0
