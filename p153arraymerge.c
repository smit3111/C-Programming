#include<stdio.h>
void main()
{
	int size1,size,i,arr1[size],arr2[size1],arr3[100]={},index=0;
	
	printf("Enter size for array1=");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter size of array2=");
	scanf("%d",&size1);
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<size;i++)
	{
		arr3[index]=arr1[i];
		index++;
	}
	for(i=0;i<size1;i++)
	{
		arr3[index]=arr2[i];
		index++;
	}
	for(i=0;i<index;i++)
	{
		printf(" %d",arr3[i]);
	}
}
