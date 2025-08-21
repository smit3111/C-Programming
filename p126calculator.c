#include<stdio.h>
 
int add(int no1,int no2)
{
	return no1+no2;
}

int diff(int no1,int no2)
{
	return no1-no2;
}

int pro(int no1,int no2)
{
	return no1*no2;
}

float div(int no1,int no2)
{
	return no1/no2;
}

int rem(int no1,int no2)
{
	return no1%no2;
}


void main()
{
	int choice,result,no1,no2;
	printf("\nEnter choice[1,2,3,4,5]=");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			result=add(no1,no2);
			printf("\nResult=%d",result);
			break;
			
		case 2:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			result=diff(no1,no2);
			printf("\nResult=%d",result);
			break;
		
		case 3:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			result=pro(no1,no2);
			printf("\nResult=%d",result);
			break;
			
		case 4:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			result=div(no1,no2);
			printf("\nResult=%d",result);
			break;
			
		case 5:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			result=rem(no1,no2);
			printf("\nResult=%d",result);
			break;
		
		default:
			printf("\nWrong choice");
	}
}
