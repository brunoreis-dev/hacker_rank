#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char *input = malloc(1000 * sizeof(char));
  scanf("%s", input);

  int size = strlen(input);

  int counts[10] = {0};

  for (int i = 0; i < size; i++)
  {
    if (input[i] >= '0' && input[i] <= '9')
      counts[input[i] - '0']++;
  }

  free(input);

  for (int i = 0; i < 10; i++)
    printf("%d ", counts[i]);

  return 0;
}
