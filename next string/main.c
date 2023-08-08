#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a)
    {
        printf("%c and %d",a+1,a+1);
    }
}
