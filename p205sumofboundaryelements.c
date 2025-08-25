#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	int size,sum=0;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
	size=N/2;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==size && j==size)
			{
				continue;
			}
			else
			{
				sum+=m[i][j];
			}
		}
	}
	printf("\nSum of Boundary Elements= %d",sum);
}

