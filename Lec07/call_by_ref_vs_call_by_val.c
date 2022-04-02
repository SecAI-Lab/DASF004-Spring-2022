#include <stdio.h>
#define SIZE 10

void printArray(int a[], size_t size)
{
  for(size_t i = 0; i < size; i++) {
    char c;
    c = (i==size-1)? '\n':' ';	 // for the pretty output
    printf("%d%c", a[i], c);
  }
}

// We can modify elements of an array, why?
void modifyArray(int a[], size_t size) {
  for(size_t i = 0; i < size; i++)
    a[i] *= 2;
}

// Note that the following cannot modify an element, why?
void modifyElement(int e) {
  e *= 2;
}

int main()
{
  int nums[SIZE];
  for( size_t i = 0; i < SIZE; i++ )
    nums[i] = i;                  // initializing the array
  printArray(nums, SIZE);

  modifyArray(nums, SIZE);        // modifying an array (call by reference)
  printArray(nums, SIZE);

  modifyElement(nums[3]);         // modifying an array (call by value)
  printArray(nums, SIZE);

  return 0;
}

