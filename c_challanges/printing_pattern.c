#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void print_board(int n)
{
  int colsRows = n * 2 - 1;
  int matrix[colsRows][colsRows];

  int startRow = 0, endRow = colsRows - 1, startCol = 0, endCol = colsRows - 1;
  int num = n;
  while (startRow <= endRow && startCol <= endCol)
  {
    for (int i = startCol; i <= endCol; i++)
    {
      matrix[startRow][i] = num;
      matrix[endRow][i] = num;
    }
    for (int i = startRow + 1; i < endRow; i++)
    {
      matrix[i][startCol] = num;
      matrix[i][endCol] = num;
    }

    startRow++;
    endRow--;
    startCol++;
    endCol--;
    num--;
  }

  for (int i = 0; i < colsRows; i++)
  {
    for (int j = 0; j < colsRows; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main()
{

  int n;
  scanf("%d", &n);
  // Complete the code to print the pattern.
  print_board(n);
  return 0;
}
