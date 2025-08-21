#include<stdio.h>
main()
{
	int qnt,sum=0,total=0;
	char op;
	do
	{
		printf("\np - Pizza");
		printf("\nd - Dosa");
		printf("\ns - Sandwich");
		printf("\ne - Exit");
		printf("\nEnter choice=");
		fflush(stdin);
		scanf("%c",&op);
		switch(op)
		{
			case 'p':
				printf("\nEnter quantity=");
				scanf("%d",&qnt);
				sum=qnt*150;
				total+=sum;
				printf("\nTotal=%d",sum);
				break;
				
			case 'd':
				printf("\nEnter quantity=");
				scanf("%d",&qnt);
				sum=qnt*100;
				total+=sum;
				printf("\nTotal=%d",sum);
				break;
				
			case 's':
				printf("\nEnter quantity=");
				scanf("%d",&qnt);
				sum=qnt*100;
				total+=sum;
				printf("\nTotal=%d",sum);
				break;
			
			case 'e':
				printf("\nGrand total=%d",total);
				printf("\nBye");
				break;
			
			default:
				printf("\nWrong option");
		}
	}
	while(op!='e');
}
