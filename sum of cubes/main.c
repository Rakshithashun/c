#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,sum=0,a;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        a=pow(i,3);
        sum=sum+a;
    }
    printf("Sum is:%d",sum);
}
