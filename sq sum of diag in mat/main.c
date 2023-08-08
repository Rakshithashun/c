#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[10][10],r,c,i,j,sum=0;
    printf("Enter no of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                //printf("%d\t",a[i][j]);
                sum=sum+pow(a[i][j],2);
            }
        }
    }
    printf("\n%d",sum);
}
