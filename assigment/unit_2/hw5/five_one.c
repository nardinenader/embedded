#include <stdio.h>

struct student
{
  char name[50];
  int roll;
  float marks;

};

int main()
{
	struct student s;

	printf("Enter name:\n");
	fflush(stdin); fflush(stdout);
	scanf("%s", s.name);

	printf("Enter Roll Number:\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &s.roll);

	printf("Enter marks:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &s.marks);


	printf("Displaying information:\n");
	printf("name: %s\n", s.name);
	printf("roll number: %d\n", s.roll);
	printf("marks: %f\n", s.marks);


}
