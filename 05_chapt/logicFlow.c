#include <stdio.h>

#define calcAbsValue

int main(void)
{
    // calc absolute value
    int number;
    printf("Enter your number: \n");
    scanf("%i", &number);
    if (number < 0)
    {
        number = -number;
    }
    printf("The absolute value is %i\n\n", number);

    // calc avg grade
    int numberOfGrades;
    int failureCount = 0;
    double gradeTotal = 0;
    double grade;
    double average;
    printf("How many grades will you be entering? \n");
    scanf("%i", &numberOfGrades);

    for (int i = 0; i < numberOfGrades; i++)
    {
        printf("Enter the grave value: \n");
        scanf("%lf", &grade);

        gradeTotal = gradeTotal + grade;
        if (grade < 65)
        {
            ++failureCount;
        }
    }
    average = (double)gradeTotal / numberOfGrades;
    printf("\nGrade average %.3lf\n", average);
    printf("Number of failures = %i\n", failureCount);

    return 0;
}
