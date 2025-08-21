#include<stdio.h>
main()
{
	int no,esum=0,osum=0,rem;
	printf("Enter number=");
	scanf("%d",&no);

	while(no!=0)
	{
		rem=no%10;
		if(rem%2==0)
		{
			esum+=rem;
		}
		else
		{
			osum+=rem;
		}
		no=no/10;
	}
	printf("\nSum of even=%d",esum);
	printf("\nSum of odd=%d",osum);
}
