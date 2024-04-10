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
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(int bill_count, int *bill, int k, int b)
{
  int total_division_bill = 0;

  for (int i = 0; i < bill_count; i++)
  {
    if (i != k)
    {
      total_division_bill += bill[i];
    }
  }

  int fair_payment = total_division_bill / 2;

  if (b <= fair_payment)
  {
    printf("Bon Appetit");
  }
  else
  {
    printf("%d", b - fair_payment);
  }
}

int main()
{
  int n, k;

  scanf("%d %d", &n, &k);

  int *bill = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &bill[i]);
  }

  int b;

  scanf("%d", &b);

  bonAppetit(n, bill, k, b);

  return 0;
}
