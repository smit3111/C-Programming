#include<stdio.h>
main()
{
	int i,no;
	printf("\nEnter number=");
	scanf("%d",&no);
	
	while(i<=no)
	{
		if(i%2==0)
		{
			printf("\n%d is Even",i);
		}
		else
		{
			printf("\n%d is Odd",i);
		}
	i++;	

	}
}
