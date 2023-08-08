#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,*p,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    printf("Sum is:%d",sum);
}
