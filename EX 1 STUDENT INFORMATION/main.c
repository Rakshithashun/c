#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rno,s1,s2,s3,s4,s5,total;float average;
    char name[20];
    printf("enter rno and name");
    scanf("%d",&rno);
    scanf("%s",name);
    printf("enter 5 subject marks:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    average=(s1+s2+s3+s4+s5)/5;
    printf("Total marks:%d \n",total);
    printf("average:%f",average);
}

