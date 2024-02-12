#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, *arr, i;
  scanf("%d", &num);
  arr = (int *)malloc(num * sizeof(int));
  for (i = 0; i < num; i++)
  {
    scanf("%d", arr + i);
  }

  /* Write the logic to reverse the array. */

  // Reverse array Using pointers
  int *ptr = &arr[num - 1];

  for (i = 0; i < num; i++)
    printf("%d ", *ptr--);

  // Reverse array printing it from the last element
  for (i = num - 1; i >= 0; i--)
    printf("%d ", *(arr + i));

  return 0;
}
