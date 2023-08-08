#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,large();
    x=large();
    printf("%d",x);
}
int large()
{
    int n,a[100],i,j,b;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]>a[j])
                b=a[i];
            else
                b=a[j];
        }
    }
    return(b);
}
