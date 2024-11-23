#include<stdio.h>
int main()
{   
    int x[10], y, largest;
    for(y=0;y<=9;y++)
    {
        printf("enter a number:");
        scanf("%d", &x[y]);
    }
    largest=x[0];
    for(y=1;y<=9;y++)
    {
        if(x[y]>largest)
        {
            largest=x[y];
        }
    }
    printf("largest is %d\n", largest);
    return 0;
}