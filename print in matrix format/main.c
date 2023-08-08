#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a[10][10],i,j;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&m,&n);
    printf("Enter the values:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
