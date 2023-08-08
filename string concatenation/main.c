#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20],str2[20];
    int length,j;
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);
    length = 0;
    while (str1[length] != '\0')
    {
        length++;
    }

   for (j=0;str2[j] != '\0';j++,length++)
    {
    str1[length] = str2[j];
    }

  str1[length] ='\0';
  printf("After concatenation: ");
  puts(str1);

}
