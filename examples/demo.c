#include <stdio.h>
#include <stdlib.h>

#include "ctest.h"

CTEST_FUNCTION(test_1) {
    CTEST_ASSERT(1);
    CTEST_ASSERT(1);
}

CTEST_FUNCTION(test_2) {
    CTEST_ASSERT(1);
    CTEST_ASSERT(0);
}

/* Must define a call back function to log the test results */
void ctest_callback(const char *name, int line) {
    if (line < 0) {
        printf("CTEST : fail in %s line %d\n", name, -line);
        exit(EXIT_FAILURE);
    } else {
        printf("CTEST : pass in %s line %d\n", name, line);
    }
}

/* Process that runs the tests */
int main(int argc, char *argv[]) {
    CTEST_RUN(test_1);
    CTEST_RUN(test_2);

    return EXIT_SUCCESS;
}
