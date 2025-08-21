#include<stdio.h>
main()
{
	int no;
	char op;

	do
	{
	printf("\nEnter 's' for square");
	printf("\nEnter 'c' for square");
	printf("\nEnter 'e' for exit");
	fflush(stdin);
	printf("\nEnter option =>");
	scanf("%c",&op);
	
	switch(op)
	{
	case 's':
		printf("\nEnter number=");
		scanf("%d",&no);
		printf("\nSquare = %d",no*no);
		break;
		
	case 'c':
		printf("\nEnter number=");
		scanf("%d",&no);
		printf("\nCube = %d",no*no*no);
		break;
	
	case 'e':
		printf("\nBye");
		break;
	
	default:	
		printf("\nWrong opt");
	}	
	
	}
	while(op!='e');
}
