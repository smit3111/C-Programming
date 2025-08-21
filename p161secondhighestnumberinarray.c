#include<stdio.h>
void main()
{
	int j,arr[10]={11,20,30,21,8,90,100,5,6,120},i,max,second_max;
	int max2;
	
	max=second_max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];		
		}
	}
	
	printf("\nMaximum value= %d",max);
	for(i=0;i<10;i++)
	{
		if(arr[i]!=max && arr[i]>second_max)
		{
			second_max=arr[i];
		}
	}
	printf("\nsecond highest value= %d",second_max);
}
