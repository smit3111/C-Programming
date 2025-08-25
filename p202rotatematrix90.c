#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N]={{1,2,3},{4,5,6},{7,8,9}};

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<N;i++)
	{
		for(j=N-1;j>=0;j--)
		{
			printf("%d ",m[j][i]);
		}
		printf("\n");
	}	
}
