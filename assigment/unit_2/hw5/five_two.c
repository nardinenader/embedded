#include <stdio.h>

struct distance
{
 int feet;
 float inch;

};




int main()
{
	struct distance d1;
	struct distance d2;
	int feets;
	float inches;

	printf("Enter information for first distance:\n Enter Feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &d1.feet);

	printf("Enter inch:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &d1.inch);

	printf("Enter information for second distance:\n Enter Feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &d2.feet);

	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f", &d2.inch);

	 feets = d1.feet + d2.feet;
	 inches = d1.inch + d2.inch;

	    if (inches >= 12.0)
	    {
	        feets++;

	    }
	    inches -= 12.0;

	    printf("Sum of distance: %d feet %.2f inches\n", feets, inches);

	    return 0;




}


