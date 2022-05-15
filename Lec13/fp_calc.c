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
  int (*calc)(int, int);
  int a = 20, b = 10;
  char type;

  printf("Choose (a: addition, s: substitution, m: multiplication) ");

  scanf("%c", &type);  

  switch (type) {
    case 'a': 
	calc = add; 
	break;
    case 's': 
	calc = sub; 
	break;
    case 'm': 
	calc = mul; 
	break;
    default : 
	calc = err; 
  }

  printf("Result of cal(%d,%d): %d\n", a, b, calc(a, b));

  return 0;
}

