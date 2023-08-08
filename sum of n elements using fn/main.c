#include <stdio.h>
#include <stdlib.h>

int main()
{
    void sum(int[],int);
    int a[100],n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
}
void sum(int x[],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+x[i];
    }
    printf("%d",s);
return;
}

