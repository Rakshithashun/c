#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int a,b,c;
    printf("Enter the operation ");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        {
            printf("enter the two values");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("%d",c);
            break;
        }
        case '-':
            {
                printf("Enter the two values");
                scanf("%d %d",&a,&b);
                c=a-b;
                printf("%d",c);
                break;
            }
        case '*':
            {
                printf("Enter the two numbers");
                scanf("%d %d",&a,&b);
                c=a*b;
                printf("%d",c);
                break;
            }
        case '/':
            {
                printf("Enter the two numbers");
                scanf("%d %d",&a,&b);
                c=a/b;
                printf("%d",c);
                break;
            }
        case '%':
        {
            printf("Enter the two numbers");
            scanf("%d %d",&a,&b);
            c=a%b;
            printf("%d",c);
            break;
        }
        default:
            {
                printf("Invalid");
                break;
            }
    }
}
