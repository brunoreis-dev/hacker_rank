#include <stdio.h>
#include <stdlib.h>

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */

int formingMagicSquare(int s_rows, int s_columns, int **s)
{
}

int main()
{
  int **s = malloc(3 * sizeof(int *));

  for (int i = 0; i < 3; i++)
  {
    s[i] = malloc(3 * (sizeof(int)));

    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &s[i + j]);
    }
  }

  int result = formingMagicSquare(3, 3, s);

  printf("%d\n", result);

  return 0;
}
