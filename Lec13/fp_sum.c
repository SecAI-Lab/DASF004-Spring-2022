#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main(void) {
	// Observe how a function pointer is declared and invoked
	int (*fp) (int, int) = &sum;
	int res = (*fp)(20, 30);

	printf("Result: %d\n", res);
	return 0;
}
