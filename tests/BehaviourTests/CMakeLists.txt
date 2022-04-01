# Copyright (C) ei06125. All Rights Reserved.

# =============================================================================
file(GLOB_RECURSE behaviourTests_SOURCES "*.cpp")
add_executable(behaviourTests)
target_sources(behaviourTests PRIVATE ${behaviourTests_SOURCES})
target_link_libraries(behaviourTests PRIVATE GlobalSettings gtest)
