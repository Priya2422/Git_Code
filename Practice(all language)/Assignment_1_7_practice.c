#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

void fun1(int **, int, int);

int main()
{
  int array_2D[ROWS][COLS] = { {1, 2, 3}, {3, 4, 0}, {5, 6, 0} };
  int n = ROWS;
  int m = COLS;

  fun1(array_2D, n, m);

  return 0;
}

void fun1(int **a, int n, int m)
{
  int i, j,count;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
   if(a[i][j]==0){
count++;
   }
    }
  }
  printf("%d",count);
}