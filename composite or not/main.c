#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,count=0,a;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=n%i;
        if(a==0)
           count=count+1;
    }

    if(count>2)
    {
        printf("The given number is composite");
    }
    else if(n==0||n==1)
           {
               printf("The number is neither prime nor composite");
           }
    else
    {
        printf("The given number is prime");
    }

}
