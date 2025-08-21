#include<stdio.h>
void main()
{
	int c,x,j,i,arr[16]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70};
	
	for(i=0;i<16;i++)
	{
		c=0;
		x=arr[i];
		for(j=2;j<x;j++)
		{
			if(x%j==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			printf(" %d",x);
		}
	}
}
