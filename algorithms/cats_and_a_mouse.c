#include <stdlib.h>
#include <string.h>

char *catAndMouse(int x, int y, int z)
{
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
