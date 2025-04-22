#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int min;
    printf("Give 10 values\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    min=9999;
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum value is %d\n");
    return 0;
}