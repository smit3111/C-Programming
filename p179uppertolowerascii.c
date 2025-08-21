#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi hello my name is Smit"},ch;
	int i;
	char len=strlen(text);
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(ch>=65 && ch<=90)
		{
			printf("%c",ch+32);
		}
		else if(ch>=97 && ch<=122)
		{
			printf("%c",ch-32);
		} 
		
	}
}
