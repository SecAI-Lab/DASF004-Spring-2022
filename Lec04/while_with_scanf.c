#include <stdio.h>

int main()
{
  int num = 1;
  while (num != 10) {
    printf("Input a number(for exit, type 10): ");
    scanf("%d", &num);
    printf("You type %d.\n", num);
  }
  return 0;
}

