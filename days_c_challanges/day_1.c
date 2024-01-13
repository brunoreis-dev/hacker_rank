#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int value;
    double float_value;
    char text[100];

    // Read and save an integer, double, and String to your variables.
    scanf("%d", &value);
    scanf("%lf", &float_value);
    scanf(" %[^\n]s", text);

    // Print the sum of both integer variables on a new line.
    int sum = value + i;
    printf("%d\n", sum);

    // Print the sum of the double variables on a new line.
    double doubleSum = float_value + d;
    printf("%.1f\n", doubleSum);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s", text);
    return 0;
}
