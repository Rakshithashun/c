#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,a,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d\n",i);
        a=pow(i,3);
        sum=sum+a;
        i++;
    }
    while(i<=n);
    printf("Sum is:%d",sum);
}
