find_package(Clang REQUIRED)
include_directories(${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(LoopDependencies LoopDependencies.cpp)

target_link_libraries(LoopDependencies clangTooling)

set_target_properties(LoopDependencies PROPERTIES
    LINKER_LANGUAGE CXX COMPILE_FLAGS "-fno-rtti")
