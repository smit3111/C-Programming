#include<stdio.h>
#define N 3
void main()
{
	int i,j,x;
	int m[N][N];
	int sum;
	
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
	
	printf("\nAddition of Diagonal of matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j)
			{
				sum+=m[i][j];
			}
		}
	}
	printf("\n%d",sum);
}
