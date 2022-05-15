#include <stdio.h>

int main() {
	int* pi[3];
	int a = 1, b = 2, c = 3;

	// pi is a two-dimensional pointer
	int** pp = pi; 
	pp[0] = &a;
	pp[1] = &b;
	pp[2] = &c;

	/* we can use the following
	pi[0] = &a;
	pi[1] = &b;
	pi[2] = &c;
	*/

	for (int i=0; i < 3; i++)
		printf("*pp[%d] = %d\n", i, *pp[i]);

	for (int j=0; j < 3; j++)
		printf("*pi[%d] = %d\n", j, *pi[j]);

	return 0;
}
