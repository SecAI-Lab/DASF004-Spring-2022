#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define VISIT 'v'
#define SZ 7

/*
SAMPLE MAZE in maze.txt
x x x x x x x
x o o o o o x
x o x o x o x
x o o x o x x
x x o x o x x
x o o o o o x
x x x x x x x
*/

char maze[SZ][SZ];
int si, sj, ei, ej;
int success;

// Write the following functions
int visit(int i, int j);
void read_maze();

int main(void) {
  success = FALSE;

  read_maze();

  // Start coordinate
  si = 1; 
  sj = 1;

  // End coordinate
  ei = SZ-2; 
  ej = SZ-2;

  if (visit(si, sj) == FALSE)
    printf("No exit!\n");
  else
    printf("\n");

  return 0;
}

