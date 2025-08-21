#include<stdio.h>
main()
{
	int no1,no2,add,sub,mul,div;
	char op;
	
	printf("Enter choice[+,-,*,/]=");
	scanf("%c",&op);
	
	switch(op)
	{
		case '+':
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			add=no1+no2;
			printf("\nAddition is=%d",add);
			break;
			
		case '-':
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			sub=no1-no2;
			printf("\nSubtraction-%d",sub);
			break;
			
		case '*':
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			mul=no1*no2;
			printf("\nMultiplication=%d",mul);
			break; 
			
		case '/':
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			div=no1/no2;
			printf("\nDivision=%d",div);
			break;
			
		default:
			printf("\nWrong choice");
	}
}
