#include <stdio.h>

int main()
{
	int transaction_amount , location_status;
	printf("\t bank's fraud detection system \t\n");
	printf("Enter transaction amount in pkr: ");
	scanf("%d",&transaction_amount);

	printf("Enter the cardholder's location status (input as 1 for outside, 0 for inside): ");
	scanf("%d",&location_status);
	
	if((transaction_amount>100000 && location_status==1) || transaction_amount>500000)
	{
		printf("Flagged for review \n");
	}
	else
	{
		printf("Transaction Approved \n");
	}
	return 0;
}