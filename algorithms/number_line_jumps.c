#include <stdio.h>
#include <stdlib.h>

char *kangaroo(int x1, int v1, int x2, int v2)
{
  if (x1 < x2 && v1 <= v2)
  {
    return "NO";
  }
  else
  {
    if ((x1 - x2) % (v2 - v1) == 0)
    {
      return "YES";
    }
    else
    {
      return "NO";
    }
  }
}

int main()
{
  int x1, v1, x2, v2;

  scanf("%d", &x1);
  scanf("%d", &v1);
  scanf("%d", &x2);
  scanf("%d", &v2);

  char *result = kangaroo(x1, v1, x2, v2);

  printf("%s\n", result);

  return 0;
}
