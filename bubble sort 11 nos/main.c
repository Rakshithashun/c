#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[11]={5,85,97,43,33,51,63,38,27,4,71},i,j,temp;
    for(i=0;i<11;i++)
    {
        for (j=0;j<10;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for (i=0;i<11;i++)
    {
        printf("%d\t",a[i]);
    }
}
