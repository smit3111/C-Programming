#include<stdio.h>
void main()
{
	int i,cub,no,sum=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=0;i<=no;i++)
	{
		cub=i*i*i;
		printf("%d + ",cub);
		sum=sum+cub;
	}
	printf("\nSum=%d",sum);
}
