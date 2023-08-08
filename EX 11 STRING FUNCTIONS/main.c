#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[10],b[10],h[10];
   int ch,c,d;
   printf("Enter string 1: ");
   scanf("%s", a);
   printf("Enter string 2: ");
   scanf("%s", b);
   printf("choose your option : \n");
   printf(" 1.length\n 2.compare\n 3.copy\n 4.concatenate\n");
   printf("Enter your choice: ");
   scanf("%d", &ch);
    switch(ch)
       {
         case 1:
       {
             c = strlen(a);
             d = strlen(b);
             printf("Length of the string is %d\n", c);
             printf("Length of the string is %d\n", d);
             break;
        }
         case 2:
         {
             if (strcmp(a,b)==0)
             {
                printf("Both the strings are equal");
             }
             else if(strcmp(a,b)>0)
             {
               printf("%s is greater than %s", a,b);
             }
             else
             {
               printf("%s is greater than %s", b,a);
             }
             break;
         }
         case 3:
         {
             printf("sring 1 %s\n", a);
             printf("sring 2 %s\n", b);
             strcpy(h,a);
             strcpy(a,b);
             strcpy(b,h);
             printf("sring 1 %s\n", a);
             printf("sring 2 %s\n", b);
             break;
         }
         case 4:
         {
             printf("sring 1 %s\n", a);
             printf("sring 2 %s\n", b);
             strcat(a,b);
             printf("sring 1 %s\n", a);
             break;
         }


       }

}
