#include<stdio.h>
main()
{
	int i=1,no,rev;
	printf("Enter number=");
	scanf("%d",&no);
	
	while(i<=no)
	{
		rev=i-1;
		printf("%d x ",rev);
		i++;
	}
}
