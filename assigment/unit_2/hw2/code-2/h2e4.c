/*
 * h2e4.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */


#include "stdio.h"


int main()
{
	float a;

	printf("Enter a numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);

	if(a>0)
	{
		printf("%f is positive" , a);

	}
	else if(a<0)
	{
		printf("%f is negative" , a);

	}
	else if(a==0)
		{
			printf("%f is a zero" , a);

		}






}
