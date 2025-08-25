#include<stdio.h>

struct students
{
	int sno;
	char sname[20];
	int hindi;
	int english;
};

void main()
{
	struct students s1,s2,s3;
	
	printf("Enter sno=");
	scanf("%d",&s1.sno);
	
	fflush(stdin);
	printf("\nEnter sname=");
	gets(s1.sname);
	
	printf("\nEnter hindi marks=");
	scanf("%d",&s1.hindi);
	
	printf("\nEnter english marks=");
	scanf("%d",&s1.english);
	
	printf("Enter sno=");
	scanf("%d",&s2.sno);
	
	fflush(stdin);
	printf("\nEnter sname=");
	gets(s2.sname);
	
	printf("\nEnter hindi marks=");
	scanf("%d",&s2.hindi);
	
	printf("\nEnter english marks=");
	scanf("%d",&s2.english);
	
	printf("Enter sno=");
	scanf("%d",&s3.sno);
	
	fflush(stdin);
	printf("\nEnter sname=");
	gets(s3.sname);
	
	printf("\nEnter hindi marks=");
	scanf("%d",&s3.hindi);
	
	printf("\nEnter english marks=");
	scanf("%d",&s3.english);
	
	printf("\nSno=%d sname=%s hindi marks=%d english marks=%d",s1.sno,s1.sname,s1.hindi,s1.english);
	printf("\nSno=%d sname=%s hindi marks=%d english marks=%d",s2.sno,s2.sname,s2.hindi,s2.english);
	printf("\nSno=%d sname=%s hindi marks=%d english marks=%d",s3.sno,s3.sname,s3.hindi,s3.english);
}
