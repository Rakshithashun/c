#include <stdio.h>
int main()
{
    int a[100],i,size,tosearch;


    printf("Enter the size:");
    scanf("%d",&size);

    printf("Enter the values of an array:");

    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter search element:");
    scanf("%d",&tosearch);
    for(i=0;i<size;i++)
    {
        if(a[i]==tosearch)
            printf("Search element %d found:",a[i]);
    }
}

