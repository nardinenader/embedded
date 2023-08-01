

#include "stdio.h"
int fact(int n);




int fact(int n)
{
   if (n!=1)
	return n*fact(n-1);


}

int main()
{
int n=0;

	printf("Enter a positive Integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d" , &n);

	fflush(stdin);fflush(stdout);
	printf("Factorial of %d is = %d ", n , fact(n));
	return 0;
}
