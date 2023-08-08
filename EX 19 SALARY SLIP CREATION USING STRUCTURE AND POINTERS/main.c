#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct salary
    {
       int eno;
       char name[20];
       float basic,ta,hra,it,gross,net;
    };
    struct salary s,*p;
    p=&s;
    printf("Enter employee no:");
    scanf("%d",&p->eno);
    printf("Enter employee name:");
    scanf("%s",p->name);
    printf("Enter basic salary,ta,hra,it:");
    scanf("%f %f %f %f",&p->basic,&p->ta,&p->hra,&p->it);
    p->gross=p->basic+p->ta+p->hra;
    p->net=p->gross-p->it;
    printf("Gross salary is:%f",p->gross);
    printf("Net salary is:%f",p->net);


}
