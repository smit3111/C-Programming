#include<stdio.h>
void main()
{
	int i,arr[100]={-11,55,-6,90,23,32,-6,78,-32,21,-11,8,90,-2,3,-70},a[100];
	int n=16;
	
	for(i=0;i<n;i++)
	{	
		a[i]=arr[i]*arr[i];
		printf("\n%d\t %d",arr[i],a[i]);
	}
}



//factorial in different array
