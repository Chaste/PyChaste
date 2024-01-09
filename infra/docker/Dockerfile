FROM mambaorg/micromamba:1.5-jammy

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
