# Copyright (C) ei06125. All Rights Reserved.

# =============================================================================
add_executable(benchmarkTests)
file(GLOB_RECURSE benchmarkTests_SOURCES "*.cpp")
target_sources(benchmarkTests PRIVATE ${benchmarkTests_SOURCES})
target_link_libraries(benchmarkTests PRIVATE benchmark::benchmark)
