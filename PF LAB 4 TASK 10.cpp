#include <stdio.h>
int main()
{
	int zone_type,fine=1000,limit,final_fine;
	float speed;
	printf("Enter zone type (1 = School Zone, 2 = Highway, 3 = Residential Area): ");
	scanf("%d",&zone_type);
	
	printf("Enter driver's speed in km/h: ");
	scanf("%f",&speed);
	
	switch(zone_type)
	{
		case 1:
		    limit=30;
		    break;
		case 2:
			limit=100;
			break;
		case 3:
			limit=50;
			break;
		default:
			printf("Invalid zone type\n");
			return 0;
    }
    if(speed > limit+20)
    {
    	printf("You have been fined Rs.%d\n",fine*2);
	}
	else if(speed>limit)
	{
		printf("You have been fined Rs.%d\n",fine);
	}
	else 
	{
		printf("No fine\n");
	}
	return 0;
}