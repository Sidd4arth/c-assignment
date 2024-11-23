//accept 10 numbers & print total of those numbers. using while
#include<stdio.h>
int main()
{
    int x[10], y, t;
    y=0;
    while(y<=9)
    {
        printf("Enter a number:");
        scanf("%d", &x[y]);
        y++;
    }
    y=0;
    t=0;
    while(y<=9)
    {
        t=t+x[y];
        y++;
    }
    printf("Total is %d", t);
    return 0;
}