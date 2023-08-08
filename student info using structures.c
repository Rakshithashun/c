#include<stdio.h>
struct student
{
    int roll_no;
    char first_name;
    char last_name;
    int adm_no;
    int cls;
    int avg;
};
int main()
{
    int i,n;
    printf("Enter No.of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Student First Name:");
        scanf("%s",&s[i].first_name);
        printf("Enter Student Last Name:");
        scanf("%s",&s[i].last_name);
        printf("Enter Roll Number:");
        scanf("%d",&s[i].roll_no);
        printf("Enter Student Class:");
        scanf("%d",&s[i].cls);
        printf("Enter Student Admission Number:");
        scanf("%d",&s[i].adm_no);
        printf("Enter Student Average:");
        scanf("%d",&s[i].avg);

    }
    for(i=0;i<n;i++)
    {
        printf("%s,%s,%d,%d,%d,%d",s[i].first_name,s[i].last_name,s[i].roll_no,s[i].cls,s[i].adm_no,s[i].avg);
    }
}
