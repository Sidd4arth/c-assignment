#include<stdio.h>
#include <stdlib.h>

float sub1, sub2, sub3, sub4, sub5, sum, percentage;
int main()
{
    int fail_count = 0;
    printf("Enter marks of 1st subject out of 100: ");
    scanf("%f", &sub1);
    printf("Enter marks of 2nd subject out of 100: ");
    scanf("%f", &sub2);
    printf("Enter marks of 3rd subject out of 100: ");
    scanf("%f", &sub3);
    printf("Enter marks of 4th subject out of 100: ");
    scanf("%f", &sub4);
    printf("Enter marks of 5th subject out of 100: ");
    scanf("%f", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    if (sum > 500) {
        printf("Invalid marks entered\n");
        exit(0);
    }
    printf("Total marks out of 500 = %.2f\n", sum);
    percentage = ((float)sum / 500) * 100;
    printf("Percentage scored = %.2f\n", percentage);
    if (sub1 < 33) fail_count++;
    if (sub2 < 33) fail_count++;
    if (sub3 < 33) fail_count++;
    if (sub4 < 33) fail_count++;
    if (sub5 < 33) fail_count++;
    if (fail_count > 1) {
        printf("You Failed\n");
    }
    else if (fail_count == 1) {
        printf("You have a Supplementary in one subject\n");
    }
    else {
        if (percentage >= 60 && percentage <= 100) {
            printf("You Passed with First Division\n");
        }
        else if (percentage >= 45 && percentage < 60) {
            printf("You Passed with Second Division\n");
        }
        else if (percentage >= 33 && percentage < 45) {
            printf("You Passed with Third Division\n");
        }
    }
    return 0;
}
