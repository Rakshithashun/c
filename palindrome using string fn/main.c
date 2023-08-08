#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20],i,b[20];
    printf("Enter a string:");
    scanf("%s",a);
    strcpy(b,a);
    //printf("%s\n",b);
    strrev(a);
    //printf("%s\n",a);
    strcmp(a,b)==0;
        printf("palindrome");

       // printf("Not a palindrome");

}
