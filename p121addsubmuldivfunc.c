#include<stdio.h>

void add(int no1,int no2)
{
	printf("\nAddition=%d",no1+no2);
}
void sub(int no1,int no2)
{
	printf("\nSubtraction=%d",no1-no2);
}

void mul(int no1,int no2)
{
	printf("\nMultiplication=%d",no1*no2);
}

void div(int no1,int no2)
{
	
	printf("\nDivision=%d",no1/no2);
}
void main()
{
	int no1,no2;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	
	add(no1,no2);
	sub(no1,no2);
	mul(no1,no2);
	div(no1,no2);
}
