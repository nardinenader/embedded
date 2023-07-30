/*
* qFour.c
*
*  Created on: Jul 29, 2023
*      Author: HP
*/

#include "stdio.h"

int main()
{
int loc, n, element;
int arr[10];

printf("Enter no of elements:");
fflush(stdin);fflush(stdout);
scanf("%d", &n );



for(int i=0; i<n ;i++)
{
scanf("%d" , &arr[i]);

}
printf("\nEnter the elements to be inserted:");
fflush(stdin);fflush(stdout);
scanf("%d", &element );
fflush(stdin);fflush(stdout);
printf("Enter the location:");
fflush(stdin);fflush(stdout);
scanf("%d", &loc );

for(int i=n; i>= loc; i--)
{
	arr[i] = arr[i-1];

}
n++;
arr[loc-1] = element;

for(int i=0; i<=n ;i++)
{
	fflush(stdin);fflush(stdout);
	printf("%d" , arr[i]);

}


}
