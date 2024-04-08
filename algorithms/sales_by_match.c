#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *filter_duplicate_arr_itens(int n, int *new_arr_length, int *ar)
{
  int *arr = malloc(n * sizeof(int));
  *new_arr_length = 0;

  for (int i = 0; i < n; i++)
  {
    bool is_unique = true;

    for (int j = 0; j < *new_arr_length; j++)
    {
      if (arr[j] == ar[i])
      {
        is_unique = false;
        break;
      }
    }

    if (is_unique)
    {
      arr[*new_arr_length] = ar[i];
      (*new_arr_length)++;
    }
  }

  return arr;
}

int sockMerchant(int n, int *ar)
{
  int new_arr_length;
  int *new_arr = filter_duplicate_arr_itens(n, &new_arr_length, ar);
  int total_count = 0;

  for (int i = 0; i < new_arr_length; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (new_arr[i] == ar[j])
      {
        count++;
      }
    }

    total_count += count / 2;
  }

  free(new_arr);

  return total_count;
}

int main()
{
  int n;

  scanf("%d", &n);

  int *ar = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }

  int result = sockMerchant(n, ar);

  printf("%d\n", result);

  free(ar);

  return 0;
}
