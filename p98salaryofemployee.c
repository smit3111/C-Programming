#include<stdio.h>
int main()
{
	int gross_salary,salary,basic=8000,hra,ma,itc,va,pf;
	printf("Enter salary=");
	scanf("%d",&salary);
	
	ma=basic*0.10;
	itc=basic*0.05;
	hra=basic*0.10;
	va=basic*0.10;
	pf=basic*0.12;
	gross_salary=salary+ma+itc+hra+va;
	printf("\nGross Salary=%d",gross_salary);
	
	printf("\nNet salary=%d",gross_salary-pf);
	
}
