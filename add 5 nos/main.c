#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sum=0;
   for(i=1;i<=5;i++)
   {
       sum=sum+i;
       printf("%d\n",i);
   }
   printf("Sum is:%d\n",sum);
   printf("End");

}
