#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	int temp[N];

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
	
	printf("\nAfter Swap");
	
	for(i=0;i<N;i++)
	{
		temp[i]=m[0][i];
		m[0][i]=m[2][i];
		m[2][i]=temp[i];
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
}

