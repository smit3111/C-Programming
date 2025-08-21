#include<stdio.h>
void main()
{
	int i,arr[100]={11,55,6,90,23,32,6,78,32,21,11,8,90,2,3,70};
	int n=16,c=0,sum=0,divisible;
	
	printf("\nEnter number to be divisible=");
	scanf("%d",&divisible);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]%divisible==0)
		{
		printf("\n %d",arr[i]);
		c++;
		sum=sum+arr[i];
		}
	}
	printf("\nCount=%d",c);
	printf("\nSum=%d",sum);
}
