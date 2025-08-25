#include<stdio.h>

struct emp
{
int eno;
char ename[20];
int salary;	
};

void main()
{
	struct emp e1,e2,e3;
	
	printf("Enter eno=");
	scanf("%d",&e1.eno);
	
	fflush(stdin);
	printf("\nEnter ename=");
	gets(e1.ename);
	
	printf("\nEnter salary=");
	scanf("%d",&e1.salary);
	
	printf("Enter eno=");
	scanf("%d",&e2.eno);
	
	fflush(stdin);
	printf("\nEnter ename=");
	gets(e2.ename);
	
	printf("\nEnter salary=");
	scanf("%d",&e2.salary);
	
	printf("Enter eno=");
	scanf("%d",&e3.eno);
	
	fflush(stdin);
	printf("\nEnter ename=");
	gets(e3.ename);
	
	printf("\nEnter salary=");
	scanf("%d",&e3.salary);
	
	printf("\neno= %d ename= %s salary=%d",e1.eno,e1.ename,e1.salary);
	printf("\neno= %d ename= %s salary=%d",e2.eno,e2.ename,e2.salary);
	printf("\neno= %d ename= %s salary=%d",e3.eno,e3.ename,e3.salary);
}
