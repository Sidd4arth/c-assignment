//area of rectangle
#include<stdio.h>
int main()
{
    float l, b, area;
    printf("enter length of rectangle:");
    scanf("%f",&l);
    printf("enter breadth of reactange:");
    scanf("%f",&b);
    area=l*b;
    printf("Area of Rectangle = %.2f ", area);
    return 0;
}
