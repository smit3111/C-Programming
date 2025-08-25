#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N];
	int sum=0;
	
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
		sum+=m[N-i-1][i];
	}
	printf("\nSum of secondary diagonal= %d",sum);
}
