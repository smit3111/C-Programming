#include<stdio.h>

void print_array(int *ptr,int size)
{
	int i;
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("\n %d",ptr[i]);
		
	}
	
}



void main()
{

	int size=0,arr[size],i,j;
	printf("\nEnter size of array=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	print_array(&arr,size);

	
}
