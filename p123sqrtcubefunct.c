#include<stdio.h>

void square(int no)
{
	printf("\nSquare=%d",no*no);
}

void cube(int no)
{
	printf("\nCube=%d",no*no*no);
}

void main()
{
	int no;
	printf("\nEnter number1=");
	scanf("%d",&no);
	square(no);
	cube(no);
}
