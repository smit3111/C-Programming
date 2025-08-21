#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"smit"},ch;
	int len=strlen(text);
	int i;
	
	for(i=len;i>=0;i--)
	{
		ch=text[i];
		printf("%c",ch);
	}
}
