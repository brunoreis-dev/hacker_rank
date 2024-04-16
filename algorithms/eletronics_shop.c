#include <stdio.h>
#include <stdlib.h>

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(int keyboards_count, int *keyboards, int drives_count, int *drives, int b)
{
  /*
   * Write your code here.
   */
}

int main()
{
  int b, n, m;

  scanf("%d %d %d", &b, &n, &m);

  int *keyboards = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &keyboards[i]);
  }

  int keyboards_count = n;

  int *drives = (int *)malloc(m * sizeof(int));

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &drives[i]);
  }

  int drives_count = m;

  /*
   * The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
   */

  int moneySpent = getMoneySpent(keyboards_count, keyboards, drives_count, drives, b);

  printf("%d\n", moneySpent);

  return 0;
}
