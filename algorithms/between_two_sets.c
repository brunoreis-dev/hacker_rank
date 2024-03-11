#include <stdio.h>
#include <stdlib.h>

int getTotalX(int a_count, int *a, int b_count, int *b)
{
  int max_a = 0, min_b = b[0];
  int count = 0;

  for (int i = 0; i < a_count; i++)
  {
    if (max_a < a[i])
    {
      max_a = a[i];
    }
  }

  for (int i = 0; i < b_count; i++)
  {
    if (min_b > b[i])
    {
      min_b = b[i];
    }
  }

  for (int i = max_a; i <= min_b; i++)
  {
    int j;
    for (j = 0; j < a_count; j++)
    {
      if (a[j] != 0 && i % a[j] != 0)
      {
        break;
      }
    }

    if (j == a_count)
    {
      for (j = 0; j < b_count; j++)
      {
        if (b[j] % i != 0)
        {
          break;
        }
      }

      if (j == b_count)
      {
        count++;
      }
    }
  }

  return count;
}

int main()
{
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);

  int *arr = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d\n", &arr[i]);
  }

  int *brr = malloc(m * sizeof(int));

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &brr[i]);
  }

  int total = getTotalX(n, arr, m, brr);

  printf("%d\n", total);

  return 0;
}
