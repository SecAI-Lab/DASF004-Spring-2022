#include <stdio.h>
#define ROW 5
#define COL 9


int main() {
  int m[ROW][COL] = {
	       {1, 1, 1, 1, 1, 0, 1, 1, 1},
 	       {0, 1, 0, 1, 0, 1, 0, 1, 0},
	       {0, 1, 0, 1, 1, 0, 0, 1, 0},
	       {1, 1, 0, 1, 0, 0, 0, 1, 0},
	       {1, 1, 0, 1, 0, 0, 1, 1, 1}
  };

  // Counting 1s
  int cnt = 0;
  for(int i = 0; i < ROW; i++)
    for(int j = 0; j < COL; j++)
      if(m[i][j] == 1)
        cnt++;

  printf("%d\n", cnt);

  return 0;
}
