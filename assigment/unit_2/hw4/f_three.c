#include <stdio.h>
#include <string.h>

void Reverse(char* c);

int main() {
   char c[100];
   printf("Enter a sentence: ");
   fflush(stdin);fflush(stdout);
   gets(c);
   Reverse(c);
   return 0;
}

void Reverse(char* c) {
   int len = strlen(c);
   if (len > 1) {
       Reverse(c + 1);
   }
   printf("%c", c[0]);
}
