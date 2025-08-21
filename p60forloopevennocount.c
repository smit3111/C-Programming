#include<stdio.h>
main()
{
	int i,no,sum=0,c=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=i+sum;
			c++;
		}
			
	}
	
	printf("\nsum of number=%d count = %d",sum,c);
}
