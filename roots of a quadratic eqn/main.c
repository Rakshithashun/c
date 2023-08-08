#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,det,r1,r2;
    printf("Enter the value of coefficient a,b,c:");
    scanf("%f %f %f", &a, &b, &c);
    det = b*b-4*a*c;
    if (det>0)
    {
       r1 =(-b+sqrt(det))/(2*a);
       r2 = (-b-sqrt(det))/(2*a);
       printf("Root are real\n");
       printf("Value of root1=%.2f and value of root2 = %.2f",r1,r2);
    }
    else if(det==0)
    {
       r1=r2=-b/(2*a);
       printf("Roots are equal");
       printf("\n Value of r1=%.2f and Value of r2=%.2f",r1,r2);

    }
    else
        {
        printf("Not equal");
        }
}
