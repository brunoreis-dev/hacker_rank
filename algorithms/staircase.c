#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void print_staircase(char **arr, int n)
{
  int x, y;

  for (x = 0; x < n; x++)
  {
    for (y = 0; y < n; y++)
    {
      if (y == n - 1)
      {
        printf("%c\n", arr[x][y]);
        break;
      }
      printf("%c", arr[x][y]);
    }
  }
}

void staircase(int n)
{
  char **arr = malloc(n * sizeof(char *));
  int x, y;
  for (x = 0; x < n; x++)
  {
    arr[x] = malloc(n * sizeof(char));

    for (y = 0; y < n; y++)
    {
      if (y >= n - 1 - x)
      {
        arr[x][y] = '#';
      }
      else
      {
        arr[x][y] = ' ';
      }
    }
  }

  print_staircase(arr, n);
}

int main()
{
  int n;

  scanf("%d", &n);

  staircase(n);

  return 0;
}
