#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a++;
    printf("post increment:%d\n",b);
    printf("a=%d\n",a);
    b=++a;
    printf("pre increment:%d",b);
}
