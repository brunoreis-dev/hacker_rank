#include <stdlib.h>
#include <stdio.h>

char *catAndMouse(int x, int y, int z)
{
  int cat_a = z > x ? z - x : x - z;
  int cat_b = z > y ? z - y : y - z;

  if (cat_a < cat_b)
  {
    return "Cat A";
  }
  else if (cat_a > cat_b)
  {
    return "Cat B";
  }
  else
  {
    return "Mouse C";
  }
}

int main()
{
  int q;

  scanf("%d", &q);

  for (int q_itr = 0; q_itr < q; q_itr++)
  {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    char *result = catAndMouse(x, y, z);

    printf("%s\n", result);
  }

  return 0;
}
