#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
        printf("a is the smallest");
    else if(b<c&&b<a)
        printf("b is the smallest");
    else
        printf("c is the smallest");
}
