#include<stdio.h>
void main()
{
	int i,size=6,size1=6,arr1[]={11,20,30,21,8,90},arr2[]={55,20,30,9,81,10},index=0,arr3[100]={};
	int j;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr1[i]!=arr2[j])
			{
				arr3[index]=arr1[i];
				index++;
			}		
		}
		
	}
	
	for(i=0;i<index;i++)
	{
		printf(" %d",arr3[i]);
	}
}
