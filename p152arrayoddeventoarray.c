#include<stdio.h>
void main()
{
	int i,arr[16]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70},even[100]={},odd[100]={};
	int ei=0,oi=0;
	
	for(i=0;i<16;i++)
	{
		if(arr[i]%2==0)
		{
			even[ei]=arr[i];
			ei++;
		}
		else
		{
			odd[oi]=arr[i];
			oi++;
		}
	
	}
	printf("\nEven");
	for(i=0;i<ei;i++)
	{
		printf(" %d",even[i]);
	}
	printf("\nOdd");
	for(i=0;i<oi;i++)
	{
		printf(" %d",odd[i]);
	}
}
