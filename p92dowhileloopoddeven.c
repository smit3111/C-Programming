#include<stdio.h>
main()
{
	int i,no;
	printf("Enter number=");
	scanf("%d",&no);
	
	do
	{
		if(i%2==0)
		{
			printf("\n%d is Even",i);
		}
		else
			printf("\n%d is Odd",i);
		i++;
	}	
	while(i<=no);
	
}
