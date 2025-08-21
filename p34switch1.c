#include<stdio.h>
main()
{
	int week;
	printf("Enter your number=");
	scanf("%d",&week);

	switch(week)
	{
		case 1:
			printf("\nMonday");
			
			break;
		case 2:
			printf("\nTuesday");
		case 3:
			printf("\nWednusday");
		case 4:
			printf("\nThursday");
		case 5:
			printf("\nFriday");
		case 6:
			printf("\nSaturday");
		case 7:
			printf("\nSunday");
		default:
			printf("\nWrong opt");
	}
}
//month
//1 no square 2 no cube
//1 for add 2 for sub 3 for mul 4 for div
//1 for area of tri 2 for area of circle
//1 for xerox 2 for typing

