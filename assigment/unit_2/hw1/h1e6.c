/*
 * h1e6.c
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

		float temp = a;
		a=b;
		b=temp;

		fflush(stdin);fflush(stdout);
		printf("After swapping, value of a = %f", a);
		fflush(stdin);fflush(stdout);
		printf("\nAfter swapping, value of b = %f", b);



}
