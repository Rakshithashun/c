#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,h,area;
    printf("Enter the base and height:");
    scanf("%d %d",&b,&h);
    area=0.5*b*h;
    printf("Area of a triangle is:%d",area);
    return 0;
}
