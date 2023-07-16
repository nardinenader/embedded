/*
 * h2e2.c

 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */
#include "stdio.h"
#include "ctype.h"

int main()
{
	char a ;

	printf("Enter an Alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &a);
	char b = tolower(a);

	if(b== 'a' || b== 'e' || b== 'i' || b== 'o' || b== 'u' )
	{
		printf("%c is a vowel" , b);

	}
	else
	{

		printf("%c is a consonant" , b);
	}






}

