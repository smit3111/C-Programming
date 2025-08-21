#include<stdio.h>
void main()
{
	int i,no,c=0;
	printf("Enter number=");
	scanf("%d",&no);
	if(no==0)
	{
		printf("\nZero is neither prime nor composite");
	}
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
	}

	if(c==0)
	{
		printf("\nPrime");
	}
	else
	{
		printf("\nNot Prime");
	}

}
