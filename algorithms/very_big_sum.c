#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(int ar_count, long *ar)
{
  long sum = 0;
  for (int i = 0; i < ar_count; i++)
  {
    sum += ar[i];
  }

  return sum;
}

int main()
{
  int ar_count;

  scanf("%d", &ar_count);

  long *ar = malloc(ar_count * sizeof(long));

  for (int i = 0; i < ar_count; i++)
  {
    scanf("%ld", &ar[i]);
  }

  long result = aVeryBigSum(ar_count, ar);

  printf("%ld\n", result);

  free(ar);

  return 0;
}
