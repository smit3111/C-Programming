#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi Hello My name is Smit"},ch;
	int i,c=0;
	char len=strlen(text);
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(isupper(ch))
		{
			c++;
		}
	}
	printf("\nTotal uppercase=%d",c);
}
