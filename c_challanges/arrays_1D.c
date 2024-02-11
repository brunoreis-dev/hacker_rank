#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int size;
  scanf("%d", &size);

  int *matrix = malloc(size * sizeof(int));

  for (int i = 0; i < size; i++)
  {
    scanf("%d", &matrix[i]);
  }

  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum = sum + matrix[i];
  }

  free(matrix);

  printf("%d", sum);

  return 0;
}
