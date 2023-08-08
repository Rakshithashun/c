#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],b[2][2],c[2][2],d[2][2],e[2][2],i,j,k;
    printf("Enter a matrix values:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter b matrix values:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Added matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t",c[i][j]);
        }
    }
    printf("\nSubtracted matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",d[i][j]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            e[i][j]=0;
            for(k=0;k<2;k++)
            {
                e[i][j]=e[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\nMultiplied matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",e[i][j]);
        }
    }
}

