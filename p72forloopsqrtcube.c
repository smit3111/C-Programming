#include<stdio.h>
main()
{
	int i,no,sqrt,cub;
	printf("Enter number=");
	scanf("%d",&no);
	
	
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			sqrt=i*i;
			printf("%d+",sqrt);
		}
		else
		{
			cub=i*i*i;
			printf("%d+",cub);
		}
	}
}
