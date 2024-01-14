#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int i;
  int d;
  float a;
  float b;

  scanf("%d", &i);
  scanf("%d", &d);
  scanf("%f", &a);
  scanf("%f", &b);

  int sumInts = i + d;
  int differenceInts = i - d;

  double sumFloats = a + b;
  double differenceFloats = a - b;

  printf("%d %d\n", sumInts, differenceInts);
  printf("%.1f %.1f", sumFloats, differenceFloats);

  return 0;
}
