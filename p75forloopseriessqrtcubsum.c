#include<stdio.h>
main()
{
	int i,no,sqrt,cub,sum=0,esum=0,osum=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			sqrt=i*i;
			printf("%d+",sqrt);
			esum+=sqrt;
		}
		else
		{
			cub=i*i*i;
			printf("%d+",cub);
			osum+=cub;
		}
	sum=esum+osum;
	}
	printf("\nSum=%d",sum);
}
