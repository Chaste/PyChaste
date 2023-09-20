FROM jupyter/scipy-notebook

RUN mamba install -c pychaste -c conda-forge -c bioconda chaste

# # Python 3.10 is currently required
# RUN mamba create -n pychaste_env -c pychaste -c conda-forge -c bioconda chaste
# RUN conda activate pychaste_env
