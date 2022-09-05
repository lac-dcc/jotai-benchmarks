Jotai
-----
-----
A C benchmark generator

- [Building the project](#building-the-project)
  - [What you need](#what-you-need)
  - [A note on building Clang](#a-note-on-building-clang)
  - [Building Jotai](#building-jotai)
- [Running Jotai](#running-jotai)
  - [Kotai](#kotai)
- [(Alternative) Using a Docker Image with Clang](#alternative-using-a-docker-image-with-clang)
  - [What you need](#what-you-need-1)
  - [Step by Step](#step-by-step)
- [What is Jotai?](#what-is-jotai)
- [Why is Jotai?](#why-is-jotai)


# Building the project
## What you need

- Clang (You need to built it yourself, can't use precompiled binaries!)
- CMake

## A note on building Clang
To use Jotai, you need to have [Clang](https://clang.llvm.org/) built on your machine. We used Clang version 12 when writing Jotai. If you haven't yet built Clang, I'd suggest taking a look at this 
[playlist](https://www.youtube.com/watch?v=HecW5byOrUY&list=PLDSTpI7ZVmVnvqtebWnnI8YeB8bJoGOyv).
It's a series of videos on the LLVM and Clang, and writing passes and plugins using their
libraries, and it has a tutorial on how to build Clang. Building Clang for the first time can be quite a frustrating experience, but once you get though it, you should be good to go :)


## Building Jotai
From project root:
```shell
mkdir build
cd build
cmake ../ -DLLVM_DIR=${LLVM_BUILD_DIR}/lib/cmake/llvm -DClang_DIR=${LLVM_BUILD_DIR}/lib/cmake/clang
make
```
# Running Jotai
## Kotai
Once you have built jotai, you'll need to set up kotai. kotai is the script responsible for calling jotai commands and setting up the final benchmarks. The instructions on how to run kotai are described here: [kotai](../kotai/README.md)


# (Alternative) Using a Docker Image with Clang
Building the LLVM project yourself might be a bit troublesome, and take some time. An alternative is using a [Docker](https://www.docker.com/resources/what-container) image that already has the LLVM project compiled inside it. 

Note that this is different from using pre built binaries: the project is actually compiled in the operating system you get from the image, so you have access to all the libraries you get when you build LLVM!

Note that, if you are using Linux, you might need root access whenever you run a docker command! Just add "sudo" before every docker command listed below.

## What you need
- TODO

## Step by Step
- TODO

# What is Jotai?
Jotai is a benchmark generator for the C programming language. What this means
is that Jotai takes a function written in C, and creates a runnable program that
instanciates the parameters of the function, and calls it with them.

# Why is Jotai?
Having lots of runnable benchmarks can help us, for instance, in testing compiler
optimizations, or training compilers, a task which requires large codebases.

We are currently using the codebase available in the [Angha Project](http://cuda.dcc.ufmg.br/angha/home), which consists of over 1 million compilable C programs. We are looking into
sets of functions called "leaf functions", which means they do not call other functions. 
