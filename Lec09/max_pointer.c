#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

int* max_pointer(int *a, int *b)
{
  if (*a > *b)
    return a;
  else
    return b;
}

int main()
{
  srand(0);
  int num1 = rand() % 100, num2 = rand() % 100;
  printf("num1: %d\n", num1);
  printf("num2: %d\n", num2);
  printf("max: %d\n\n", max(num1, num2));

  int *max = max_pointer(&num1, &num2);
  int max_value = *max;
  *max = 0;
  printf("num1: %d\n", num1);
  printf("num2: %d\n", num2);
  printf("*max: %d\n", *max);
  printf("max_value: %d\n", max_value);

}

