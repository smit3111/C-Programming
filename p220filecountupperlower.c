#include<stdio.h>
void main()
{
	FILE *f1;
	char ch;
	int u=0,l=0;
	f1=fopen("d:\\abc4.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			u++;
		}
		else if(islower(ch))
		{
			l++;
		}
	}
	printf("\nCount of Upper case=%d",u);
	printf("\nCount of Lower case=%d",l);
	fclose(f1);
}
