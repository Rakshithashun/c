#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,max,min,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the values of the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>max)
            max=a[i];
        else if(a[i]<min)
            min=a[i];
    }
    printf("Largest number is:%d\n",max);
    printf("Smallest number is:%d",min);

}
