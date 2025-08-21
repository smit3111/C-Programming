#include<stdio.h>
#define N 3
void main()
{
	int i,j,x;
	int m[N][N];
	int c=0;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Enter values=");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(m[i][j]!=m[j][i])
			{
				c=1;
				break;
			}
		}
		if(c==1)
		{
			break;
		}
	}
	if(c==1)
	{	
		printf("\nNot symmetric");
	}
	else
	{
		printf("\nSymmetric");
	}
}
