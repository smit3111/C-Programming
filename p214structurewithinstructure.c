#include<Stdio.h>

struct address
{
	char city[20];
	int pincode;
};

struct student
{
	int roll;
	char name[20];
	struct address add1,add2;
};

void main()
{
	struct student s[100];
	int i,n;
	
	printf("Enter limit=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter roll=");
		scanf("%d",&s[i].roll);
		
		fflush(stdin);
		printf("\nEnter name=");
		gets(s[i].name);
		
		printf("\nEnter city=");
		gets(s[i].add1.city);
		
		printf("Enter pincode=");
		scanf("%d",&s[i].add1.pincode);
	}
	printf("\neno\t ename\t salary\t");
	printf("\n------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\nroll=%d name=%s city=%s pincode=%d",s[i].roll,s[i].name,s[i].add1.city,s[i].add1.pincode);
	}
		
	
}
