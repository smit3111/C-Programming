#include<stdio.h>
main()
{
	int i,no,sum=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("1/%d+",i);
		sum=sum+i;
	
	}
	printf("\nSum=%d",sum);
}

