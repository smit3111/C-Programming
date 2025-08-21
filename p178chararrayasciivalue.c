#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi hello my name is Smit"},ch;
	char len=strlen(text);
	int i,c=0;
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(ch>=65 && ch<=90)
		{
			c++;
		}
	}
	printf("\nCount of Uppercase=%d",c);
}
