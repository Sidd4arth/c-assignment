#include<stdio.h>
int main()
{
    int x, y;
    int *z;
    x=30;
    z=&x;
    *x=700;
    printf("%d\n", *z);
    z=&y;
    z=900;
    printf("%d\n", y);
    return 0;
}
