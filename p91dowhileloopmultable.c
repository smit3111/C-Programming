#include<stdio.h>
main()
{
	int nu,i=1,no,num;
	printf("Enter how many numbers to print=");
	scanf("%d",&num);
	printf("\nEnter number=");
	scanf("%d",&no);
	
	do
	{
		nu=no*i;
		printf("\n%d x %d = %d",no,i,nu);
		i++;	
	}
	while(i<=num);

}

