#include<stdio.h>
main()
{
	int rup;
	printf("Enter rupees with you =");
	scanf("%d",&rup);
	
	if(rup>=500)
		printf("\nWe will eat pizza");
	else
		printf("\nWe will eat panipuri");
}
