#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int a,b,c;
    printf("Enter the operation");
    scanf("%c",&op);
    if(op=='+')
    {
        printf("Enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d",c);
    }
    else if(op=='-')
    {
        printf("Enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("%d",c);
    }
    else if(op=='*')
    {
        printf("Enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("%d",c);
    }
    else if(op=='/')
    {
        printf("Enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("%d",c);
    }
    else if(op=='%')
    {
        printf("Enter the two numbers");
        scanf("%d %d",&a,&b);
        c=a%b;
        printf("%d",c);
    }
    else
    {
        printf("Invalid");
    }
}
