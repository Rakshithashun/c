#include <stdio.h>
#include <stdlib.h>

int main()
{
   char string[20],temp;
   int i,length;
   printf("Enter a String:");
   scanf("%s",string);
   length=strlen(string)-1;
   for(i=0;i<strlen(string)/2;i++){
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
   }
   printf("Reverse string :%s",string);
}
