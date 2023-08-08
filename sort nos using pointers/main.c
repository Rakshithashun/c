#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,flag,*p,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element:");
    scanf("%d",&flag);
    p=a;
    for(i=0;i<n;i++)
    {
        if(*p+i==flag)
            printf("Search element found:");



    }
}
