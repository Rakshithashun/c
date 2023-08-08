#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    int i;
    printf("Enter a string:");
    scanf("%s",a);
    for(i=0;i<=20;i++)
   {
       if(a[i]>=97&&a[i]<=122||a[i]>=65&&a[i]<=90)
            printf("\nAlphabet:%c\n",a[i]);
       else if(a[i]>=49&&a[i]<=57)
            printf("\nNumber:%c\n",a[i]);
       else
            printf("\nSpecial characters:%c\n",a[i]);
   }

}
