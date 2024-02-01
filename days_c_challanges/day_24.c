#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int day_returned, month_returned, year_returned;
  int day_due, month_due, year_due;

  scanf("%d %d %d", &day_returned, &month_returned, &year_returned);
  scanf("%d %d %d", &day_due, &month_due, &year_due);

  int fine = 0;

  if (year_returned > year_due)
  {
    fine = 10000;
  }
  else if (year_returned == year_due && month_returned > month_due)
  {
    fine = 500 * (month_returned - month_due);
  }
  else if (year_returned == year_due && month_returned == month_due && day_returned > day_due)
  {
    fine = 15 * (day_returned - day_due);
  }

  printf("%d\n", fine);

  return 0;
}
