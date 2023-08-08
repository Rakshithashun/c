#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}
