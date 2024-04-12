#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int countingValleys(int steps, char *path)
{
  int sea_level = 0;
  int valley_count = 0;
  int in_valley = false;

  for (int i = 0; i < steps; i++)
  {

    if (path[i] == 'U')
    {
      sea_level++;
    }
    else if (path[i] == 'D')
    {
      sea_level--;
    }

    if (sea_level < 0 && !in_valley)
    {
      in_valley = true;
    }

    if (sea_level == 0 && in_valley)
    {
      valley_count++;
      in_valley = false;
    }
  }

  return valley_count;
}

int main()
{
  int steps;

  scanf("%d", &steps);

  char *path = malloc(steps * sizeof(char));

  scanf("%s", path);

  int result = countingValleys(steps, path);

  printf("%d\n", result);

  return 0;
}
