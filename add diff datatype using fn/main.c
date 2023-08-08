#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x;
   float add();
   x=add();
   printf("%f",x);
}
float add()
{
    int a=2,c=4;
    float b=3.2,d;
    d=a+b+c;
    return(d);
}
