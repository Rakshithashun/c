#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eno[5],basic[5],it[5],ta[5],gross[5],net[5],i;
    char name[5][20];
    printf("Enter the 5 employees no:");
    for(i=0;i<5;i++)
    {
      scanf("%d",&eno[i]);
    }
    printf("Enter the employee name:");
    for(i=0;i<5;i++)
    {
      scanf("%s",name[i]);
    }
    printf("Enter the basic salary:");
    for(i=0;i<5;i++)
    {
      scanf("%d",&basic[i]);
    }
    printf("Enter the travel allowance:");
    for(i=0;i<5;i++)
    {
      scanf("%d",&ta[i]);
    }
    printf("Enter the income tax:");
    for(i=0;i<5;i++)
    {
      scanf("%d",&it[i]);
    }
    for(i=0;i<5;i++)
    {
        gross[i]=basic[i]+ta[i];
        printf("Gross salary is:%d\n",gross[i]);
        net[i]=gross[i]-it[i];
        printf("Net salary is:%d\n",net[i]);
    }
}
