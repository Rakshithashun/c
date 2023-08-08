#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a year:");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("leap year");
    }
    else if(a%4<=3)
    {
        printf("not leap year");
    }
    else
    {
        printf("Invalid");
    }
}
