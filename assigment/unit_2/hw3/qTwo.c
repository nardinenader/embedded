/*
* qTwo.c
*
*  Created on: Jul 28, 2023
*      Author: HP
*/

#include "stdio.h"

int main()
{
	float num , avg;
   float n[100];
	float sum=0.0;


	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &num);

	for(int i=0;i<num;++i)
	{

	printf("%d.Enter The number:",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &n[i]);

		sum += n[i];

	}
	avg= sum/num;
	printf("Average = %f" , avg);

}
