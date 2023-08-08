#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("A is the greatest of three numbers");

    }
    else if(b>a&&b>c)
    {
        printf("B is the greatest of three numbers");
    }
    else
    {
        printf("C is the greatest of three numbers");
    }

}
