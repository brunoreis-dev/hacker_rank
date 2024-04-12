#include <stdio.h>
#include <stdlib.h>

int countingValleys(int steps, char *path)
{
  int counting_valley = 0;

  return counting_valley;
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
