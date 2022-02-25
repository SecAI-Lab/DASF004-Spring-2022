/*
  We include a few more header files like limits.h
  that defines a constant such as CHAR_MAX, CHAR_MIN, etc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {

    // Print out MIN/MAX of different types
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);

    printf("SHORT_MAX   :   %d\n", SHRT_MAX);
    printf("SHORT_MIN   :   %d\n", SHRT_MIN);

    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);

    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);

    // Unsigned types
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("USHORT_MAX  :   %d\n", (unsigned short) USHRT_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);

    return 0;
}

