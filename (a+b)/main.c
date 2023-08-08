#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    c=(a*a)+2*a*b+(b*b);
    printf("(a+b)^2 is:%d\n",c);
    c=(a*a)-2*a*b+(b*b);
    printf("(a-b)^2 is:%d",c);
}
