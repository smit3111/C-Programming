#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(i==5 || i==7)
		{
			break;
		}
		printf(" %d",i);
	}
}
