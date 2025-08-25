#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	
	f1=fopen("d:\\abc4.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			printf("%c ",ch);
		}
	}
	fclose(f1);
}
