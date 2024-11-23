#include<stdio.h>
int main()
{   
    int stars=1, lines=5, x=1, y;
    while(x<=lines)
    {
        y=1;
        while(y<=stars)
        {
            printf("*");
            y++;
        }
        printf("\n");
        stars++;
        x++;
    }
    
    return 0;
}