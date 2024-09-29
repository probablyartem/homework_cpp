cmake_minimum_required(VERSION 3.14)
project(homework_project)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable(main main.cpp my_add.cpp)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)


FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.7.1  
)
FetchContent_MakeAvailable(googlebenchmark)

find_package(Threads REQUIRED)

add_executable(my_bench benchmark.cpp my_add.cpp)
target_link_libraries(my_bench benchmark Threads::Threads)

enable_testing()
add_executable(tests test_add.cpp my_add.cpp)
target_link_libraries(tests gtest_main)

# include(GoogleTest)
# gtest_discover_tests(tests)
