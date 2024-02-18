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
/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int *reverseArray(int a_count, int *a)
{
  int *temp_arr = malloc(a_count * sizeof(int));

  for (int i = 0; i < a_count; i++)
  {
    *(temp_arr + i) = a[a_count - 1 - i];
  }

  return temp_arr;
}

int main()
{
  int arr_count;
  scanf("%d", &arr_count);
  int *arr = malloc(arr_count * sizeof(int));

  for (int i = 0; i < arr_count; i++)
  {
    scanf("%d", &arr[i]);
  }
  int *res = reverseArray(arr_count, arr);

  for (int i = 0; i < arr_count; i++)
  {
    printf("%d ", res[i]);
  }

  return 0;
}
