#include<stdio.h>

void array(int size)
{
	int arr[size],i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",arr[i]);
	}
}

void main()
{
	int size;
	printf("\nEnter size of array=");
	scanf("%d",&size);
	array(size);
}
