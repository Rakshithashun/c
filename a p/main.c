#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h,perimeter;
    float circum,area;
    printf("Enter the side of a square:");
    scanf("%d",&a);

    perimeter=4*a;
    area=a*a;
    printf("Perimeter of a square:%d\n",perimeter);
    printf("Area of a square:%f\n",area);

    printf("Enter the length and breadth of a rectangle:");
    scanf("%d %d",&a,&b);
    perimeter=2*(a+b);
    area=a*b;
    printf("Perimeter of a rectangle:%d\n",perimeter);
    printf("Area of a rectangle:%f\n",area);

    printf("Enter base and height of triangle:");
    scanf("%d %d",&a,&h);
    area=0.5*a*h;
    printf("Area of a triangle:%f\n",area);

}
