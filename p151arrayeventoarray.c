#include<stdio.h>
void main()
{
	int i,arr[16]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70},even[100]={};
	int index=0;
	
	for(i=0;i<16;i++)
	{
		if(arr[i]%2==0)
		{
			even[index]=arr[i];
			index++;
		}
	}
	for(i=0;i<index;i++)
	{
		printf(" %d",even[i]);
	}
}
