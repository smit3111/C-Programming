#include<stdio.h>
void main()
{
	FILE *f1,*f2,*f3;
	char ch;
	f1=fopen("d:\\abc4.txt","r");
	f2=fopen("d:\\abc5.txt","w");
	f3=fopen("d:\\abc6.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			putc(ch,f2);
		}
		else if(islower(ch))
		{
			putc(ch,f3);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nCopied");
}
