#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,large;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    large=(a>b)?(a):(b);
    printf("Largest of %d and %d is %d",a,b,large);
}
