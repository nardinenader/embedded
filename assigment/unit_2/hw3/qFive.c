/*
* qFive.c
*
*  Created on: Jul 29, 2023
*      Author: HP
*/
#include "stdio.h"

int main()
{
	int arr[10] , elements, searched, loc;
	printf("Enter no of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &elements);

	for(int i=0; i<elements ;i++)
	{
	fflush(stdin);fflush(stdout);
	scanf("%d" , &arr[i]);
	}


	printf("Enter element to be searched:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &searched);

	for(int i=0;i<elements;i++)
	{
	  if(arr[i]==searched)
	  {
		loc= i+1;

	  }

	}

	fflush(stdin);fflush(stdout);
		printf("Number found at the location = %d" , loc );



}


