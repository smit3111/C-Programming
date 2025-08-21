#include<stdio.h>
void main()
{
	int i,no,sqrt,sum=0;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		sqrt=i*i;
		printf("%d + ",sqrt);
 		sum+=sqrt;
	 }
	printf("\nSum=%d",sum);
}
