#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=172,rem,rev=0,b,c,d;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    printf("Hundred's place:%d",d);
    printf("\nTen's place:%d",c);
    printf("\nOne's place:%d",b);
    a=172;
    while(a!=0)
    {
    rem=a%10;
    rev=rev*10+rem;
    a/=10;
    }
    printf("\nReverse of the number is:%d",rev);

}
