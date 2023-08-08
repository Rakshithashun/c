#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;
    printf("Enter the temperature in centigrade:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The temperature in fahrenheit:%f\n",f);
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("The temperature in centigrade:%f",c);

}
