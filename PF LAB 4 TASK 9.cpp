#include <stdio.h>
int main()
{
	int people;
	float weight;
	printf("Enter the number of people in the lift: ");
	scanf("%d",&people);
	
	printf("Enter the total combined weight in kg: ");
	scanf("%f",&weight);
	
	if(people>10 && weight>1000)
	{
		printf("Deny entry due to overweight and exceeding the people limit\n");
	}
	else if(people>10)
	{
		printf("Deny entry due to exceeding the people limit\n");
	}
	else if(weight>1000)
	{
		printf("Deny entry due to overweight\n");
	}
	else
	{
		printf("elevator can operate normally\n");
	}
	return 0;
}