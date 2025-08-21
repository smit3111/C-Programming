#include<stdio.h>
main()
{
	int i,no,rev;
	printf("Enter number=");
	scanf("%d",&no);
	i=no;
	do
	{
		printf("%d x ",i);
		i--;
	}
	while(i>=1);
}	
