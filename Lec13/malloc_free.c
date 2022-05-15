#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size;
	int* numbers;

	printf("Enter the size of an array: ");
	scanf("%d", &size);

	numbers = (int*) malloc(size * sizeof(int));

	for(int i = 0; i < size; i++)
		numbers[i] = i;

	for(int j = 0; j < size; j++)
		printf("%d ", numbers[j]);

	printf("\n");
	free(numbers);

	return 0;
}
