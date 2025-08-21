#include<stdio.h>
main()
{
	int i,no,sum=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=0;i<=no;i++)
	{
		i=i+1;
		printf("%d + ",i);
		sum=sum+i;
	}
	printf("\nSum=%d",sum);
}
