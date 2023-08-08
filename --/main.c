#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    b=--a;
    printf("pre decrement:%d\n",b);
    printf("a=%d\n",a);
    b=a--;
    printf("post decrement:%d",b);
}
