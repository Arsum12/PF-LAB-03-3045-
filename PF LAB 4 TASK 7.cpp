#include <stdio.h>
int main()
{
	int plan_choice,minutes,total_bill;
	
	printf("1. Rs. 500 for 1000 minutes\n");
    printf("2. Rs. 800 for 2000 minutes\n");
    printf("3. Rs. 1200 for unlimited minutes\n");
    printf("4. Custom plan - Rs. 1/minute\n\n");
    
    printf("Enter plan choice: ");
	scanf("%d",&plan_choice);
	
	printf("Enter time in minutes: ");
	scanf("%d",&minutes);
	
	switch(plan_choice)
	{
		case 1:
			if(minutes > 1000)
			{
				total_bill = 500 + (minutes - 1000) * 2;
			}
			else
			{
				total_bill = 500;
			}
			break;
		case 2:
			if(minutes > 2000)
			{
				total_bill=800+(minutes-2000)*2;
			}
			else
			{
				total_bill = 800;
			}
			break;
		case 3:
			total_bill=1200;
			break;
		case 4:
			total_bill=1*minutes;
			break;
		default:
			printf("Invalid plan choice\n");
			return 0;
	}
	
	printf("Total bill: %d",total_bill);
	return 0;
}
