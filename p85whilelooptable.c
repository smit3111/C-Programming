#include<stdio.h>
main()
{
	int num,i,no,nu;
	printf("Enter number=");
	scanf("%d",&no);
	printf("\nEnter how many times to print=");
	scanf("%d",&num);
	while(i<=num)
	{
		nu=no*i;
		printf("\n%d x %d= %d",no,i,nu);
		i++;
	}
}
