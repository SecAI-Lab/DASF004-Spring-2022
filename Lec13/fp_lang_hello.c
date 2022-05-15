#include <stdio.h>

void hello() { 
  printf("Hello!\n");
}

void annyung() { 
  printf("안녕!\n"); 
}

int main(void) {

  // Define a function pointer
  void (*fp)();
  char language;

  // Take a language as an input
  printf("Korean? (Type 'Y' if yes or 'N') ");
  scanf("%c", &language);

  // Call a different function depending on a language
  if (language == 'Y')
     fp = annyung;
  else
     fp = hello;

  // Then, invoke a call with a function pointer 
  //  according to the language
  // Note that the pointer may contain a different address
  fp();

  return 0;
}

