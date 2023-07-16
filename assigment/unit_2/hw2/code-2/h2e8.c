/*
 * h238.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */

#include "stdio.h"


int main()
{
	char x;
	float a , b, res;



	printf("Enter operator either + or - or * or divide :");
	fflush(stdin);fflush(stdout);
	scanf("%c", &x);

	fflush(stdin);fflush(stdout);

printf("Enter two operands:");
		fflush(stdin);fflush(stdout);
		scanf("%f %f", &a , &b);

	switch(x)
	{
	case'+':
		res = a + b;
		break;

	case'-':
		res =a - b;
		break;

	case'*':
		res = a * b;
	break;

	case'/':
		res =	a / b;
		break;


	}

	fflush(stdin);fflush(stdout);

	printf("%f %c %f = %f" , a , x, b , res);

}
