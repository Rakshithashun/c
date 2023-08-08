#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rno[5],m1[5],m2[5],m3[5],m4[5],m5[5],i,total[5];
    int avg[5];
    char name[5][20];
    printf("Enter the names:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",name[i]);
    }
    printf("Enter the roll numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&rno[i]);
    }
    printf("Enter the 5 subject marks:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d %d %d %d %d",&m1[i],&m2[i],&m3[i],&m4[i],&m5[i]);
    }
    for(i=0;i<5;i++)
    {
        total[i]=m1[i]+m2[i]+m3[i]+m4[i]+m5[i];
        printf("%d\n",total[i]);
    }
    for(i=0;i<5;i++)
    {
        avg[i]=total[i]/5;
        printf("average is:%d\n",avg[i]);
    }
    for(i=0;i<5;i++)
    {
        switch(avg[i]/10)
        {
        case 10:
        case 9:
            {
                printf("A grade\n");
                break;
            }
        case 8:
            {
                printf("B grade\n");
                break;
            }
        case 7:
            {
                printf("C grade\n");
                break;
            }
        case 6:
            {
                printf("D grade\n");
                break;
            }
        case 5:
            {
                printf("E grade\n");
                break;
            }
        default:
            {
                printf("Fail\n");
                break;
            }
        }
    }
}
