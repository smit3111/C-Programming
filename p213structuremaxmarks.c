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
	int i,n,in=0;
	
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
		if(s[i].total>s[in].total)
		{
			in=i;
		}
	}
	printf("\n%d\t%s\t%d\t%d\t%d",s[in].sno,s[in].sname,s[in].hindi,s[in].english,s[in].total);
	
}
