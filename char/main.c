#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter the character:");
    scanf("%c",&x);
    if(x>='a'&&x<='z'||x>='A'&&x<='Z')
    {
        printf("Alphabet");
    }
    else if(x>='0')
    {
        printf("Number");
    }
    else
    {
        printf("Symbol");
    }
}
