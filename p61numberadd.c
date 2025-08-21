#include<stdio.h>
main()
{
	int i,no,sum,add=0;
	printf("\nEnter number=");
	scanf("%d",&no);	
		
	for(i=0;no>0;i++)
	{
		sum=no%10;
		no=no/10;
		add=add+sum;		
	}
	printf("\n%d",add);

}
