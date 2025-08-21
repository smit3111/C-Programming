#include<stdio.h>

main()
{
	int d1,d2,d3,d4,d5,total,avg;
	printf("\nEnter temp on day1 =");
	scanf("%d",&d1);
	printf("\nEnter temp on day2=");
	scanf("%d",&d2);
	printf("\nEnter temp on day3=");
	scanf("%d",&d3);
	printf("\nEnter temp on day4=");
	scanf("%d",&d4);
	printf("\nEnter temp on day5=");
	scanf("%d",&d5);
	total=d1+d2+d3+d4+d5;
	printf("\nTotal temperature=%d",total);
	avg=total/5;
	printf("\nAverage =%d",avg);

}
