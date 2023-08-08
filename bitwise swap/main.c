#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b;
     printf("Enter the two numbers:");
     scanf("%d %d",&a,&b);
     printf("a=%d\n",a);
     printf("b=%d\n",b);
     a=a^b;
     b=a^b;
     a=a^b;
     printf("The two numbers after swapping\n");
     printf("a=%d\n",a);
     printf("b=%d\n",b);


}
