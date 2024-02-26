#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int roundGrade(int grade)
{
  return ((grade + 4) / 5) * 5;
}

int *gradingStudents(int grades_count, int *grades)
{
  int *rounded_grades = malloc(grades_count * sizeof(int));

  for (int i = 0; i < grades_count; i++)
  {
    int grade = grades[i];

    if (roundGrade(grade) - grade < 3 && grade >= 36)
    {
      rounded_grades[i] = roundGrade(grade);
    }
    else
    {
      rounded_grades[i] = grade;
    }
  }

  return rounded_grades;
}

int main()
{

  int grades_count;
  scanf("%d", &grades_count);

  int *grades = malloc(grades_count * sizeof(int));

  for (int i = 0; i < grades_count; i++)
  {
    scanf("%d", &grades[i]);
  }

  int *result = gradingStudents(grades_count, grades);

  for (int i = 0; i < grades_count; i++)
  {
    printf("%d\n", *(result + i));
  }

  return 0;
}
