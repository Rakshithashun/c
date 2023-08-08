  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1234,b,c,d,e,f,g,h;
    printf("%d\n",a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=e%10;
    g=e/10;
    h=g%10;
    printf("%d\,",h);
    printf("%d\,",f);
    printf("%d\,",d);
    printf("%d",b);


}
