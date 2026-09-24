#include <stdio.h>

int main()
{
	float temp,pressure;
	printf("Enter temperature in celsius: ");
	scanf("%f",&temp);
	
	printf("Enter pressure in PSI: ");
	scanf("%f",&pressure);
	
	if(temp>100 || pressure>250)
	{
		printf("Machine Shuts down \n");
	}
	else if((temp>=85 && temp<=100)&& (pressure>=200 && pressure<=250))
	{
		printf("Warning Mode \n");
	}
	else
	{
		printf("Machine is working normally \n");
	}
	return 0;
	
}