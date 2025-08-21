#include<stdio.h>
#define N 2
void main()
{
	int i,j;
	int m1[N][N];
	int m2[N][N];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Enter numbers for matrix1=");
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n");	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Enter numbers for matrix2=");
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\nMatrix1\n");
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix2\n");
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of Matrix1 and Matrix2\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
}
