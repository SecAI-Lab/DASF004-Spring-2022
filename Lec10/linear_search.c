#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main()
{
  int a[SIZE];

  for(size_t x = 0; x < SIZE; x++) {
    a[x] = 2 * x;
  }

 printf("Enter integer search key: ");
 int searchKey;
 scanf("%d", &searchKey);
 size_t index = linearSearch(a, searchKey, SIZE);

 if(index != -1) {
   printf("Found value at index %lu\n", index);
 } else {
   puts("Value not found");
 }

 return 0;
}


size_t linearSearch(const int array[], int key, size_t size)
{
  for(size_t i = 0; i < size; i++) {
    if(array[i] == key) {
      return i;
    }
  }

  return -1;
}


