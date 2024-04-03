#include <stdio.h>
#include <stdlib.h>

void breakingRecords(int scores_count, int *scores)
{
  int min = scores[0], max = scores[0], min_counter = 0, max_counter = 0;

  for (int i = 0; i < scores_count; i++)
  {
    if (scores[i] < min)
    {
      min = scores[i];
      min_counter++;
    }

    if (scores[i] > max)
    {
      max = scores[i];
      max_counter++;
    }
  }

  printf("%d %d", max_counter, min_counter);
}

int main()
{
  int n;

  scanf("%d", &n);

  int *scores = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &scores[i]);
  }

  breakingRecords(n, scores);

  printf("\n");

  return 0;
}
