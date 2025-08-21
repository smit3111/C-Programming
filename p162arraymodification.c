#include<stdio.h>
void main()
{
	int i,arr[10]={11,20,30,21,8,90,10,5,6,12},index,no;
	printf("\nEnter index at which you want to change value=");
	scanf("%d",&index);
	printf("\nEnter number=");
	scanf("%d",&no);
	
	arr[index]=no;
	
	for(i=0;i<10;i++)
	{
		printf(" %d",arr[i]);
	}
}
