#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	int c=0;
	f1=fopen("d:\\abc4.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			c++;			
		}
	}
	printf("\nCount=%d",c+1);
	fclose(f1);
}
