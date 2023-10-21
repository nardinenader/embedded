#include <stdio.h>

struct student
{
	char name[50];
	int roll;
	float marks;

};

int main()
{
	struct student s[10];

	for(int i=0; i<=10; i++)
	{

		 printf("Enter data for student %d:\n", i + 1);

		        printf("Name: ");
		        fflush(stdin); fflush(stdout);
		        scanf("%s", s[i].name);

		        printf("Roll Number: ");
		        fflush(stdin); fflush(stdout);
		        scanf("%d", &s[i].roll);

		        printf("Marks: ");
		        fflush(stdin); fflush(stdout);
		        scanf("%f", &s[i].marks);
     }
	printf("Student Data:\n");
	    for (int i = 0; i < 10; i++)
	    {

	    	 printf("Student %d\n", i + 1);
	    	 printf("Name: %s\n", s[i].name);
	    	 printf("Roll Number: %d\n", s[i].roll);
	    	 printf("Marks: %.2f\n", s[i].marks);
	    	 printf("\n");
	    }

	}



