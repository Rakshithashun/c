#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter two points:");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
        printf("First quadrant");
    else if(x<0&&y>0)
        printf("Second quadrant");
    else if(x<0&&y<0)
        printf("Third quadrant");
    else if(x>0&&y<0)
        printf("Fourth quadrant");
    else if(x==0&&y==0)
        printf("Origin");
    else if(x==0&&(y>0||y<0))
            printf("It lies in y axis");
    else
        printf("It lies in x axis");
}
