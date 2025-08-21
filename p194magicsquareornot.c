#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N];
	int sumd=0,sumr1=0,sumr2=0,sumr3=0;
	int sumc1=0,sumc2=0,sumc3=0;
	
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
	
//sum of diagonal
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j)
			{
				sumd+=m[i][j];
			}
		}
	}
	
//sum of row1	
	for(j=0;j<N;j++)
	{
		if(j>=0 && j<=2)
		{
			sumr1+=m[0][j];
		}
	}
	
//sum of row2	
	for(j=0;j<N;j++)
	{
		if(j>=0 && j<=2)
		{
			sumr2+=m[1][j];
		}
	}
	
//sum of row3
	for(j=0;j<N;j++)
	{
		if(j>=0 && j<=2)
		{
			sumr3+=m[2][j];
		}
	}
	
//sum of column1
	for(i=0;i<N;i++)
	{
		if(i>=0 && i<=2)
		{
			sumc1+=m[i][0];
		}
	}
	
//sum of column2
	for(i=0;i<N;i++)
	{
		if(i>=0 && i<=2)
		{
			sumc2+=m[i][1];
		}
	}
	
//sum of column3
	for(i=0;i<N;i++)
	{
		if(i>=0 && i<=2)
		{
			sumc3+=m[i][2];
		}
	}	

	if(sumd==sumr1 && sumd==sumr2 && sumd==sumr3 && sumd==sumc1 && sumd==sumc2 && sumd==sumc3)
	{
		if(sumr1==sumr2 && sumr1==sumr3 && sumr1==sumc1 && sumr1==sumc2 && sumr1==sumc3)
		{
			if(sumr2==sumr3 && sumr2==sumc1 && sumr2==sumc2 && sumr2==sumc3)
			{
				if(sumr3==sumc1 && sumr3==sumc2 && sumr3==sumc3)
				{
					printf("\nMagic square mactrix");
				}
			}
		}
	}
	else
	{
		printf("\nNot a magic square matrix");
	}
}
