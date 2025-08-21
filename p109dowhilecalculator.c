#include<stdio.h>
main()
{
	int no1,no2;
	char op;
	do
	{
		printf("\n+ - Addition");
		printf("\n- - Subtraction");
		printf("\n* - Multiplication");
		printf("\n/ - Division");
		printf("\ne - exit");
		fflush(stdin);
		printf("\nEnter choice=");
		scanf("%c",&op);
		
		switch(op)
		{
			case '+':
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
		
				printf("\nAddition=%d",no1+no2);
				break;
		
			case '-':
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
				printf("\nSubtraction=%d",no1-no2);
				break;
			
			case '*':
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
				printf("\nMultiplication=%d",no1*no2);
				break;
				
			case '/':
				printf("\nEnter number1=");
				scanf("%d",&no1);
				printf("\nEnter number2=");
				scanf("%d",&no2);
				printf("\nDivision=%d",no1/no2);
				break;
			
			case 'e':
				printf("\nBye");
				break;
			default:
				printf("\nWrong choice");
		}
	}
	while(op!='e');
}
