#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}
