#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


int main()
{
  srand(time(0));
  
  int min = INT_MAX;
  int num[10] = { };

  for (int i = 0; i < 10; i++) {
    num[i] = rand() % 1000;
  }

  for (int i = 0; i < 10 ; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");

  return 0;
}
