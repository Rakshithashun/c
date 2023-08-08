#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[10][10],i,j,n,m;
  printf("Enter the no of rows and columns:");
  scanf("%d %d",&m,&n);
  printf("Enter the matrix:");
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
   for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("%d\t",a[j][i]);
      }
    printf("\n");
  }

}
