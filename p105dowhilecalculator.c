#include<stdio.h>
main()
{
	int no1,no2,op;
	
	do
	{
		printf("\n1 - Addition");
		printf("\n2 - Subtraction");
		printf("\n3 - Multiplication");
		printf("\n4 - Division");
		printf("\n5 - exit");
		printf("\nEnter choice=");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
		
				printf("\nAddition=%d",no1+no2);
				break;
		
			case 2:
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
				printf("\nSubtraction=%d",no1-no2);
				break;
			
			case 3:
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
				printf("\nMultiplication=%d",no1*no2);
				break;
				
			case 4:
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
				printf("\nDivision=%d",no1/no2);
				break;
			
			case 5:
				printf("\nBye");
				break;
			default:
				printf("\nWrong choice");
		}
	}
	while(op!=5);
}
