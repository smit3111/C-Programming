#include<stdio.h>
main()
{
	int month;
	printf("Enter number=");
	scanf("%d",&month);
	
	if(month==1)
		printf("\nJanuary");
	else if(month==2)
		printf("\nFebruary");
	else if(month==3)
		printf("\nMarch");
	else if(month==4)
		printf("\nApril");
	else if(month==5)
		printf("\nMay");
	else if(month==6)
		printf("\nJune");
	else if(month==7)
		printf("\nJuly");
	else if(month==8)
		printf("\nAgust");
	else if(month==9)
		printf("\nSeptember");
	else if(month==10)
		printf("\nOctober");
	else if(month==11)
		printf("\nNovember");
	else if(month==12)
		printf("\nDecember");
	else
		printf("\nPlease enter again");	
}
