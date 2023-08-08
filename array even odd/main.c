#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The odd nos are:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
           printf("%d\n",a[i]);
    }
    printf("The even nos are:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0&&a[i]!=0)
            printf("%d\n",a[i]);
    }
    printf("Neither even nor odd");
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            printf("\n%d",a[i]);
    }


}
