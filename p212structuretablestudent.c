#include<stdio.h>

struct students
{
	int sno;
	char sname[20];
	int hindi;
	int english;
	int total;
};

void main()
{
	struct students s[100];
	int i,n;
	
	printf("\nEnter limit=");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++)
	{

		printf("Enter sno=");
		scanf("%d",&s[i].sno);
	
		fflush(stdin);
		printf("\nEnter sname=");
		gets(s[i].sname);
	
		printf("\nEnter hindi marks=");
		scanf("%d",&s[i].hindi);
		
		printf("\nEnter english marks=");
		scanf("%d",&s[i].english);
		s[i].total=s[i].hindi+s[i].english;
	}
	printf("\nSno\t Sname\t Hindi Marks\t English Marks\t Total");
	printf("\n-------------------------------------------");
	for(i=0;i<n;i++)
	{
		if(s[i].total>=50)
		{
			printf("\nSno=%d sname=%s hindi marks=%d english marks=%d Total=%d Pass",s[i].sno,s[i].sname,s[i].hindi,s[i].english,s[i].total);
		}
		else
		{
			printf("\nSno=%d sname=%s hindi marks=%d english marks=%d Total=%d Fail",s[i].sno,s[i].sname,s[i].hindi,s[i].english,s[i].total);		
		}
	}
}
