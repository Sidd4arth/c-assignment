#include<stdio.h>
int main()
{
    int choice, x, y, z;

    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.EXIT\n");
    printf("enter yourchoice(1/2/3):");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Enter a number:");
        scanf("%d", &x);
         printf("Enter an another numer:");
        scanf("%d", &y);
        x=x+y;
        printf("on addition of there two numbers we get:%d", x);
    }
     if(choice==2)
    {
        printf("Enter a number:");
        scanf("%d", &x);
         printf("Enter an another numer:");
        scanf("%d", &y);
        x=x-y;
        printf("on substraction of there two numbers we get:%d", x);
    }
     if(choice<1 || choice>3)
    {
        printf("Invalid choice");
    }while(choice!=3);
    return 0;
}