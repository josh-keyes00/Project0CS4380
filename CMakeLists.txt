cmake_minimum_required(VERSION 3.10)
project(BaseTenToBaseTwo)

set(CMAKE_CXX_STANDARD 17)

add_executable(b10tob2 main.cpp myUtils.cpp)

enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(runTests myTests.cpp myUtils.cpp)
target_link_libraries(runTests gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
