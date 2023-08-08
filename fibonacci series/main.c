#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=-1,n2=1,n3,a,i;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    for(i=-1;i<=a;i++)
    {
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }

}
