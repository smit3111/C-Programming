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
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			putc(ch,f2);
		}
		else
		{
			putc(ch,f3);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nCopied");
}
