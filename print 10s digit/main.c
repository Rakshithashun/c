#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;
    printf("Enter a number:");
    scanf("%d",&n);
    n/=10;
    c=n%10;
    printf("%d",c);
}
