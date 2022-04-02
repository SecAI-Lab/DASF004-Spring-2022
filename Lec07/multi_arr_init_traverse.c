#include <stdio.h>

void PrintArray (int arr[][2], int row){
    for (int i = 0; i < row; i++) {
	for (int j = 0; j < 2; j++) {
	    printf("%d ",  arr[i][j]);
	}
	printf("\n");
    }
    printf("\n");
}

int main() {
  int a[2][2] = {{1, 2}, {3, 4}};
  int b[2][2] = {{1}, {3, 4}};
  int c[2][2] = {1, 2, 3, 4};
  int d[2][2] = {1, 2};

  PrintArray(a, 2);
  PrintArray(b, 2);
  PrintArray(c, 2);
  PrintArray(d, 2);
  return 0;
}
