#include<stdio.h>
main()
{
	int op,qnt,sum=0,total=0;
	
	do
	{
		printf("\n1 - Pizza");
		printf("\n2 - Dosa");
		printf("\n3 - Sandwich");
		printf("\n4 - Exit");
		printf("\nEnter choice=");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("\nEnter quantity=");
				scanf("%d",&qnt);
				sum=qnt*150;
				total+=sum;
				printf("\nTotal=%d",sum);
				break;
				
			case 2:
				printf("\nEnter quantity=");
				scanf("%d",&qnt);
				sum=qnt*100;
				total+=sum;
				printf("\nTotal=%d",sum);
				break;
				
			case 3:
				printf("\nEnter quantity=");
				scanf("%d",&qnt);
				sum=qnt*100;
				total+=sum;
				printf("\nTotal=%d",sum);
				break;
			
			case 4:
				printf("\nGrand total=%d",total);
				printf("\nBye");
				break;
			
			default:
				printf("\nWrong option");
		}
	}
	while(op!=4);
}
