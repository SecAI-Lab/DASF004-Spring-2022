#include <stdio.h>  

int num = 0;

void test_global() {
  printf("num in test_global : %d\n", ++num);
}

int main() {
  printf("num in main : %d\n", num); // 0
  int num = 50;
  {
    int num = 100;
    test_global(); // 1
    test_global(); // 2
    printf("num in main : %d\n", ++num); // 101
  }
  printf("num in main : %d\n", num); // 50
  return 0;
}
