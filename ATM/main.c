#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,bal;
    printf("Enter an amount:");
    scanf("%d",&a);
    bal=5000;
    if(a<=bal)
    {
        printf("Money can be withdrawn");
    }
    else
    {
        printf("Money cannot be withdrawn");
    }
}
