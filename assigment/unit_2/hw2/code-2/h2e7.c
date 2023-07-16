/*
 * h2e7.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */

#include "stdio.h"


int main()
{
	int a , f=1;

	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);


	if(a<0)
	{

		printf("Error!!! Factorial of negative number does not exist.");

	}
	else
	{
		for(int i=1; i<=a;i++)
			{

				f *=i;



			}
			fflush(stdin);fflush(stdout);
			printf("Factorial= %d", f);


	}





}
