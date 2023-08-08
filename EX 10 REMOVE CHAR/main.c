#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char c[150];
int i,j;
printf("Enter a string:");
scanf("%s",c);
for(i=0,j=0;c[i]!='\0';i++)
{
    if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))
    {
        c[j]=c[i];
        j++;
    }
}
c[j]='\0';
printf("%s",c);
}
