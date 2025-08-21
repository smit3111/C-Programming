#include<stdio.h>
main()
{
	int number,no,sqrt,cube;
	printf("Enter number=");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf("\nEnter number =");
			scanf("%d",&number);
			sqrt=number*number;
			printf("\nSquare=%d",sqrt);
			break;
		case 2:
			printf("\nEnter number=");
			scanf("%d",&number);
			cube=number*number*number;
			printf("\nCube=%d",cube);
			break;
		default:
			printf("\nEnter agian");
	}
}
