#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0,i,c;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=n%i;
        if(c==0)
            count=count+1;
    }
    if(count==2)
        printf("%d is a prime number",n);
    else if(n==0||n==1)
        printf("It is neither prime nor composite");
    else
        printf("%d is not a prime number",n);
}
