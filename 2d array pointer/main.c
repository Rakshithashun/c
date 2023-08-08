#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name[3];
    int i,j;
    printf("Enter any three names:");
    for(i=0;i<3;i++)
        scanf("%s",name[i]);
        printf("%s",name[i]);
    for(i=0;i<3;i++)
    {
        j=0;
        while(*(name[i]+j)='\0')
        {
            printf("%c",*(name[i]+j));
            j++;
        }
    }
}
