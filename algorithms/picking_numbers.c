#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int pickingNumbers(int a_count, int *a)
{
  int freq[101] = {0};

  for (int i = 0; i < a_count; i++)
  {
    freq[a[i]]++;
  }

  int max_length = 0;

  for (int i = 1; i <= 100; i++)
  {

    int length = freq[i] + freq[i - 1];
    if (length > max_length)
    {
      max_length = length;
    }
  }

  return max_length;
}

int main()
{
  int n;

  scanf("%d", &n);

  int *a = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int result = pickingNumbers(n, a);

  printf("%d\n", result);

  return 0;
}
