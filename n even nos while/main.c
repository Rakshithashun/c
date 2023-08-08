#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
}
