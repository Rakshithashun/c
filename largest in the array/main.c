#include <stdio.h>
#include <stdlib.h>

int main()
{
    void large(int[],int);
    int a[100],n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large(a,n);
}
void large(int x[],int n)
{
    int i,max;
    max=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i]>max)
            max=x[i];
    }
    printf("Maximum number is:%d",max);
    return;
}
