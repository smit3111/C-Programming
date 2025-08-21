#include<stdio.h>
void main()
{
	int no,sqrt;
	abc:
	printf("\nEnter number=");
	scanf("%d",&no);
	if(no>0)
	{
		sqrt=no*no;
		printf("\nSquare=%d",sqrt);
	}
	else
	{
		printf("\nNumber is negative, therefore no square");
		goto abc;
	}
}
