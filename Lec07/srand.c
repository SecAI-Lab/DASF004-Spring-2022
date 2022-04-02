#include <stdio.h>             
#include <stdlib.h>
#include <time.h>

int main() { 
    // A seed value would be different at every run
    srand(time(NULL));

    // Random number generation
    for (int i = 0; i < 20; i++)
        printf("%d ", 1 + rand() % 6);
    printf("\n");

    return 0;
}

