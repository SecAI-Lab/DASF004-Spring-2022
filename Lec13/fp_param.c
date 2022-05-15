#include <stdio.h>

int add(int a, int b) { return a + b; }

// Function pointer as a parameter
void run_calc(int (*fp)(int, int), int a, int b) { 
    printf("%d\n", fp(a,b)); 
}

int main() {
  run_calc(add, 10, 20);
  return 0;
}

