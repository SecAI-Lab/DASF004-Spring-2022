#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 5
#define NUM_COLS 9 

void init_array(int array[][NUM_COLS])
{
  srand(0);
  srand(time(0));
  int *p;
  for (p = &array[0][0]; p <= &array[NUM_ROWS-1][NUM_COLS-1]; p++)
    *p = rand() % 1000;
}


void print_array(int array[][NUM_COLS])
{
  for (int row = 0; row < NUM_ROWS; row++) {
    for (int col = 0; col < NUM_COLS; col++)
      printf("%4d ", array[row][col]);
    printf("\n");
  }
  printf("\n");
  return;
}

void clear_jth_col(int array[][NUM_COLS], int j)
{
  for (int* p = array[0]; p < array[NUM_ROWS]; p+= NUM_COLS)
    *(p+j) = 0;

  //for (int* p = &array[0][j]; p < array[NUM_ROWS]; p+= NUM_COLS)
  //  *p = 0;
  //for (int *p = array[0], i=0; i<NUM_ROWS; i++)
  //  *(p+NUM_COLS*i+j) = 0;
  return;
}


int main()
{
  int a[NUM_ROWS][NUM_COLS] = {};

  init_array(a);
  print_array(a);
  clear_jth_col(a, 3);
  print_array(a);

  return 0;
}
