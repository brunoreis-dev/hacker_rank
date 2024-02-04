#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 21
#define MAX_EMAIL_LENGTH 51

typedef struct
{
  char firstName[MAX_NAME_LENGTH];
  char emailID[MAX_EMAIL_LENGTH];
} Person;

char *readline();
char **split_string(char *);

int compare(const void *a, const void *b)
{
  return strcmp(((Person *)a)->firstName, ((Person *)b)->firstName);
}

int main()
{
  int N;
  scanf("%d", &N);
  getchar();

  Person *people = malloc(N * sizeof(Person));
  if (!people)
  {
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < N; i++)
  {
    char **input = split_string(readline());
    strncpy(people[i].firstName, input[0], MAX_NAME_LENGTH);
    strncpy(people[i].emailID, input[1], MAX_EMAIL_LENGTH);
    free(input);
  }

  qsort(people, N, sizeof(Person), compare);

  for (int i = 0; i < N; i++)
  {
    if (strstr(people[i].emailID, "@gmail.com"))
    {
      printf("%s\n", people[i].firstName);
    }
  }

  free(people);
  return 0;
}

char *readline()
{
  size_t alloc_length = 1024;
  size_t data_length = 0;
  char *data = malloc(alloc_length);
  if (!data)
  {
    exit(EXIT_FAILURE);
  }

  while (1)
  {
    char *cursor = data + data_length;
    if (!fgets(cursor, alloc_length - data_length, stdin))
      break;
    data_length += strlen(cursor);
    if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
      break;
    alloc_length <<= 1;
    char *tmp = realloc(data, alloc_length);
    if (!tmp)
    {
      free(data);
      exit(EXIT_FAILURE);
    }
    data = tmp;
  }

  if (data[data_length - 1] == '\n')
    data[data_length - 1] = '\0';
  char *tmp = realloc(data, data_length);
  if (!tmp)
  {
    free(data);
    exit(EXIT_FAILURE);
  }
  data = tmp;
  return data;
}

char **split_string(char *str)
{
  char **splits = malloc(2 * sizeof(char *));
  if (!splits)
  {
    exit(EXIT_FAILURE);
  }

  splits[0] = strtok(str, " ");
  splits[1] = strtok(NULL, " ");
  return splits;
}
