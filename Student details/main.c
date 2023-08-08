#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        int rno,m1,m2,m3,total;
        float avg;
        char name[20];
    }s[100];
    int n,i;
    printf("Enter the no of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of student %d:",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter the rno of student %d:",i+1);
        scanf("%d",&s[i].rno);
        printf("\nEnter 3 subject marks:");
        scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].avg=s[i].total/3;
        printf("Total of student %d is %d",i+1,s[i].total);
        printf("\n Average of student %d is %f",i+1,s[i].avg);
        if(s[i].avg>=90)
            printf("\n S Grade");
        else if(s[i].avg>=80&&s[i].avg<90)
            printf("\n A Grade");
        else if(s[i].avg>=70&&s[i].avg<80)
            printf("\n B Grade");
        else if(s[i].avg>=60&&s[i].avg<70)
            printf("\n C Grade");
        else if(s[i].avg>=50&&s[i].avg<60)
            printf("\n D Grade");
        else
            printf("\n FAIL");

    }
}
