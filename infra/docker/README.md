# How to build the docker image
The `pychaste` docker image is on the channel `chaste` on Docker Hub. This directory contains the Dockerfile for building the image. The guidance below assumes that [Docker](https://www.docker.com) has been installed. Docker commands may need to be prefixed with `sudo` depending on how Docker is set up on your system.

The image can be built by running:

```bash
docker build -t pychaste .
```

## Working with the local image

```bash
docker run -it --init --rm -p 8888:8888 pychaste
```

Then go to [http://127.0.0.1:8888](http://127.0.0.1:8888) in a web browser.

## Uploading the image
If you are happy with the package it can be tagged and uploaded to Docker Hub.
To find the image id, run:

```bash
docker images
```

To tag the image with the `latest` tag and upload it to Docker Hub:

```bash
docker tag <image_id> chaste/pychaste:latest
docker login
docker push chaste/pychaste:latest
```
