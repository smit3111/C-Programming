#include<stdio.h>
main()
{
	int i,no,sqrt;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		sqrt=i*i;
		printf("%d + ",sqrt);
 	}
}
