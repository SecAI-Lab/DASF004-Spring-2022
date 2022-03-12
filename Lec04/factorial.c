#include <stdio.h>

int main() {

  // The following computes n! (factorial)
  long int result = 1;
  int i, n;

  // Enter an integer less than 20; 
  // If the result is too big, what would be happening?
  printf("Enter an integer: ");
  scanf("%d", &n); 

  for (i = 1; i <= n; i++) {
    result *= i;
  }

  // %ld is the specifier for an long integer
  printf("%d! = %ld\n", n, result);

  return 0;
}

