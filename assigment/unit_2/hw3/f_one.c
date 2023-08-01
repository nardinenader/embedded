#include "stdio.h"

int num1, num2, answer;
int i=0;
int prime(int num);


int prime(int num)
{
   int p = 0;
   for (int x = 2; x < num; x++) {
       if (num % x == 0) {
           p = 1;
           break;
       }
   }
   if (num == 2 || num == 3) {
       p = 0;
   }
   return p;
}


int main()
{
	printf("Enter two numbers(intervals):");
	fflush(stdin);fflush(stdout);
   scanf("%d %d", &num1, &num2);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between between %d and %d are: ",num1, num2);
	fflush(stdin);fflush(stdout);

	for(int i=num1+1; i<num2; i++)
	{
		int p = prime(i);

		if(p==0)
		{
			printf("%d\n" , i);
		}
	}


}
