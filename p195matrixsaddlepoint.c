#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int a[N][N];
	int c,m;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Enter values=");
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
	
	for(i=0;i<N;i++)
	{
		c=1;
		m=a[i][0];
		for(j=0;j<N;j++)
		{
			if(m>a[i][j])	
			{
				m=a[i][j];
			}
			c++;
			if(c==4)
			{
				printf("\nMin of rows= %d",m);
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		c=1;
		m=a[0][i];
		for(j=0;j<N;j++)
		{
			if(m>a[i][j])
			{
				m=a[i][j];
			}
			c++;
			if(c==4)
			{
				printf("\nMin of column= %d",m);
			}
		}
	}
	
}
	
