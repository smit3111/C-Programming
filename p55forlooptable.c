#include<stdio.h>
main()
{
	int i,no;
	printf("\nEnter number=");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d =%d",no,i,i*no);
	}
}
