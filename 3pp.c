#include<stdio.h>

int main()
{
    int spaces, stars, x, y;
    int rows = 5;

    x = 1;
    stars = 1; 
    spaces = rows - 1;
    while(x <= rows) 
    {
        y = 1;
        while(y <= spaces)
        {
            printf(" ");
            y++;
        }
        y = 1;
        while(y <= stars)
        {
            printf("*");
            y++;
        }
        printf("\n");
        spaces--; 
        stars += 2;
        x++;
    }
    return 0;
}
