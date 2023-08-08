#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=172,rev=0,rem,a,b,c;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    c=n%10;
    n/=10;
    printf("Hundreds digit:%d",c);
    printf("\nTens digit:%d",b);
    printf("\nUnits digit:%d",a);
    n=172;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("\nReverse is %d",rev);

}
