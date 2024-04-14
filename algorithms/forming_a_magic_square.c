#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int possible_magic_squares[8][3][3] = {
    {{8, 1, 6},
     {3, 5, 7},
     {4, 9, 2}},
    {{6, 1, 8},
     {7, 5, 3},
     {2, 9, 4}},
    {{4, 9, 2},
     {3, 5, 7},
     {8, 1, 6}},
    {{2, 9, 4},
     {7, 5, 3},
     {6, 1, 8}},
    {{8, 3, 4},
     {1, 5, 9},
     {6, 7, 2}},
    {{4, 3, 8},
     {9, 5, 1},
     {2, 7, 6}},
    {{6, 7, 2},
     {1, 5, 9},
     {8, 3, 4}},
    {{2, 7, 6},
     {9, 5, 1},
     {4, 3, 8}}};

int calculate_cost(int **s, int magic_square[3][3])
{
  int cost = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cost += abs(s[i][j] - magic_square[i][j]);
    }
  }
  return cost;
}

int formingMagicSquare(int s_rows, int s_columns, int **s)
{
  int min_cost = __INT_MAX__;

  for (int k = 0; k < 8; k++)
  {
    int current_cost = calculate_cost(s, possible_magic_squares[k]);
    if (current_cost < min_cost)
    {
      min_cost = current_cost;
    }
  }

  return min_cost;
}

int main()
{
  int **s = malloc(3 * sizeof(int *));

  for (int i = 0; i < 3; i++)
  {
    s[i] = malloc(3 * (sizeof(int)));

    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &s[i][j]);
    }
  }

  int result = formingMagicSquare(3, 3, s);

  printf("%d\n", result);

  for (int i = 0; i < 3; i++)
  {
    free(s[i]);
  }

  free(s);

  return 0;
}
