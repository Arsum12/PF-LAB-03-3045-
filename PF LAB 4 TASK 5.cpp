#include <stdio.h>
int main()
{
	int amount,status,city;
	printf("Enter order amount: Rs.");
	scanf("%d",&amount);
	
	printf("Enter membership status (1 for premium and 0 for not ): ");
	scanf("%d",&status);
	
	printf("Enter city status city (1 for within city, 0 for outside): ");
	scanf("%d",&city);
	
	if(amount>3000 || status==1) 
	{
		printf("FREE DELIVERY !! \n");
	}
	else
	{
		printf("SORRY NO FREE DELIVERY !! \n");
	}
	if(amount<50000 && city==1)
	{
		printf("COD is available \n");
	}
	else
	{
		printf("COD is not available \n");
	}
	return 0;
}
