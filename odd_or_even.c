#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number to check odd/even:");
    scanf("%d", &x);
    if(x %2 == 0)
      printf("x is an even number");
    else
        printf("x is an odd number");
    return 0;
}
