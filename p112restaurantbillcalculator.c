#include<stdio.h>
main()
{
	int bill_amount,people;
	char service;
	float tax,tip,total,perperson;
	
	printf("Enter total bill amount=");
	scanf("%d",&bill_amount);
	printf("\nEnter service quality[E/G/A/P]=");
	scanf(" %c",&service);	
	printf("\nEnter number of people=");
	scanf("%d",&people);
	
	switch(service)
	{
		case 'E':
			tip=bill_amount*0.2;
			total+=tip;
			break;
			
		case 'G':
			tip=bill_amount*0.15;
			total+=tip;
			break;
			
		case 'A':
			tip=bill_amount*0.1;
			total+=tip;
			break;
			
		case 'P':
			tip=bill_amount*0.05;
			total+=tip;
			break;
		
		default:
			printf("\nWrong choice");	
	}
	tax=bill_amount*0.08;
	total+=tax;
	total+=bill_amount;
	perperson=total/people;
	printf("\nTax=%f",tax);
	printf("\nTip=%f",tip);
	printf("\nTotal bill amount=%f",total);
	printf("\nAmount perperson=%f",perperson);

}
	
	
