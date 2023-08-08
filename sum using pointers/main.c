#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[50],n,i,sum=0,*p;
   printf("Enter the range:");
   scanf("%d",&n);
   printf("Enter the array elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   p=a;
   for(i=0;i<n;i++)
   {
       sum=sum+p[i];
   }
   printf("Sum is:%d",sum);
}
