#include <stdio.h>

int main() {
  int c;
 
  // Print out just alphabet letters [A-Za-z]

  while( (c = getchar()) != EOF) {
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      printf("Character: %c, ASCII value: %d\n", c, c);
    }
  }

  return 0;
}

