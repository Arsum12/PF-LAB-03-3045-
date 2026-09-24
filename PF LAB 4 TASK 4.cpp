#include <stdio.h>

int main()
{
	printf("\t Registration for advanced programming course \t\n");
	int status,credit_hours;
	float grade_points;
	printf("Enter student status for programming fundamentals (1 for passed, 0 for not passed): ");
	scanf("%d",&status);
	
	printf("Enter grade points of the student: ");
	scanf("%f",&grade_points);
	
	printf("Enter credit hours of the student: ");
	scanf("%d",&credit_hours);
	
	if(status==1 && grade_points>=2.5 && credit_hours>=30)
	{
		printf("Student can register for the course\n");
	}
	else
	{
		printf("Student can not register for the course\n");
	}
	return 0;
}
