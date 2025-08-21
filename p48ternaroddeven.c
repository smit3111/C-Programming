#include<stdio.h>
main()
{
	int no;
	printf("Enter number=");
	scanf("%d",&no);
	
	no%2==0 ? printf("\nIt is even") : printf("\nIt is odd");
	
}
