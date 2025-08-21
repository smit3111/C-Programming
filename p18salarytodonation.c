#include<stdio.h>
main()
{
	int s,salary,donation;
	printf("Enter your salary=");
	scanf("%d",&salary);
	donation=salary*0.10;
	printf("\nYour donation=%d",donation);
	s=salary-donation;
	printf("\nYour salary after donation=%d",s);
}
