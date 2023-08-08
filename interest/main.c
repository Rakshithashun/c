#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p,n,r,t;
    float a,ci,pw;
    printf("Enter the principal amount,no of years and rate of interest:");
    scanf("%d %d %d",&p,&t,&r);
    a=(p*t*r)/100;
    printf("Simple interest:%f\n",a);
    printf("Enter the principal amount,no of years,rate of interest and frequency:");
    scanf("%d %d %d %d",&p,&t,&r,&n);
    ci=1+(r/n);
    pw=n*t;
    a=p*pow(ci,pw)-p;
    printf("Compound interest:%f",a);

}
