#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("prithi.txt","r");
    while((ch=getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);

}
