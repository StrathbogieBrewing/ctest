# CTest
A very light weight test framework in a single header file. Suitable for embedded systems with limited resources such as AVR, PIC etc.

## Example

The example demo.c demonstrates how to use CTest. A CMake file is provided to build the example.

When CTest is disabled none of the test code will reach the compiled binary.

To include the test functions in the build CTEST_ENABLED must be defined before including the CTest header file.

## Customisation

The callback function `ctest_callback` needs to be defined by the user and can exploit the most appropriate output the system has available. On an embedded system it could be as simple as turning on an LED on if there is a failure in the test suites.