#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,max,min;
    printf("Enter the array values:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Largest element is:%d",max);
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("\nSmallest element is:%d",min);

}
