#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,b,x=0;
    printf("Enter a number:");
    scanf("%d",&a);
    i=a;
    while(a>0)
    {
        b=a%10;
        x=x*10+b;
        printf("%d\n",x);
        a=a/10;
    }
    if(x==i)
        printf("Palindrome");
    else
        printf("Not a palindrome");
    }
