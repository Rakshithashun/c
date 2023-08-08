#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;
    printf("Enter the array elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even nos:");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }
    printf("\nOdd nos:");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
            printf("%d\t",a[i]);
    }
    for(i=0;i<10;i++)
        if(a[i]==0)
            printf("\nZero");
}
