#include<stdio.h>
void main()
{
	int arr1[6]={11,20,30,21,8,90},arr2[6]={55,20,30,9,81,10},i,j,index=0,arr3[100],f=0;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			f=0;
			if(arr1[i]==arr2[j])
			{
				f=1;
				break;
			}
		}
			if(f==0)
			{
				arr3[index]=arr1[i];
				index++;
			}
	}

	for(i=0;i<index;i++)
	{
		printf(" %d",arr3[i]);
	}
}


