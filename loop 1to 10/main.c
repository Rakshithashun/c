#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   printf("For loop:");
   for(i=1;i<=10;i++)
   {
       printf("%d\t",i);
   }
   printf("\nWhile loop:");
   i=1;
   while(i<=10)
   {
       printf("%d\t",i);
       i++;
   }
   printf("\n do while:");
   i=1;
   do
   {
     printf("%d\t",i);
     i++;
   }
   while(i<=10);
}
