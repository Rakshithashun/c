#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,min;
    printf("Enter the array values:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Minimum value:%d",min);

}
