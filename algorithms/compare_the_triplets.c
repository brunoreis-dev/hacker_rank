#include <stdio.h>
#include <stdlib.h>

int *compareTriplets(int count, int *a, int *b)
{
  int *result = calloc(2, sizeof(int));

  for (int i = 0; i < count; i++)
  {
    if (a[i] > b[i])
    {
      result[0] += 1;
    }
    else if (a[i] < b[i])
    {
      result[1] += 1;
    }
  }

  return result;
}

int main()
{
  int *a = malloc(3 * sizeof(int));

  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &a[i]);
  }
  int *b = malloc(3 * sizeof(int));

  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &b[i]);
  }

  int *result = compareTriplets(3, a, b);

  for (int i = 0; i < 2; i++)
  {
    printf("%d ", result[i]);
  }

  return 0;
}
