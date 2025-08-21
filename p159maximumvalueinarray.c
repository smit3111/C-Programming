#include<stdio.h>
void main()
{
	int pos=0,arr[10]={11,20,30,21,8,90,100,5,6,120},i,max;
	max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			pos=i;
		}
	}
	printf("MAx value= %d and position = %d",max,pos);
}
