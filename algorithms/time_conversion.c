#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char *timeConversion(char *s)
{
  char hrs[3], mins[3], secs[3];
  char *period = &s[strlen(s) - 2];

  char *ptr = strtok(s, ":");

  for (int i = 0; i < 3; i++)
  {
    switch (i)
    {
    case 0:
      strncpy(hrs, ptr, 2);
      hrs[2] = '\0';
      break;
    case 1:
      strncpy(mins, ptr, 2);
      mins[2] = '\0';
      break;
    case 2:
      strncpy(secs, ptr, 2);
      secs[2] = '\0';
      break;
    }
    ptr = strtok(NULL, ":");
  }

  if (strcmp(period, "PM") == 0)
  {
    int hour = atoi(hrs);
    if (hour != 12)
    {
      hour += 12;
      sprintf(hrs, "%02d", hour);
    }
  }
  else
  {
    if (atoi(hrs) == 12)
    {
      strcpy(hrs, "00");
    }
  }
  char *formattedHours = (char *)malloc(9 * sizeof(char));

  sprintf(formattedHours, "%s:%s:%s", hrs, mins, secs);

  return formattedHours;
}

int main()
{

  char *s;

  s = (char *)malloc(100 * sizeof(char));

  scanf("%s", s);

  char *result = timeConversion(s);

  printf("%s\n", result);

  return 0;
}
