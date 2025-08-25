#include<stdio.h>
#define N 3
void main()
{
	int i,j;
	int m[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	int det;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}

	det=((m[0][0]*((m[1][1]*m[2][2])-(m[2][1]*m[1][2])))-(m[0][1]*((m[2][2]*m[1][0])-(m[2][0]*m[1][2])))+(m[0][2]*((m[1][0]*m[2][1])-(m[2][0]*m[1][1]))));
	printf("\nDeterminant = %d",det);
}
