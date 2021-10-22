#!/usr/bin/env

xhost +local:root
docker run -it --rm -v /tmp/.X11-unix:/tmp/.X11-unix -v `pwd`:/level06 -e "DISPLAY=unix${DISPLAY}" blacktop/ghidra
xhost -local:root
