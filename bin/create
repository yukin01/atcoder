#!/bin/bash
set -eu

if [ $# -ne 1 ]; then
  echo "[Error] Input contest name"
  exit 1
fi

for i in a b c d; do
  mkdir -p $1/$i
  touch $1/$i/Main.cpp
  touch $1/$i/1.txt
  touch $1/$i/2.txt
  touch $1/$i/3.txt
done
