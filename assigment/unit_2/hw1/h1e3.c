/*
 * h1e3.c
 *
 *  Created on: Jul 16, 2023
 *      Author: HP
 */

#include "stdio.h"

int main()
{
int x , y ;

printf("Enter Two integers:");
fflush(stdin);fflush(stdout);
scanf("%d", &x);

fflush(stdin);fflush(stdout);
scanf("%d", &y);
fflush(stdin);fflush(stdout);

int res = x + y;
printf("sum:");
fflush(stdin);fflush(stdout);
printf("%d", res);

}
