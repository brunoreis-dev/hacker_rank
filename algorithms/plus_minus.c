#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int *arr)
{
  double plus = 0, minus = 0, zero = 0;

  for (int i = 0; i < arr_count; i++)
  {
    if (arr[i] == 0)
    {
      zero++;
    }
    else if (arr[i] >= 0)
    {
      plus++;
    }
    else
    {
      minus++;
    }
  }

  printf("%f\n", plus / arr_count);
  printf("%f\n", minus / arr_count);
  printf("%f\n", zero / arr_count);
}

int main()
{
  int n;
  scanf("%d", &n);

  int *arr = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  plusMinus(n, arr);

  return 0;
}
