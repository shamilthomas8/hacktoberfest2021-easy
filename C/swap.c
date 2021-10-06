#include <stdio.h>
void upper_string(char []);

int main()
{
   char string[100];
   
   printf("Enter a string to convert it into upper case\n");
   gets(string);
   
   upper_string(string);
   
   printf("The string in upper case: %s\n", string);
     
   return 0;
}

void upper_string(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}
