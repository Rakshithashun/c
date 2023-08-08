#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,max;
    printf("Enter the array values:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Largest element is:%d",max);
}
