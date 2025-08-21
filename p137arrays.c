#include<stdio.h>
void main()
{
	int i,arr[100]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70};
	int n=16;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]%7==0)
		{
		printf("\n %d",arr[i]);
		}
	}
}
