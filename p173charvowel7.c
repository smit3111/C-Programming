#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi Hello My name is Smit"},ch;
	char len=strlen(text);
	int i;
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			printf("7");
		}
		else
		{
			printf("%c",ch);
		}
	}
}
