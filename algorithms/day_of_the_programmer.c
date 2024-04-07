#include <stdio.h>
#include <stdlib.h>
char *dayOfProgrammer(int year)
{
  if (year == 1918)
    return "26.09.1918";

  int is_leap_year = ((year <= 1919)
                          ? (year % 4 == 0)
                          : (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)));

  static char date[20];
  sprintf(date, "%s%d", (is_leap_year ? "12.09." : "13.09."), year);

  return date;
}

int main()
{
  int year;

  scanf("%d", &year);

  char *result = dayOfProgrammer(year);

  printf("%s\n", result);

  return 0;
}
