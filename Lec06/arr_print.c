#include <stdio.h>

int main()
{
  
  int num[5] = {100, 200, 300, 400, 500 };

  for (int i = 0; i < 5; i++) {
    num[i] = i * 2;
  }

  for (int i = 0; i < 5 ; i++) {
    printf("%d ", num[i]);
  }

  printf("\n");

  return 0;
}
