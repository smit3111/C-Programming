#include<stdio.h>
main()
{
	int units,fchrg=50;
	float total,sur;
	printf("Enter units=");
	scanf("%d",&units);
	
	if(units>0 && units<100)
	{
		units=units*5;
		total+=units;
	}
	else if(units>101 && units<200)
	{
		units=units*7;
		total+=units;
	}
	else if(units>201 && units<300)
	{
		units=units*10;
		total+=units;	
	}
	else if(units>300)
	{
		units=units*15;
		total+=units;
	}
	total+=fchrg;
	printf("\nunits=%d",units);
	printf("\ntotal=%f",total);
	if(total>1000)
	{
		sur=total*0.05;
		total+=sur;
		printf("\nTotal amount=%f",total);
	}
	else
		printf("\nTotal amount=%f",total);
}
