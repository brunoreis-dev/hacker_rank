#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  int n;

  scanf("%d", &n);

  int result = factorial(n);

  printf("%d\n", result);

  return 0;
}
