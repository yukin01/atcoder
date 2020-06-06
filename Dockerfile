FROM ubuntu:focal

RUN apt update && apt -y install \
  git \
  build-essential \
  libboost-dev
