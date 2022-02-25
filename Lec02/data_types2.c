#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {

    // Although we have not learned a data type within a parenthesis,
    // we can see that it converts a type into another, which is called "Type Casting"
    // Float data type (check out how %f is different from %g format)
    printf("Float Size  : %ld \n", sizeof(float));
    printf("FLT_MAX     : %g\n", (float) FLT_MAX);
    printf("FLT_MIN     : %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    : %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    : %g\n", (float) -FLT_MIN);

    // Double data type (check out how %lf is different from %g format)
    printf("Double Size : %ld \n", sizeof(double));
    printf("DBL_MAX     : %g\n", (double) DBL_MAX);
    printf("DBL_MIN     : %g\n", (double) DBL_MIN);
    printf("-DBL_MAX    : %g\n", (double) -DBL_MAX);
    printf("-DBL_MIN    : %g\n", (double) -DBL_MIN);

    return 0;
}
