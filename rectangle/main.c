#include <stdio.h>
#include <stdlib.h>

int main()
{
   int l,b,area,perimeter;
   printf("Enter the length and breadth:");
   scanf("%d %d",&l,&b);
   area=l*b;
   perimeter=2*(l+b);
   printf("The area of rectangle is:%d \n",area);
   printf("The perimeter of rectangle is:%d",perimeter);
   return 0;
}
