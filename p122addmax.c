#include<stdio.h>
void add(int no1,int no2)
{
	printf("\nAddition=%d",no1+no2);
}

void max2(int no1,int no2)
{
	(no1>no2) ? printf("\nNumber1 is greater") : printf("\nNumber2 is greater");
}

void main()
{
int no1,no2;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	add(no1,no2);
	max2(no1,no2);
}
