#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,bs,da,ta,hra,gross,net;
    float it;
    char name[20];
    printf("Enter employee name and number:");
    scanf("%s %d",name,&no);
    printf("Enter basic salary:");
    scanf("%d",&bs);
    printf("Enter DA:");
    scanf("%d",&da);
    printf("Enter TA:");
    scanf("%d",&ta);
    printf("Enter HRA:");
    scanf("%d",&hra);
    it=0.15*bs;
    bs=bs-it;
    printf("Basic salary after reduction of IT is:%d\n",bs);
    gross=bs+da+ta+hra+it;
    printf("Gross salary:%d\n",gross);
    net=bs+da+ta+hra;
    printf("Net salary:%d",net);
}
