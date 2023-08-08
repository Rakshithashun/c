#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,rem,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
      {
            rem = num%i;
            if (rem==0)
                 sum=sum+i;
       }
    if (sum==num)
            printf("%d is a Perfect Number",num);

    else
            printf("%d is not a Perfect Number",num);
}
