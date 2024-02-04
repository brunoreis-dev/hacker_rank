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

char *readline();
char *ltrim(char *);
char *rtrim(char *);
char **split_string(char *);

int parse_int(char *);

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int bitwiseAnd(int N, int K)
{
  int max = 0;

  for (int a = 1; a < N; a++)
  {
    for (int b = a + 1; b <= N; b++)
    {
      int current_and = a & b;

      if (current_and > max && current_and < K)
      {
        max = current_and;
      }
    }
  }

  return max;
}

int main()
{

  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int res = bitwiseAnd(n, k);

    printf("%d\n", res);
  }

  return 0;
}
