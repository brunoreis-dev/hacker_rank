#include <stdio.h>
#include <stdlib.h>

int divisibleSumPairs(int n, int k, int *ar)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int is_divisible = (ar[i] + ar[j]) % k == 0;

      if (is_divisible)
      {
        count++;
      }
    }
  }

  return count;
}

int main()
{
  int n, k;

  scanf("%d %d", &n, &k);

  int *ar = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }

  int result = divisibleSumPairs(n, k, ar);

  printf("%d\n", result);

  return 0;
}
