#include<stdio.h>
main()

{
	int no1,no2,no3;
	printf("Enter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	printf("\nEnter number3=");
	scanf("%d",&no3);
	
	if(no1>no2 && no1>no3)
		printf("\nno1 is greater");
	else if(no2>no3 && no2>no1)
		printf("\nno2 is greater");
	else if(no3>no1 && no3>no2)
		printf("\nno3 is greater");
	else
		printf("\nAll are equal");
}
