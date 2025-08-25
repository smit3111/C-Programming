#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N];
	int c=0;
	int size=N*N;
	
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
			if(m[i][j]==0)
			{
				c++;
			}
		}	
	}	
	if(c>size/2)
	{
		printf("\nSparse Mactrix");
	}
	else
	{
		printf("\nNot Sparse Mactrix");
	}
}
