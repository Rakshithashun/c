#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,large();
    x=large();
    printf("The largest number is:%d",x);
}
int large()
{
    int a,b,c,l;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
        l=a;
    else if(b>c&&b>a)
        l=b;
    else
        l=c;
    return(l);

}
