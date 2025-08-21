#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi Hello My name is Smit"},ch;
	char len=strlen(text);
	int i,rem;
	char cha;
	for(i=len;i>1;i--)
	{
		ch=text[i];
		printf("%c",ch);
	}
}
