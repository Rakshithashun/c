#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter an alphabet ");
    scanf("%c",&a);
    if(a=='a'||a=='A')
    {
        printf("Vowel");
    }
    else if(a=='e'||a=='E')
    {
        printf("Vowel");
    }
    else if(a=='i'||a=='I')
    {
        printf("Vowel");
    }
    else if(a=='o'||a=='O')
    {
        printf(a=='u'||a=='U');
    }
    else
    {
        printf("Consonant");
    }
}
