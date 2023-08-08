#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter student mark ");
    scanf("%d",&grade);
    if(grade>90)
    {
        printf("A grade");
    }
    else if(grade>75&&grade<=90)
    {
        printf("B grade");
    }
    else if(grade>60&&grade<=75)
    {
        printf("C grade");
    }
    else if(grade>50&&grade<=60)
    {
        printf("D grade");
    }

    else
    {
        printf("Fail");
    }
}
