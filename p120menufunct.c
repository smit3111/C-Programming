#include<stdio.h>
void add()
{

	int no1,no2,sum;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	
	sum=no1+no2;
	printf("\nSum= %d",sum);	
}

void max2()
{
	int no1,no2;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	
	if(no1>no2)
	{
		printf("\nNumber1 is greater");
	}
	else
	{
		printf("\nNumber2 is greater");
	}
}

void oddeven()
{
	int no1;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	
	
	if(no1%2==0)
	{
		printf("\nEven number");
	}
	else
	{
		printf("\nOdd number");
	}
}
void posneg()
{
	int no1;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	
	if(no1>0)
	{
		printf("\nNumber is positive");
	}
	else
	{
		printf("\nNumber is negative");
	}
}

void areatri()
{
	int l,h,a;
	printf("\nEnter number1=");
	scanf("%d",&l);
	printf("\nEnter number2=");
	scanf("%d",&h);
	a=l*h*0.5;
	printf("\nArea of triangle=%d",a);
}

void areacir()
{
	int r,a;
	printf("\nEnter number1=");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("\nArea of circle=%d",a);
}

void max3()
{
	int no1,no2,no3;
	printf("\nEnter number1=");
	scanf("%d",&no1);
	printf("\nEnter number2=");
	scanf("%d",&no2);
	printf("\nEnter number3=");
	scanf("%d",&no3);
	(no1>no2 && no1>no3) ? printf("\nNumber1 is greatest") : (no2>no3) ? printf("\nNumber2 is greatest") : printf("\nNumber3 is greatest");
}

void fact()
{
	int i,no,fact=1;
	printf("\nEnter number=");
	scanf("%d",&no);
	for (i = 1; i <= no; i++) 
	{
    
	    fact *= i;
	}
	printf("\nFactorial=%d",fact);
}

void table()
{
	int i,no;
	printf("\nEnter number=");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d =%d",no,i,i*no);
	}
}
void main()
{
	int choice;
	printf("\nEnter choice[1,2,3,4,5,6,7,8,9]=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add();
			break;
			
			
		case 2:
			max2(); 
			break;
		case 3:
			oddeven(); 
			break;
		case 4:
			posneg();
			break;
		case 5:
			areatri(); 
			break;
		case 6:
			areacir();
			break;
		case 7:
			max3();
			break;
		case 8:
			fact();
			break;
		case 9:
			table();
			break;
		default:
			printf("\nWrong choice");
	}
}
