#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, k, N;
  printf("Enter N: ");
  scanf("%d", &N);
  k = 1;
  for(i=1; i<=N; i++)
  {
    for(j=1; j<=i; j++, k++)
     {
       printf("%3d", k);
     }
    printf("\n");
  }
}
