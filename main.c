#include <stdio.h>
#include <stdlib.h>

/*This is a program written to calculate the midterm and final
grade of a student and output the average*/

int main()
{
    float midtermGrade, finalGrade, average;

    printf("Please enter student's midterm grade: ");
    scanf("%f", &midtermGrade);

    printf("Please enter student's final grade: ");
    scanf("%f", &finalGrade);

    average = (midtermGrade + finalGrade)/2;

    printf("Final grade: %.2f\n\n", average);

    if (average>60){
        printf("Congratulations you passed!");
    }
    else{
        printf("Sorry, you didn't pass. Try to spend more time studying!\n");
    }

    return 0;

}
