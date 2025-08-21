#include<stdio.h>
main()
{
	int no,r,no1,no2,no3,tri,cir;
	printf("Enter choice=");
	scanf("%d",&no);
	
	switch(no)
	{
	
		case 1:
			printf("\nEnter number1=");
			scanf("%d",&no1);
			printf("\nEnter number2=");
			scanf("%d",&no2);
			printf("\nEnter number3=");
			scanf("%d",&no3);
			tri=no1+no2+no3/2;
			printf("\nArea of triangle=%d",tri);
			break;
		
		case 2:
			printf("\nEnter radius=");	
			scanf("%d",&r);
			cir=3.14*r*r;
			printf("\nArea of circle=%d",cir);	
			break;
		
		default:
			printf("\nTry again");
		
	}
}
