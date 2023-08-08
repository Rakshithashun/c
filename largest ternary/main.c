#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    if(max==a)
    {
        printf("%d is the largest",a);
    }
    else
        printf("%d is the largest",b);
}
