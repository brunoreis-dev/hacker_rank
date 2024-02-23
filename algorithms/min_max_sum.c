#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(int arr_count, int *arr)
{
  long minSum = 0, maxSum = 0;
  long totalSum = 0;

  for (int i = 0; i < arr_count; i++)
  {
    totalSum += arr[i];
  }

  for (int i = 0; i < arr_count; i++)
  {
    long sumMinusCurrent = totalSum - arr[i];

    if (sumMinusCurrent < minSum || minSum == 0)
      minSum = sumMinusCurrent;

    if (sumMinusCurrent > maxSum)
      maxSum = sumMinusCurrent;
  }

  printf("%ld %ld", minSum, maxSum);
}

int main()
{
  int *arr = malloc(5 * sizeof(int));

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }

  miniMaxSum(5, arr);

  free(arr);

  return 0;
}
