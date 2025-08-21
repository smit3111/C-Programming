#include<stdio.h>
void main()
{
	int c,x,j,i,arr[16]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70},prime[100]={};
	int cnt=0;
	
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
			prime[cnt]=x;
			cnt++;
		}
	}
	for(i=0;i<cnt;i++)
	{
		printf(" %d",prime[i]);	
	}
}
