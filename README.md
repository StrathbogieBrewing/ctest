# ctest
A very light weight test framework in a single header file. Suitable for embedded systems with limited resources such as AVR, PIC etc.

## Example

An example of how to use ctest is given in ctest_test.c. A CMake file is provided to build the example.

When ctest is disabled none of the test code will reach the compiled binary.

To include the test functions in the build CTEST_ENABLED must be defined before including the ctest header file.

## Customisation

The callback function `ctest_callback` needs to be defined by the user and can exploit the most appropriate output the system has available. On an embedded system it could be as simple as turning on an LED on if there is a failure in the test suites.