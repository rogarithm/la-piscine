#include<stdio.h>
#include<string.h>

int main()
{
   //initializing character pointer
   char *str1 = "";
   char *str2 = "";

   //displaying both string
   printf("str1 = %s\n\n", str1);
   printf("str2 = %s\n\n", str2);

   printf("Remaining part of str1 after the first"
          "occurence of str2 = %s\n", strstr(str1, str2));

   return 0;
}//end main+
