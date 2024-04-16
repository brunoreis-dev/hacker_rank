#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int compare(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int getMoneySpent(int keyboards_count, int *keyboards, int drives_count, int *drives, int b)
{
  qsort(keyboards, keyboards_count, sizeof(int), compare);
  qsort(drives, drives_count, sizeof(int), compare);

  int max_spent = -1, i = 0, j = drives_count - 1;

  while (i < keyboards_count && j >= 0)
  {
    int sum = keyboards[i] + drives[j];
    if (sum <= b)
    {
      if (sum > max_spent)
      {
        max_spent = sum;
      }
      i++;
    }
    else
    {
      j--;
    }
  }

  return max_spent;
}

int main()
{
  int b, n, m;

  scanf("%d %d %d", &b, &n, &m);

  int32_t *keyboards = (int32_t *)malloc(n * sizeof(int32_t));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &keyboards[i]);
  }

  int keyboards_count = n;

  int32_t *drives = (int32_t *)malloc(m * sizeof(int32_t));

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &drives[i]);
  }

  int drives_count = m;

  int moneySpent = getMoneySpent(keyboards_count, keyboards, drives_count, drives, b);

  printf("%d\n", moneySpent);

  free(drives);
  free(keyboards);

  return 0;
}
