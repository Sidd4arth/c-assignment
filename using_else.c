#include<stdio.h>
int main()
{
    int x;
    printf("enter an integer:");
    scanf("%d", &x);
    if(x<50){
        printf("x is less than 50\n");
            }

    else if (x>50)
    {
        printf("x is greater than 50\n");
    }

    else 
    {
        printf("x is equals to 50\n");
    }

    return 0;
}