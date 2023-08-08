#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,fact=1,n;
   printf("Enter n value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   printf("Factorial is:%d\n",fact);


}
