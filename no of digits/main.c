#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,count=0;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        b/=10;
        count++;
    }
    printf("No of digits is:%d",count);


}
