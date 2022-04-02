#include <stdio.h>
#include <stdlib.h>

int sum_array(int a[], int size) {
   int i, sum = 0;

   for (i = 0; i < size; i++)
      sum += a[i];   
   return sum;
}

void main() {

   int arr[] = {1,2,3};

   // Array as a function parameter
   // Here we use the sizeof operator
  size_t size = sizeof(arr) / sizeof(arr[0]);
  printf("Array size: %ld, element size: %ld\n", sizeof(arr), sizeof(arr[0]));
  int sum = sum_array(arr, size);

   printf("Sum of an array: %d\n", sum);
}

