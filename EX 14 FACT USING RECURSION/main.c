#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact(int);
    int n,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=fact(n);
    printf("Factorial is:%d",a);
}
int fact(int x)
{
    if(x>1)
        return(x*fact(x-1));
    else
        return 1;
}
