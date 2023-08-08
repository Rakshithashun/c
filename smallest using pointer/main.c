#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,*p,min;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=a;
    min=p[0];
    for(i=0;i<n;i++)
    {
        if(p[i]<min)
            min=p[i];
    }
    printf("The smallest number is:%d",min);
}
