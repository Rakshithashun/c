#include <stdio.h>
#include <math.h>
int main()
{
   int num,i,rem,n=0,result=0;

   printf("Enter an integer:");
   scanf("%d",&num);

   for (i=num;i!=0;n++)
       i/=10;

   for (i=num;i!=0;i/= 10)
    {
       rem=i%10;

       result+=pow(rem,n);
    }

   if (result==num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
}
