#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
        printf("Eligile to vote");
    else
        printf("Not eligible to vote");

}
