#include <stdio.h>
#define area(r) ((3.14159265359)*(r)*(r))

int main()
{
	float radius;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	float a = area(radius);

	printf("area: %f ", a);





	}



