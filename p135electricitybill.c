#include<stdio.h>
void main()
{
	float units,bill,surch,total;

	printf("Enter total units of electricity used=");
	scanf("%f",&units);
	
	if(units>250)
	{
		bill=units*1.5;
		total+=bill;
	}	
	else
	{
		if(units<51)
		{
			bill=units*0.50;
			total+=bill;
			printf("%f",total);
		}
		else if(units<150)
		{
			bill=50*0.50+units+(units-100)*0.75;
			total+=bill;
			printf("%f",total);
		}
		else if(units<200)
		{
			bill=50*0.50+units+(units-100)*1.20;
			total+=bill;
			printf("%f",total);
		}	
	}
}
