#include <stdio.h>
#define N 5

int main()
{
  
  int num[N] = {100, 200, 300, 400, 500};

  for (int i = 0; i < N; i++) {
    num[i] = i * 2;
  }

  for (int i = 0; i < N ; i++) {
    printf("%d ", num[i]);
  }

  printf("\n");

  return 0;
}
