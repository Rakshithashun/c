#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sum=0,n;
   printf("Enter n value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum=sum+i;
       printf("%d\n",i);
   }
   printf("Sum is:%d\n",sum);
   printf("End");

}
