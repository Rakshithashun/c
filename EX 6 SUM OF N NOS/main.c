#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0,a;
    printf("Enter:\n1.for loop\n2.while loop\n3.do while loop\n");
    scanf("%d",&a);
    printf("Enter the value of n:");
    scanf("%d",&n);
    switch(a)
    {
    case 1:
        {
            for(i=1;i<=n;i++)
                sum=sum+i;
            printf("Sum is:%d",sum);
            break;
        }
    case 2:
        {
            i=1;
            while(i<=n)
            {
                sum=sum+i;
                i++;
            }
            printf("Sum is:%d",sum);
            break;
        }
    case 3:
        {
            i=1;
            do
            {
                sum=sum+i;
                i++;
            }
            while(i<=n);
                printf("Sum is:%d",sum);
                break;
        }
    default:
        {
            printf("Invalid");
            break;
        }
    }
}
