#include<stdio.h>
main()
{
	int sum=0,no,rem;
	printf("Enter number=");
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		sum+=rem;
		no=no/10;
	}
	printf("\nSum=%d",sum);


}
