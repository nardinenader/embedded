/*
* qThree.c
*
*  Created on: Jul 28, 2023
*      Author: HP
*/
#include "stdio.h"

int main()
{
	int mat[100][100];
	int r,c;

	printf("enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &r , &c );

	printf("Enter elements of matrix\n");
		fflush(stdin);fflush(stdout);

		for(int i = 0;i<r;i++)
		{
			for(int j=0; j<c;j++)
			{
			 printf("Enter a%d%d:" ,i+1 , j+1);
			 fflush(stdin);fflush(stdout);
			 scanf("%d", &mat[i][j] );


			}

		}
		printf("Entered matrix\n:" );
		for(int i = 0;i<r;i++)
		{
		  for(int j=0; j<c;j++)
			{
						 fflush(stdin);fflush(stdout);
						 printf(" %d\n\t" , mat[i][j] );

					}
				}
		printf("\n transpose of matrix:"  );
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
			{
				fflush(stdin);fflush(stdout);
				printf("%d\n\t" , mat[j][i]);
			}
		}













}

