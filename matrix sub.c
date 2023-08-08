#include<stdio.h>
int main()

{
    int a[100][100],b[100][100],c[100][100],i,j,row,col;
    printf("Enter the dimensions of the array\n");
    printf("For row\n");
    scanf("%d",&row);
    printf("For column\n");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        printf("Enter the elements of the matrix at position a[%d][%d]\n",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        printf("Enter the elements of the matrix at position b[%d][%d]\n",i,j);
        scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];


        }
    }
    printf("The added matrix value is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("c[%d][%d]%d\n",i,j,c[i][j]);
        }

    }
}







