#include<stdio.h>
main()
{
	int profit,s,c;
	printf("Enter cost price=");
	scanf("%d",&c);
	printf("\nEnter selling price=");
	scanf("%d",&s);
	
	profit=s-c;
	if(s>c)
		printf("\nProfit");
	else
		printf("\nLoss");
	printf("\nYour profit/loss =%d",profit);
}
