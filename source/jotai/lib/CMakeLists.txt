find_package(Clang REQUIRED)
include_directories(${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_subdirectory(lexical)
add_subdirectory(syntatic)
add_subdirectory(semantic)

add_executable(Jotai Jotai.cpp)
add_library(PrintDescriptors SHARED PrintDescriptors.cpp)
add_library(ParseDescriptors SHARED ParseDescriptors.cpp)
add_library(Utils SHARED Utils.cpp)

target_link_libraries(Jotai Utils)
target_link_libraries(Jotai LexicalAnalysis SyntaticAnalysis SymbolTable)
target_link_libraries(Jotai Constraint BaseVar ParseDescriptors)
target_link_libraries(ParseDescriptors BaseVar PointerVar StructVar)
target_link_libraries(ParseDescriptors RecursiveStructVar)

# set_target_properties(Jotai PROPERTIES
#     LINKER_LANGUAGE CXX COMPILE_FLAGS "-fno-rtti")
set_target_properties(PrintDescriptors PROPERTIES
    LINKER_LANGUAGE CXX COMPILE_FLAGS "-fno-rtti")