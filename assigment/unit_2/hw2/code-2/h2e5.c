/*
 * h2e5.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */

#include "stdio.h"


int main()
{
	char a;

	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &a);

	char b = tolower(a);

	if(b>97 && b<122)
	{

		printf("%c is an alphabet:" , b);
	}
	else
	{

		printf("%c is not an alphabet:" , b);
	}






}
