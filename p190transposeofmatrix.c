#include<stdio.h>
#define N 2
void main()
{
	int i,j;
	int m[N][3];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter number=");
			scanf("%d",&m[i][j]);
		}
	}
	printf("\nMatrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[j][i]);
		}
		printf("\n");
	}
}
