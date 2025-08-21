#include<stdio.h>
main()
{
	int i,no,div;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%7==0)
		{
		printf("\n%d",i);
		}
	}
}
