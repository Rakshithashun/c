#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact();
    fact();
}
int fact()
{
    int a=1,i,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
     printf("%d",a);
     //return;
}
