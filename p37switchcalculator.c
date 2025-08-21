#include<stdio.h>
main()
{
	int no,no1,no2,add,sub,mul,div;
	printf("Enter your choice=");
	scanf("%d",&no);
	
	switch(no)
	{
		case 1:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			add=no1+no2;
			printf("\nAddition=%d",add);
			break;
		
		case 2:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			sub=no1-no2;
			printf("\nSubtraction=%d",sub);
			break;
		
		case 3:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			mul=no1*no2;
			printf("\nMultiplication=%d",mul);
			break;
		
		case 4:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			div=no1/no2;
			printf("\ndivision=%d",div);
			break;
			
		default:
			printf("\nTry again");
	}
}
