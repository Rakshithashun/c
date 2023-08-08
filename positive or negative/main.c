#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a<0)
        printf("The given number is negative");
    else if(a>0)
        printf("The given number is positive");
    else
        printf("The given number is equal to zero");
}
