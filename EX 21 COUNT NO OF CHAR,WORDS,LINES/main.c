#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int noc=0,now=1,nol=0;
    fp=fopen("Count.txt","w");
    while((ch=getchar())!=EOF)
     {
        noc=noc+1;
        if(ch==' ')
        {
           now=now+1;
        }
        else if(ch=='\n')
        {
           nol=nol+1;
        }
     }
    printf("No of characters are:%d",noc);
    printf("\nNo of words are:%d",now);
    printf("\nNo of lines are:%d",nol);
    fclose(fp);

}
