#include<stdio.h>

int main()
{
    int x, y = 2, z = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    while (y <= (x - 1))  
    {
    
        if (x % y == 0)  
        {
            z = 1; 
            break;  
        }
        y++;  
    }

    if (z == 0)
    {
        printf("%d is a prime number\n", x);
    }
    else
    {
        printf("%d is not a prime number\n", x);
    }

    return 0;
}