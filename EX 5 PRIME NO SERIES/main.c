#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,c,count=0;
    printf("Enter the range:");
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
        for(i=1;i<=n;i++)
        {
            c=n%i;
            if(c==0)
            {
                 count=count+1;
            }
        }

            if(count==2)
            {
                 printf("%d\n",n);
             }


        count=0;
    }
}

