/*
 * h2e1.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */
#include "stdio.h"

int main()
{
	int a ;

	printf("Enter an Integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);

    if(a%2 != 0)
    {
    	printf("%d is Odd", a);

    }
    else
    {
    	printf("%d is Even", a);

    }

}

