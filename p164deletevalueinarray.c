#include<stdio.h>
void main()
{
	int i,arr[5]={55,22,33,44,90},pos,size=5;

	printf("\nEnter position at which value should remove=");
	scanf("%d",&pos);
	

	for(i=pos-1;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
}
