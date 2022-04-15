#include <stdio.h>

void swap_ptr(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int main(void) {
	int n1, n2;
	printf("Enter two numbers : ");
	scanf("%d %d", &n1, &n2);
	printf("You have entered n1 = [%d] and n2 = [%d]\n", n1, n2);
	swap(n1, n2);
	printf("After swap,\n\tn1 = [%d] and n2 = [%d]\n", n1, n2);
	swap_ptr(&n1, &n2);
	printf("After swap_ptr,\n\tn1 = [%d] and n2 = [%d]\n", n1, n2);
	return 0;
}

