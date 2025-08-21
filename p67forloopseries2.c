#include<stdio.h>
main()
{
	int i,no,nu;
	
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		nu=i*2;
		printf("%d +",nu);
	}
}
