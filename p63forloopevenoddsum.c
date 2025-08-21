#include<stdio.h>
main()
{
	int i,no,osum=0,esum=0,ec=0,oc=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			printf("\n%d-Even",i);
			esum=esum+i;
			ec++;
		}
		else
		{
			printf("\n%d-Odd",i);
			osum=osum+i;
			oc++;
		}
	
	}
	printf("\nSum of even=%d|Count of even=%d",esum,ec);
	printf("\nSum of odd=%d|Count of odd=%d",osum,oc);
}
