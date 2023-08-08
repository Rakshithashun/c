#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem,base=1,bin=0;
    printf("Enter a decimal number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        bin=bin+rem*base;
        base=base*10;
    }
    printf("Binary value is:%d",bin);

}
