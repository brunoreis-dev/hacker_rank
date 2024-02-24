#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(int candles_count, int *candles)
{
  int biggest_number = 0;
  int count = 0;

  for (int i = 0; i < candles_count; i++)
  {
    if (biggest_number < candles[i])
    {
      biggest_number = candles[i];
      count = 1;
    }
    else if (biggest_number == candles[i])
    {
      count += 1;
    }
  }

  return count;
}

int main()
{

  int candles_count;
  scanf("%d", &candles_count);

  int *candles = malloc(candles_count * sizeof(int));

  for (int i = 0; i < candles_count; i++)
  {
    scanf("%d", &candles[i]);
  }

  int result = birthdayCakeCandles(candles_count, candles);

  printf("%d", result);

  return 0;
}
