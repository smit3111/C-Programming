#include<stdio.h>
main()
{
	int no,op;
	

	do
	{
	printf("\nEnter 1 for square");
	printf("\nEnter 2 for square");
	printf("\nEnter 3 for exit");
	printf("\nEnter option =>");
	scanf("%d",&op);
	
	switch(op)
	{
	case 1:
		printf("\nEnter number=");
		scanf("%d",&no);
		printf("\nSquare = %d",no*no);
		break;
	case 2:
		printf("\nEnter number=");
		scanf("%d",&no);
		printf("\nCube = %d",no*no*no);
		break;
	case 3:
		printf("\nBye");
		break;
	default:	
		printf("\nWrong opt");
	}	
	
	}
	while(op!=3);
}
