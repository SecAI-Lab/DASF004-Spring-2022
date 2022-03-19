#include <stdio.h>

int sum(int num)
{
  int ret = 0;
  for(int i=1; i<=num; i++) {
    ret += i;
  }
  return ret;
}

int main()
{
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  printf("Sum %d (inclusive) is %d\n", num, sum(num));

  return 0;
}

