#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int i;
    fp=fopen("Write.txt","w");
    while(ch=getchar()!=EOF)
        putc(ch,fp);
    fclose(fp);
}
