#New Usage
# mkdir build
# cd build
# cmake ../ -DLLVM_DIR=${LLVM_BUILD_DIR}/lib/cmake/llvm -DClang_DIR=${LLVM_BUILD_DIR}/lib/cmake/clang
# make

cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD "20")
project(Jotai)

set(CMAKE_BUILD_TYPE RelWithDebInfo)
find_package(Clang REQUIRED)
include_directories(${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
add_subdirectory(lib)
