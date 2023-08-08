#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==1)
        printf("weird");
    else if(n%2==0&&n>=2&&n<=5)
        printf("not weird");
    else if(n%2==0&&n>=6&&n<=20)
        printf("weird");
    else if(n%2==0&&n>20)
        printf("not weird");
}
