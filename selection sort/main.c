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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
