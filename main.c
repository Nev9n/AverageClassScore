#include <stdio.h>
#include <stdlib.h>

/*This is a program written to take in the midterm and final
grade of a student and output the average*/

int main()
{
    float midtermGrade, finalGrade, average;

    printf("Please enter student's midterm grade: ");
    scanf("%f", &midtermGrade);

    printf("Please enter student's final grade: ");
    scanf("%f", &finalGrade);

    average = (midtermGrade + finalGrade)/2;

    printf("Final grade: %.2f", average);

    return 0;
}
