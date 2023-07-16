/*
 * h1e7.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */
#include "stdio.h"

int main()
{
	float a , b ;

	printf("Enter Value of A:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);

	printf("Enter Value of B:");
		fflush(stdin);fflush(stdout);
		scanf("%f", &b);

		 a = a + b;
		 b = a - b;
		 a = a - b;

		fflush(stdin);fflush(stdout);
		printf("After swapping, value of a = %f", a);
		fflush(stdin);fflush(stdout);
		printf("\nAfter swapping, value of b = %f", b);



}

