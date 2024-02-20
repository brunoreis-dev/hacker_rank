#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parse_int(char *);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
  int d1 = 0, d2 = 0;
  for (int x = 0; x < arr_rows; x++)
  {
    for (int y = 0; y < arr_columns; y++)
    {
      if (x == y)
      {
        d1 += arr[x][y];
      }
      if (arr_columns - 1 - x == y)
      {
        d2 += arr[x][y];
      }
    }
  }

  return abs(d1 - d2);
}

int main()
{
  int n;
  scanf("%d", &n);

  int **arr = malloc(n * sizeof(int *));

  for (int i = 0; i < n; i++)
  {
    arr[i] = malloc(n * (sizeof(int)));
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int result = diagonalDifference(n, n, arr);

  printf("%d\n", result);

  return 0;
}
