#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r; float area,circum;
    printf("Enter the radius:");
    scanf("%d",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("Area of circle:%f \n",area);
    printf("Circumference of the circle:%f",circum);
}
