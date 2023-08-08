#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d\n",i);
        sum=sum+(i*i);
        i++;
    }
    while(i<=n);
    printf("Sum is:%d",sum);
}
