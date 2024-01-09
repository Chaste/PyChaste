# How to build the docker image

The `pychaste` docker image is on the channel `chaste` on the Docker Hub. This directory contains the Dockerfile for building the image. Assuming [Docker](https://www.docker.com) is set up, it can be built by running:

```bash
[sudo] docker build -t pychaste .
```

If you are happy with the package it can be tagged and uploaded to Docker Hub.
To find the image id, run:

```bash
[sudo] docker images
```

To tag the image with the `latest` tag and upload it to Docker Hub:

```bash
[sudo] docker tag <image_id> chaste/pychaste:latest
docker login
docker push chaste/pychaste:latest
```

## Working with the local image

```bash
[sudo] docker run --init -it -p 8888:8888 pychaste
```

Then go to [http://127.0.0.1:8888](http://127.0.0.1:8888) in a web browser.

