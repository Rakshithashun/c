#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter the four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c&&a>d)
            printf("A is the greatest");
    }
    else if(b>c&&b>d)
    {
        printf("B is the greatest");
    }
    else if(c>d)
    {
        printf("C is the greatest");
    }
    else
    {
        printf("D is the greatest");
    }
}
