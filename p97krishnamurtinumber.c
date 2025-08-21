#include<stdio.h>
int main()
{
	int result=0,i,no,fact,rem;
	printf("Enter number=");
	scanf("%d",&no);
	int original_no=no;

	while(no!=0)
		{
		rem=no%10;
		
		fact=1;
		for(i=1;i<=rem;i++)//145 => i=1 yes and 1<=5
		{
			fact*=i;
		}
		result+=fact;
		no=no/10;
		}
	
	if(result==original_no)
	{
		printf("\nIt is Krishnamurti Number");
	}
	else
		printf("\nIt is not Krishnamurti Number");

}
