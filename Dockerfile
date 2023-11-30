FROM jupyter/scipy-notebook

RUN mamba install -c pychaste -c conda-forge -c bioconda chaste
