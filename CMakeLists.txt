# Copyright (C) ei06125. All Rights Reserved.
cmake_minimum_required(VERSION 3.21)
project(
  CppTemplateProject
  VERSION 1.0.0
  LANGUAGES CXX
)

include(${PROJECT_SOURCE_DIR}/tools/cmake/Modules/BuildToolsMain.cmake)

# Surpress CTest Targets (Continuous, Experimental, Nightly)
set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)

# Surpress MSVC Target ZERO_CHECK
set(CMAKE_SUPPRESS_REGENERATION true)

log_info("Generating Global Settings INTERFACE target")
add_library(GlobalSettings INTERFACE)
target_compile_features(GlobalSettings INTERFACE cxx_std_20)
set_project_warnings(GlobalSettings)

add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(tests)
