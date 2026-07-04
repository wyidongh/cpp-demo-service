cmake_minimum_required(VERSION 3.16)
project(cpp_demo_service)

set(CMAKE_CXX_STANDARD 17)

# ========== 新增：Coverage 支持 ==========
option(CODE_COVERAGE "Enable coverage" ON)

if(CODE_COVERAGE)
    add_compile_options(--coverage)
    add_link_options(--coverage)
endif()
# ========================================

add_executable(app
    main.cpp
)

enable_testing()

add_subdirectory(tests)
