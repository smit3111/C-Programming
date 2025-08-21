#include<stdio.h>
void main()
{
	int arr[20]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70,11,32},i,no,count=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=0;i<18;i++)
	{
		if(arr[i]==no)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\nSorry number not found");
	}
	else
	{
		printf("\n%d found %d times",no,count);
	}
}
