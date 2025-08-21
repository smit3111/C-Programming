#include<stdio.h>
main()
{
	int total,totaldays,totalmnth,totalyr,byr,bdy,bmth,cyr,cdy,cmth;
	printf("Enter birth Year/Month/Day=");
	scanf("%d%d%d",&byr,&bmth,&bdy);
	printf("\nEnter current Year/Month/day=");
	scanf("%d%d%d",&cyr,&cmth,&cdy);
	
	if(cmth>=bmth)
	{
		totalmnth=cmth-bmth;
		printf("\nAge in month=%dm",totalmnth);
		
	}
	else
	{	
		cmth+=12;
		cyr-=1;
		totalmnth=cmth-bmth;
		printf("\nAge in month=%dm",totalmnth);
	}
	
	if(cdy>=bdy)
	{
		totaldays=cdy-bdy;
		printf("\nAge in days=%d",totaldays);
	}
	else
	{
		cdy+=30;
		cmth-=1;
		totaldays=cdy-bdy;
		printf("\nAge in days=%d",totaldays);
	}
	totalyr=cyr-byr;
	printf("\nAge in year=%d",totalyr);
	
	total=totalyr*365+totalmnth*30+totaldays;
	printf("\nTotal days lived=%d",total);
}
