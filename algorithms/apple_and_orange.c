#include <stdio.h>
#include <stdlib.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int *apples, int oranges_count, int *oranges)
{
  int total_apples = 0;
  int total_oranges = 0;

  for (int i = 0; i < apples_count; i++)
  {
    int apple_position = a + apples[i];
    if (apple_position >= s && apple_position <= t)
    {
      total_apples++;
    }
  }

  for (int i = 0; i < oranges_count; i++)
  {
    int orange_position = b + oranges[i];
    if (orange_position >= s && orange_position <= t)
    {
      total_oranges++;
    }
  }

  printf("%d\n%d\n", total_apples, total_oranges);
}

int main()
{
  int s, t, a, b, m, n;

  scanf("%d %d", &s, &t);
  scanf("%d %d", &a, &b);
  scanf("%d %d", &m, &n);

  int *apples = malloc(m * sizeof(int));
  int *oranges = malloc(n * sizeof(int));

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &apples[i]);
  }

  for (int i = 0; i < n; i++)
  {

    scanf("%d", &oranges[i]);
  }

  countApplesAndOranges(s, t, a, b, m, apples, n, oranges);

  free(apples);
  free(oranges);

  return 0;
}
