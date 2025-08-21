#include<stdio.h>
void main()
{
	int i,size;
	
	printf("\nEnter size of array=");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
}
