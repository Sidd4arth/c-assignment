#include<stdio.h>
int main()
{
    int x, y;
    printf("enter value of first interger:");
    scanf("%d", &x);
    printf("enter value of secound interger:");
    scanf("%d", &y);
    x=x+y;
    printf("sum of two integers= %d", x);
    return 0;
}