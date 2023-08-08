#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
        printf("Position of %c is %d",ch,ch-96);
    else if(ch>=65&&ch<=90)
        printf("Position of %c is %d",ch,ch-64);
}
