#include <stdio.h>

int add(int x, int y) { 
	return x + y; 
}

int sub(int x, int y) { 
	return x - y; 
}

int mul(int x, int y) { 
	return x * y; 
}

int err(int x, int y) {
        printf("Calc failed!\n");
        return -1;
}

int main(void) {
  int (*calc[4])(int, int) = {add, sub, mul, err};
  int a = 20, b = 10;

  int result;
  char type;

  printf("Choose (a: addition, s: substitution, m: multiplication) ");

  scanf("%c", &type);  

  switch (type) {
    case 'a': 
	result = calc[0](a, b); 
	break;
    case 's': 
	result = calc[1](a, b); 
	break;
    case 'm': 
	result = calc[2](a, b); 
	break;
    default : 
	result = calc[3](a, b); 
  }

  printf("Result of cal(%d,%d): %d\n", a, b, result);

  return 0;
}

