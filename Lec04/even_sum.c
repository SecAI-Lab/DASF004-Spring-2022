#include <stdio.h>

int main() {
  int sum = 0;

  for (int num = 2; num <= 100; num += 2) {
    sum += num;
  }

  printf("Sum: %d\n", sum);

  return 0;
}

