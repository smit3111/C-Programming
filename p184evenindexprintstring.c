#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"hello my name is smit"},ch;
	int len=strlen(text);
	int i;
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(i%2==0 && ch!=' ')
		{
			printf(" %c",ch);
		}
	}
}
