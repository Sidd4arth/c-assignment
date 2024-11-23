//accept 10 numbers & print total of those numbers. using for
#include<stdio.h>
int main()
{
    int x[10], i, t=0;
    i=0;
    for(i=0; i<=9;i++)
    {
        printf("Enter a number:");
        scanf("%d", &x[i]);
    }
    for(i=0; i<=9; i++)
    {
        t=t+x[i];
    }
    printf("Total is %d", t);
    return 0;
} 