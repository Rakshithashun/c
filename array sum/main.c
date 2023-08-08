#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[100],sum=0,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the values of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of array is:%d",sum);

}
