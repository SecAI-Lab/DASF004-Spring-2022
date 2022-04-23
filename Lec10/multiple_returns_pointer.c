#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_array(int array[], int n)
{
  srand(0);
  //srand(time(0));
  for (int i = 0; i < n; i++)
    array[i] = rand() % 1000;
}

void print_array(int array[], int n)
{
  printf("print_array\n");
  for(int i=0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
  return;
}

void min_max(int number[], int size, int* min, int* max)
{
  *min = number[0], *max = number[0];
  for(int* p = &number[0]; p < number+size; p++) {
    if(*p < *min)
      *min = *p;
    if(*p > *max)
      *max = *p;
  }
}

int main()
{
  int num[10];
  init_array(num, 10);
  print_array(num, 10);

  int min, max;

  // Passing the addresses of two values
  //   for storing a min and a max
  // At the point of returning the min_max() function,
  //   min/max variables hold the min/max values
  min_max(num, 10, &min, &max);

  printf("min: %d, max: %d\n", min, max);
}
