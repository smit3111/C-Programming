#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N]={{1,2,3},{0,5,6},{0,0,9}};
	int c=1;

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
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf(" %d",m[i][j]);
		}
	}


/*	if(c==0)
	{
		printf("\nUpper Triangle matrix");
	}
	else
	{
		printf("\nNot a Upper Triangle matrix");
	}
*/
}
