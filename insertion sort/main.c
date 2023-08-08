#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(a[j]>temp&&j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
