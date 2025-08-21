#include<stdio.h>
main()
{
	int no1,no2;
	printf("Enter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	
	no1==no2 ? printf("\nBoth are equal") : no1>no2 ? printf("\nNumber1 is greater") : printf("\nNumber2 is greater");		
}
