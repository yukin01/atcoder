FROM ubuntu:jammy

RUN apt update && apt -y install \
  git \
  build-essential \
  gdb \
  libboost-dev
