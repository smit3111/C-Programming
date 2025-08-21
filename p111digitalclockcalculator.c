#include<stdio.h>
main()
{
	int total_sec,hrs,min,sec;
	printf("Enter total seconds=");
	scanf("%d",&total_sec);
	
	hrs=total_sec/3600;
	min=(total_sec%3600)/60;
	sec=total_sec%60;
	
	printf("\n%d hours, %d minutes, %d seconds",hrs,min,sec);
}
