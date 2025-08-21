#include<stdio.h>
void main()
{
	int i,arr[5]={55,22,33,44,90},pos,no,size=5;

	printf("\nEnter position at which value should add=");
	scanf("%d",&pos);
	printf("\nEnter number=");
	scanf("%d",&no);
		
	for(i=size;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	size++;
	arr[pos-1]=no;
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
}
