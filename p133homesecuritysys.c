#include<stdio.h>
void main()
{
	int time_of_day,day_of_week;
	char vacation_mode,motion_detected;
	
	printf("\nEnter motion detected[y,n]=");
	scanf("%c",&motion_detected);
	if(motion_detected=='n')
	{
		printf("Blue, No motion");
	}
	else
	{
	printf("\nEnter vacation mode[y,n]=");
	scanf(" %c",&vacation_mode);
	printf("Enter time of day[0-23]=");
	scanf("%d",&time_of_day);
	printf("\nEnter day of week[1-7]=");
	scanf("%d",&day_of_week);
	
	if (vacation_mode=='n' && day_of_week==7 || day_of_week==6)
	{
		printf("\nGreen, Family expected to be home");
	}	
	else if(time_of_day>=23 || (time_of_day>=0 && time_of_day<=6))
	{
		printf("\nYellow Alert");
	}
	else if(vacation_mode=='y' || day_of_week>=1 && day_of_week<=5)
	{
		printf("\nRed Alert, Movement when no one is at home");
	}
	else
	{
		printf("\nYour are safe");
	}

	}
	
}
