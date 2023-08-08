#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct salary
    {
       int eno,ta,hra,it,net,gross;
       char name[10];
    };
    struct salary *p,s[100];
    int i,n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    p=&s;
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the employee:");
        scanf("%s",p->name);
        printf("Enter the employee number:");
        scanf("%d",&p->eno);
        printf("Enter the ta hra and it:");
        scanf("%d %d %d",&p->ta,&p->hra,&p->it);
        p->gross=p->ta+p->hra+p->it;
        p->net=p->gross-p->it;
        printf("Gross salary:%d",p->gross);
        printf("Net salary:%d",p->net);
    }



}
