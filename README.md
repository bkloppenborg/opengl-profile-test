opengl-profile-test
================

A simple QT5 program that creates an OpenGL window and retreives the context

## Prerequisites

* OpenGL
* QT 5
* CMake
* A C/C++ compiler (e.g. gcc)

## Context version

Change the context you want by modifying the properties of `QSurfaceFormat`
found in `src/main.cpp`

## Building

```
cd build
cmake ..
make
```

## Running

After it is complied, the executable is `bin/profile-test`
