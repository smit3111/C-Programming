#include<stdio.h>
main()
{
	int i,no,nu,sum=0;
	
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		nu=i*2;
		printf("%d +",nu);
		sum+=nu;
	}
	printf("\nSum=%d",sum);
}
