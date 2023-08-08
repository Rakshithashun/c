#include <stdio.h>
 int main()
 {
     int a,b,c, max,min;
     printf("Enter three numbers");
     scanf("%d %d %d",&a,&b,&c);
     max =a>b?(a>c?a:c):(b>c?b:c);
     min=a<b?(a<c?a:c):(b<c?b:c);
     printf("The greatest number is %d\n", max);
     printf("The smallest number is %d\n", min);
 }
