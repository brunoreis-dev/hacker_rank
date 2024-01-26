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

void swap(int *xp, int *yp, int *swap_count)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
  (*swap_count)++;
}

void bubble_sort(int arr[], int n, int *swap_count)
{
  int i, j;

  bool swapped;

  for (i = 0; i < n - 1; i++)
  {
    swapped = false;
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1], swap_count);
        swapped = true;
      }
    }

    if (swapped == false)
      break;
  }
}

int main()
{
  int n = parse_int(ltrim(rtrim(readline())));

  char **a_temp = split_string(rtrim(readline()));

  int *a = malloc(n * sizeof(int));

  int swap_count = 0;

  for (int i = 0; i < n; i++)
  {
    int a_item = parse_int(*(a_temp + i));

    *(a + i) = a_item;
  }

  bubble_sort(a, n, &swap_count);

  printf("Array is sorted in %d swaps.\n", swap_count);

  printf("First Element: %d\n", a[0]);

  printf("Last Element: %d\n", a[n - 1]);

  return 0;
}

char *readline()
{
  size_t alloc_length = 1024;
  size_t data_length = 0;

  char *data = malloc(alloc_length);

  while (true)
  {
    char *cursor = data + data_length;
    char *line = fgets(cursor, alloc_length - data_length, stdin);

    if (!line)
    {
      break;
    }

    data_length += strlen(cursor);

    if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
    {
      break;
    }

    alloc_length <<= 1;

    data = realloc(data, alloc_length);

    if (!data)
    {
      data = '\0';

      break;
    }
  }

  if (data[data_length - 1] == '\n')
  {
    data[data_length - 1] = '\0';

    data = realloc(data, data_length);

    if (!data)
    {
      data = '\0';
    }
  }
  else
  {
    data = realloc(data, data_length + 1);

    if (!data)
    {
      data = '\0';
    }
    else
    {
      data[data_length] = '\0';
    }
  }

  return data;
}

char *ltrim(char *str)
{
  if (!str)
  {
    return '\0';
  }

  if (!*str)
  {
    return str;
  }

  while (*str != '\0' && isspace(*str))
  {
    str++;
  }

  return str;
}

char *rtrim(char *str)
{
  if (!str)
  {
    return '\0';
  }

  if (!*str)
  {
    return str;
  }

  char *end = str + strlen(str) - 1;

  while (end >= str && isspace(*end))
  {
    end--;
  }

  *(end + 1) = '\0';

  return str;
}

char **split_string(char *str)
{
  char **splits = NULL;
  char *token = strtok(str, " ");

  int spaces = 0;

  while (token)
  {
    splits = realloc(splits, sizeof(char *) * ++spaces);

    if (!splits)
    {
      return splits;
    }

    splits[spaces - 1] = token;

    token = strtok(NULL, " ");
  }

  return splits;
}

int parse_int(char *str)
{
  char *endptr;
  int value = strtol(str, &endptr, 10);

  if (endptr == str || *endptr != '\0')
  {
    exit(EXIT_FAILURE);
  }

  return value;
}
