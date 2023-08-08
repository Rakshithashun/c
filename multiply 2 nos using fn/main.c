#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   int mul();
   x=mul();
   printf("%d",x);
}
int mul()
{
    int a=10,b=3,c;
    c=a*b;
    return(c);
}
