#include<stdio.h>
void main()
{
	int credit_score,annual_inc,employment_year,curr_debt,loan_amount,age;
	char loan_type;
	float interest;
	printf("Enter your credit score=");
	scanf("%d",&credit_score);
	printf("\nEnter your annual income=");
	scanf("%d",&annual_inc);
	printf("\nEnter your years of employment=");
	scanf("%d",&employment_year);
	printf("\nEnter current debt=");
	scanf("%d",&curr_debt);
	printf("\nEnter amount of loan you want=");
	scanf("%d",&loan_amount);
	printf("\nEnter your age=");
	scanf("%d",&age);
	printf("\nEnter type of loan you want[a-auto,p-personal,h-home]=");
	scanf(" %c",&loan_type);

	if(credit_score<600)
	{
		printf("\nLoan cannot be granted");
	}
	if(employment_year<2 && credit_score<700)
	{
		printf("\nLoan cannot be granted");
	}	
	if(age<21 || age>70)
	{
		printf("\nAdditional check needs to be done first");
	}
	if(loan_amount>annual_inc*5)
	{
		printf("\nLoan cannot be granted");
	}
	
	if(loan_type=='a')
	{
		interest=5;
	}
	else if(loan_type=='p')
	{
		interest=8;
	}
	else if(loan_type=='h')
	{
		interest=3;
	}
	else
	{
		printf("\nWrong loan type");
	}
	
	if(credit_score>=750)
	{
        interest+=0;
	}
	else if(credit_score>=700 && credit_score<=749)
    {
	    interest+=1;
	}
	else if(credit_score>=650 && credit_score<=699)
    {
	    interest+=2;
	}
	else if(credit_score>=600 && credit_score<=649)
    {
	    interest+=3;
	}
	else
	{
		printf("\nTry again");
	}
	
	printf("\n Loan Approved, interest rate =%f",interest);

}
