#include<stdio.h>

struct emp
{
int eno;
char ename[20];
int salary;	
};

void main()
{
	struct emp e[100];
	int i,n;
	
	printf("Enter limit=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter eno=");
		scanf("%d",&e[i].eno);
		
		fflush(stdin);
		printf("\nEnter ename=");
		gets(e[i].ename);
		
		printf("\nEnter salary=");
		scanf("%d",&e[i].salary);
	}
		printf("\neno\t ename\t salary\t");
		printf("\n-----------------------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\neno= %d ename= %s salary=%d",e[i].eno,e[i].ename,e[i].salary);
	}

}
