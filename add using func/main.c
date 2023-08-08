#include <stdio.h>
#include <stdlib.h>
int main()
{
    int add();
    add();
}
int add()
{
    int a=10,b=20,c;
    c=a+b;
    printf("%d",c);
    return;
}
