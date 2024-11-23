#include<stdio.h>
#include <stdlib.h>

float sub1, sub2, sub3, sub4, sub5, sum, percentage;
int grace;
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
    grace=0;
    if(sub1>=30 && sub1<=32){
        grace=33-sub1;
        sub1=33;
        printf("Result = Pass with Grace in sub1 with %d marks\n",grace);
    }
    if(sub2>=30 && sub2<=32){
        grace=33-sub2;
        sub2=33;
        printf("Result = Pass with Grace in sub2 with %d marks\n",grace);
    }
    if(sub3>=30 && sub3<=32){
        grace=33-sub3;
        sub3=33;
        printf("Result = Pass with Grace in sub3 with %d marks\n",grace);
    }
    if(sub4>=30 && sub4<=32){
        grace=33-sub4;
        sub4=33;
        printf("Result = Pass with Grace in sub4 with %d marks\n",grace);
    }
    if(sub5>=30 && sub5<=32){
        grace=33-sub5;
        sub5=33;
        printf("Result = Pass with Grace in sub5 with %d marks\n",grace);
    }
    if (grace==0){
        printf("Result = supplementary\n");
    }

    
    printf("Total marks out of 500 = %.2f\n", sum);
    percentage = ((float)sum / 500) * 100;
    printf("Percentage scored = %.2f%%\n", percentage);
    if (sub1 < 33) fail_count++;
    if (sub2 < 33) fail_count++;
    if (sub3 < 33) fail_count++;
    if (sub4 < 33) fail_count++;
    if (sub5 < 33) fail_count++;
    if (fail_count > 1) {
        printf("Result = You Failed\n");
    }
    else if (fail_count == 1) {
        printf("Result = You have a Supplementary in one subject\n");
    }
    else {
        if (percentage >= 60 && percentage <= 100) {
            printf("Result = You Passed with First Division\n");
        }
        else if (percentage >= 45 && percentage < 60) {
            printf("Result = You Passed with Second Division\n");
        }
        else if (percentage >= 33 && percentage < 45) {
            printf("Result = You Passed with Third Division\n");
        }
    }
    return 0;
}
