#include<stdio.h>
void main()
{
	int i,no,f=0,s=1,n;
	printf("Enter limit=");
	scanf("%d",&no);
	
	printf("%d ",f);
	printf("%d ",s);
	for(i=0;i<no;i++)
	{
		n=f+s;
		printf("%d ",n);
		f=s;
		s=n;
	}
}
