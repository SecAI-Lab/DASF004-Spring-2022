#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 2
#define NUM_COLS 5 


int main() {

  int a[NUM_ROWS][NUM_COLS] = { {1,2,3,4,5}, {6,7,8,9,10}};
  int i, j;

  // This example shows how a pointer can be interpreted
  // in a two dimensional array

  for (i = 0; i < NUM_ROWS; i++) {
     for (j = 0; j < NUM_COLS; j++) {
         printf("a[%d][%d] = %d\t", i, j, a[i][j]);
         printf("*(*(a + %d) + %d) = %d\n", i, j, *(*(a+i) + j));
     }
  }

  return 0;
}
