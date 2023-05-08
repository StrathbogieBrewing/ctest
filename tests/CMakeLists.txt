cmake_minimum_required(VERSION 3.18)

project(ctest_test)

add_compile_options( -DCTEST_ENABLED)

include_directories(ctest_test ../include/ctest)
add_executable(ctest_test ctest_test.c)

# enable_testing()
# add_test(NAME ctest_test COMMAND ctest_test)
