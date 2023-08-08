#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is:%d\n",c);
    c=a-b;
    printf("Difference is:%d\n",c);
    c=a*b;
    printf("Product is:%d\n",c);
    c=a/b;
    printf("Quotient is:%d\n",c);
    c=a%b;
    printf("Remainder is:%d",c);
}
