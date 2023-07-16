/*
 * h2e6.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */

#include "stdio.h"


int main()
{
	int a , sum=0;

	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);

	for(int i=1; i<=a;i++)
	{

		sum +=i;



	}
	fflush(stdin);fflush(stdout);
	printf("sum = %d", sum);




}
