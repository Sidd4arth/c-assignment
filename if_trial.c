#include<stdio.h>
int main()
{
    int x;
    printf("enter an interger:");
    scanf("%d", &x);

    if (x<50){
        printf("x is less than 50");
    }
    
    if(x==50){
            printf("x is equal to 50");
        }
    
    if(x>50)
    {
        printf("x is greater than 50");
    }
    return 0;
}