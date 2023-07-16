/*
 * h2e3.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */

#include "stdio.h"


int main()
{
	float a , b , c;

	printf("Enter Three numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f", &a , &b , &c);

	if(a>b && a>c)
	{
		printf("Largest number: %f" , a);

	}
	else if (b>a && b>c)
	{
		printf("Largest number: %f" , b);

	}
	else
	{

		printf("Largest number: %f" , c);
	}







}
