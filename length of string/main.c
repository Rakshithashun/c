#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    int i,count=0;
    printf("Enter a string:");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0')
    {
        count+=1;
        i++;
    }
    printf("%d",count);

}
