#include <stdio.h>
int main() {
  int max, i = 4, j = 10, k = 1;  // declaring multiple variables
  if (i > j) {
    if (i > k) max = i;     // if block in if block
    else max = k;
  } else {
    if (j > k) max = j;       // if block in if block
    else max = k;
  }
  printf("max: %d\n", max);
  return 0;
}

