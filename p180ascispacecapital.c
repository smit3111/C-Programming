#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"hi hello my name is smit"},ch;
	int i;
	char len=strlen(text);
	
	for(i=0;i<len;i++)
	{
		if(text[i-1]==32)
		{
			printf("%c",text[i]-32);
		}
		else
		{
			printf("%c",text[i]);
		}
	}
}
