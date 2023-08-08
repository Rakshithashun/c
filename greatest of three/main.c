
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is the greatest of three numbers");
    }

    else if(b>a&&b>c)
    {
        printf("b is the greatest of three numbers");
    }
    else
    {
        printf("c is the greatest of three numbers");
    }
}
