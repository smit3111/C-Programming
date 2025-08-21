#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter number1=");
	scanf("%d",&a);
	printf("\nEnter number2=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nNumber 1=%d",a);
	printf("\nNumber 2=%d",b);

}
