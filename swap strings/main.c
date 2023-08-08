#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *a,char *b)
{
    char c[10];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("\nStr1:%s\nstr2:%s",a,b);
}
int main()
{
    void swap(char *,char *);
    char str1[10],str2[10];
    printf("Enter the two strings:");
    scanf("%s %s",str1,str2);
    printf("Before swap:\n%s\n%s",str1,str2);
    swap(str1,str2);

}
