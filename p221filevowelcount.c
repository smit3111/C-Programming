#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	
	f1=fopen("d:\\abc4.txt","r");
	int c=0;
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			printf("%c ",ch);
			c++;
		}
	}
	printf("\nCount =%d",c);
	fclose(f1);
}
