#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void separateWords(char *text)
{
  int i;
  int len = strlen(text);
  char *weirdText = (char *)malloc(10000 * sizeof(char));
  char *notWeirdText = (char *)malloc(10000 * sizeof(char));

  int weirdIndex = 0;
  int notWeirdIndex = 0;

  for (i = 0; i <= len; i++)
  {
    if (i % 2 == 0)
    {
      weirdText[weirdIndex++] = text[i];
    }
    else
    {
      notWeirdText[notWeirdIndex++] = text[i];
    }
  }

  weirdText[weirdIndex] = '\0';
  notWeirdText[notWeirdIndex] = '\0';

  printf("%s %s\n", weirdText, notWeirdText);
}

int main()
{
  int i;
  int t;

  scanf("%d", &t);

  for (i = 0; i < t; i++)
  {
    char *s = (char *)malloc(10000 * sizeof(char));

    if (s == NULL)
    {
      fprintf(stderr, "Error on memory allocation\n");
      return 1;
    }

    scanf(" %[^\n]s", s);

    separateWords(s);

    free(s);
  }

  return 0;
}
