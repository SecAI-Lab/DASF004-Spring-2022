#include <stdio.h>
#define SIZE 100

int sum_array(int a[]) {
   int i, sum = 0;
   for (i = 0; i < SIZE; i++)
      sum += a[i];   
   return sum;
}

void main() {

   int arr[SIZE] = {1,2,3};

   // Array as a function parameter
   // The size of an array has been defined as a symbolic constant
  int sum = sum_array(arr);

   printf("Sum of an array: %d\n", sum);
}

