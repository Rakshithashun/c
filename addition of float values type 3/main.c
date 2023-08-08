#include <stdio.h>
#include <stdlib.h>

int main()
{
    void add(int,float,int);
    int a=2,c=4;
    float b=3.2;
    add(a,b,c);
}
void add(int x,float y,int z)
{
    float w;
    w=x+y+z;
    printf("%f",w);
    return;
}
