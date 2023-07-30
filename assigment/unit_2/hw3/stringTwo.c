#include "stdio.h"

int main()
{
	char s[100];
	int i=0 , freq=0;

	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(s);

while(s[i]!='\0')
   {
	freq++;
	++i;
	}

printf("Length of  string= %d" , freq);


}




