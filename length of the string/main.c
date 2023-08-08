#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i,count=0;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
     printf("Length of the string:%d",count);
}
