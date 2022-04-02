#include <stdio.h>
#define N 8

void printArray(int a[][N])
{
  for (int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

int main() {

	int e_mat[N][N];

	// Identity matrix
	for (int row = 0; row < N; row++) {
	       for (int col = 0; col < N; col++) {
		    if (row == col)
		        e_mat[row][col] = 1;
		    else
	        	e_mat[row][col] = 0;
    		}
	}

	printArray(e_mat);

	return 0;
}
