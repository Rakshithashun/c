#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float a,b,c;
    printf("Enter any two numbers:");
    scanf("%f %f",&a,&b);
    printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            c=a+b;
            printf("%f",c);
            break;
        }
    case 2:
        {
            c=a-b;
            printf("%f",c);
            break;
        }
    case 3:
        {
            c=a*b;
            printf("%f",c);
            break;
        }
    case 4:
        {
            c=a/b;
            printf("%f",c);
            break;
        }
    default:
        {
            printf("Invalid");
            break;
        }
    }
}
