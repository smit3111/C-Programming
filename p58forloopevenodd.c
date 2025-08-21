#include<stdio.h>
main()
{
	int i,no;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		i%2==0 ? printf("\n%d - Even",i) : printf("\n%d - Odd",i);
	}
}
