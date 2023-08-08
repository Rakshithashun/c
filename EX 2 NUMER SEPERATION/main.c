#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1234,b,c,d,e,f,g,h;
    printf("%d\n",a);
    b=a%10;
    printf("%d\,",b);
    c=a/10;
    d=c%10;
    printf("%d\,",d);
    e=c/10;
    f=e%10;
    printf("%d\,",f);
    g=e/10;
    h=g%10;
    printf("%d",h);


}


