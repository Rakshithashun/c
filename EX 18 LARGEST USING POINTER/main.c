#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,*p,max;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=a;
    max=p[0];
    for(i=0;i<n;i++)
    {
        if(p[i]>max)
            max=p[i];
    }
    printf("The largest number is:%d",max);
}
