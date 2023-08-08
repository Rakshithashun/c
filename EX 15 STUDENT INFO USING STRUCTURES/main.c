#include<stdio.h>
int main()
{
    struct student
    {
        int rno;
        char name[10];
        int m1,m2,m3,total;
        float avg;
    }s[100];
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("\nEnter the roll no,name and 3 subject marks of the student %d:",i);
      scanf("%d",&s[i].rno);
      scanf("%s",s[i].name);
      scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
      s[i].total=s[i].m1+s[i].m2+s[i].m3;
      s[i].avg=s[i].total/3;
      printf("Total is:%d",s[i].total);
      printf("\nAverage is:%f",s[i].avg);
      if(s[i].avg>=90)
        printf("\nS Grade");
    else if(s[i].avg>=80&&s[i].avg<90)
        printf("\nA Grade");
    else if(s[i].avg>=70&&s[i].avg<80)
        printf("\nB Grade");
    else if(s[i].avg>=60&&s[i].avg<70)
        printf("\nC Grade");
    else if(s[i].avg>=50&&s[i].avg<60)
        printf("\nD Grade");
    else
        printf("\nFail");

    }
}
