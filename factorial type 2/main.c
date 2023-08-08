#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,fact();
    x=fact();
    printf("%d",x);
}
int fact()
{
    int i,n,f=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
