#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,total,product;
    float avg;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    total=a+b+c;
    product=a*b*c;
    avg=(a+b+c)/3;
    printf("Sum is:%d \n",total);
    printf("Product is:%d\n",product);
    printf("Average of three numbers is:%f",avg);
    return 0;

}
