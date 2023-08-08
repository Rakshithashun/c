#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,l,r,p;
    printf("Enter the total no of heads and legs:");
    scanf("%d %d",&h,&l);
    r=l/4;
    p=l/2;
    printf("No of rabbits:%d",r);
    printf("\n%d",p);
}
