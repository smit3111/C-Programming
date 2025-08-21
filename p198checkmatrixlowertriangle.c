#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N]={{1,0,0},{4,5,0},{7,8,9}};
	int c=0;

/*	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Enter values=");
			scanf("%d",&m[i][j]);
		}
	}
*/	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}	
	
	printf("\n");
	for(i=1;i<N;i++)
	{
		if(m[1][i]==0)
		{
			c+=1;
		}
	}
	
	for(i=2;i<N;i++)
	{
		if(m[1][i]==0)
		{
			c+=1;
		}
	}
printf("%d",c);	
	if(c==2)
	{
		printf("\nLower Triangle matrix");
	}
	else
	{
		printf("\nNot a Lower Triangle matrix");
	}

}
