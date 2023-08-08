#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,rem;
    printf("Enter a 5 digit number:");
    scanf("%d",&a);
    while(a>0)
       {
           rem=a%10;
           sum=sum+rem;
           a=a/10;
       }
       printf("Sum of the digits is:%d",sum);
}
