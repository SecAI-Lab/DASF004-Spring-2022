#include <stdio.h>

int sum_array(int a[], int n) {		// n: size of a
   int i, sum = 0;
   for (i = 0; i < n; i++)
      sum += a[i];   
   return sum;
}

void main() {

   int arr[100] = {1,2,3};

   // Array as a function parameter
   // The size of an array should be passed as the second argument
   int sum = sum_array(arr, 100);

   printf("Sum of an array: %d\n", sum);
}

