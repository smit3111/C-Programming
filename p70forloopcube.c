#include<stdio.h>
main()
{
	int i,no,cube;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		cube=i*i*i;
		printf("%d + ",cube);
 	}
}
