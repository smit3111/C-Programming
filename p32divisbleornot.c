#include<stdio.h>
main()
{
	int no1,no2;
	printf("Enter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	
	if(no1%no2==0)
		printf("\nIt is divisible");
	else
		printf("\nIt is not divisible");
}
