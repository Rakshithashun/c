#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter a mark:");
    scanf("%d",&grade);
    switch(grade/10)
    {
    case 10:
    case 9:
        {
            printf("A grade");
            break;
        }
    case 8:
        {
            printf("B grade");
            break;
        }
    case 7:
        {
            printf("C grade");
            break;
        }
    case 6:
        {
            printf("D grade");
            break;
        }
    case 5:
        {
            printf("E grade");
            break;
        }
    default:
        {
            printf("Fail");
        }
    }
}
