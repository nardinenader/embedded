#include "stdio.h"

int main()
{

char s[100];

char c;
int i=0 , freq=0;

printf("Enter a string:");
fflush(stdin); fflush(stdout);
gets(s);
printf("Enter a character to get frequency:");
fflush(stdin); fflush(stdout);
scanf("%c" , &c);



while(s[i]!='\0')
{
	if(c==s[i])
	{
		freq++;

	}
	++i;

}

printf("Frequency of %c = %d", c, freq);





}

