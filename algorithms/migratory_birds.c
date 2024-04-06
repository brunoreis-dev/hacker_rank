#include <stdio.h>
#include <stdlib.h>

int migratoryBirds(int arr_count, int *arr)
{
  int types[] = {1, 2, 3, 4, 5};
  int biggest_counter = 0, most_common_type;

  for (int i = 0; i < 5; i++)
  {
    int counter = 0;

    for (int j = 0; j < arr_count; j++)
    {
      if (types[i] == arr[j])
      {
        counter++;
      }
    }

    if (counter > biggest_counter ||
        (counter == biggest_counter && types[i] < most_common_type))
    {
      most_common_type = types[i];
      biggest_counter = counter;
    }
  }

  return most_common_type;
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

  int result = migratoryBirds(arr_count, arr);

  printf("%d\n", result);

  return 0;
}
