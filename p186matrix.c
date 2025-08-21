#include<stdio.h>
#define N 2
void main()
{
	int i,j;
	int a[N][N];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter values=");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}
