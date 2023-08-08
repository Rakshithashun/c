#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        sum=sum+i;
        i=i+2;
    }
     printf("Sum is:%d",sum);
}
