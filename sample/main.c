#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[20],b[20];
   int c,d;
   printf("Enter the first string:");
   scanf("%s",a);
   printf("Enter the second string:");
   scanf("%s",b);
   if(strcmp(a,b)==0)
   {
       printf("The given strings are equal\n");
   }
   else
    printf("Not equal\n");
   c=strlen(a);
   d=strlen(b);
   printf("%d %d",c,d);

}
