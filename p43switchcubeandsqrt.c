#include<stdio.h>
main()
{
	int no,cube,sqrt;
	char op;
	printf("Enter choice[c,s]=");
	scanf("%c",&op);
	
	switch(op)
	{
		case 'c':
			printf("\nEnter number=");
			scanf("%d",&no);
			cube=no*no*no;
			printf("\nCube for %d =%d",no,cube);
			break;
		
		case 's':
			printf("\nEnter number=");
			scanf("%d",&no);
			sqrt=no*no;
			printf("\nSquare for %d =%d",no,sqrt);
			break;
			
		default:
			printf("\nWrong choice");
				
	}
	
}
