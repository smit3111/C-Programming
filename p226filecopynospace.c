#include<stdio.h>
void main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("d:\\abc4.txt","r");
	f2=fopen("d:\\abc5.txt","w");
	
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			
		}
		else
		{
			putc(ch,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	printf("\nCopied");
}
