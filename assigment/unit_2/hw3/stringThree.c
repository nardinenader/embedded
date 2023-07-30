#include "stdio.h"
int main()
{
	char s[100], t;
	int j=0;


		printf("Enter a string:");
		fflush(stdin); fflush(stdout);
		gets(s);

        j = strlen(s) - 1;

         for (int i = 0; i < j; i++, j--)
         {
           t = s[i];
           s[i] = s[j];
           s[j] = t;
         }



		printf("Reverse string is %s:" , s);

}

