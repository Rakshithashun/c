#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a letter:");
    scanf("%c",&c);
    printf("ASCII value of %c is %d",c,c);
    printf("\nUnit digit is:%d",c%10);
}
