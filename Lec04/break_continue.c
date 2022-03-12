#include <stdio.h>
int main()
{
 // What is the first value added to sum?
 // Is the loop escaped by the loop-continuation condition?
 // Find a line never being executed.

  int num = 0, sum = 0;
  while (num < 10) {
    sum += num++;
    printf("before if\n");
    if (sum < 20) {
      printf("num:%d sum:%d (continue)\n", num, sum);
      continue;
    } else {
      printf("num:%d sum:%d (break)\n", num, sum);
      break;
    }
    printf("after else\n");
  }
}

