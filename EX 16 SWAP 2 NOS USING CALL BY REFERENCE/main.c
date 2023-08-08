#include <stdio.h>
#include <stdlib.h>

int main()
{
    void swap(int*,int*);
    int a=5,b=10;
    printf("Before Swapping:%d %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping:%d %d",a,b);
}
void swap(int*p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return;
}
