#include <stdio.h>
int main()
{
	printf("\t Scholarships Criteria \t\n");
	float cgpa;
	int income;
	
	printf("Enter cgpa of the student: ");
	scanf("%f",&cgpa);
	
	printf("Enter monthly family income per month: Rs.");
	scanf("%d",&income);
	
	if(cgpa>3.7 && income<50000)
	{
		printf("Full Scholarship\n");
	}
	else if(cgpa>3.3 && income<100000)
	{
		printf("Half Scholarship\n");
	}
	else
	{
		printf("No Scholarship is awarded ");
	}
	return 0;
}