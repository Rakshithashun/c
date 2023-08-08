#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("Sum is:%d",sum);
}
